// POMDP Model for Coronary Artery Disease (CAD) and Myocardial Ischemia (MI)
// Including harmless chest pain, and tests with complications affecting treatment outcomes
pomdp

// Observables
observables
start, done, test1Result, test2Result, test3Result, complication, harmlessPain
endobservables

// Global Variables
global start : bool init false;
global disease1 : [0..1] init 0; // 0: No CAD, 1: CAD
global disease2 : [0..1] init 0; // 0: No MI, 1: MI
global done : bool init false;
global complication : [0..1] init 0; // 0: No complication, 1: Complication
// global timeElapsed : [0..5] init 0; // Time elapsed since the start
global harmlessPain : bool init false; // Harmless chest pain

// Symptoms and Cured Conditions
formula symptom = disease1=1 | disease2=1 | harmlessPain;
formula isCured = disease1=0 & disease2=0 & start;
observable symptom = symptom;
observable isCured = isCured;

// Doctor Module
module doctor
    test1Result : [0..2] init 0; // 0: Not done, 1: Negative, 2: Positive
    test2Result : [0..2] init 0; // 0: Not done, 1: Negative, 2: Positive
    test3Result : [0..2] init 0; // 0: Not done, 1: Negative, 2: Positive

    // Start
    [start] start=false -> 
        0.2: (start'=true) & (disease1'=0) & (disease2'=0) & (harmlessPain'=true) +
        0.2: (start'=true) & (disease1'=0) & (disease2'=1) & (harmlessPain'=false) +
        0.2: (start'=true) & (disease1'=1) & (disease2'=0) & (harmlessPain'=false) +
        0.2: (start'=true) & (disease1'=1) & (disease2'=1) & (harmlessPain'=false) +
        0.2: (start'=true) & (disease1'=0) & (disease2'=0) & (harmlessPain'=false);

    // Investigate
    
    // Cheap Test (Test 3): Basic screening for CAD and MI
    [test3] (disease1=0 & disease2=0 & harmlessPain=false) & !done & start -> 0.9 : (test3Result'=1) + 0.1 : (test3Result'=0);
    [test3] (disease1=1 & disease2=0 & harmlessPain=false) & !done & start -> 0.7 : (test3Result'=1) + 0.3 : (test3Result'=0);
    [test3] (disease1=0 & disease2=1 & harmlessPain=false) & !done & start -> 0.7 : (test3Result'=1) + 0.3 : (test3Result'=0);
    [test3] (disease1=1 & disease2=1 & harmlessPain=false) & !done & start -> 0.5 : (test3Result'=1) + 0.5 : (test3Result'=0);
    [test3] (harmlessPain=true) & !done & start -> 0.2 : (test3Result'=1) + 0.8 : (test3Result'=0); // Harmless pain detection is less reliable

    // Test1: Specific for CAD
    [test1] disease1=0 & !done & start -> 0.8 : (test1Result'=1) + 0.2 : (test1Result'=0);
    [test1] disease1=1 & !done & start -> 0.2 : (test1Result'=0) + 0.8 : (test1Result'=1);

    // Test2: Specific for MI
    [test2] disease2=0 & !done & start -> 0.8 : (test2Result'=1) + 0.2 : (test2Result'=0);
    [test2] disease2=1 & !done & start -> 0.2 : (test2Result'=0) + 0.8 : (test2Result'=1);

    // Treatments
    
    // Medicine: Success rates affected by complication
    [medicine] (disease1=0 & disease2=0) & !done & start -> 
        1 : (disease1'=0) & (disease2'=0);

    [medicine] (disease1=1 & disease2=0) & complication=0 & !done & start -> 
        0.8 : (disease1'=0) & (disease2'=0) + 
        0.2 : (disease1'=1) & (disease2'=0);
    [medicine] (disease1=1 & disease2=0) & complication=1 & !done & start -> 
        0.6 : (disease1'=0) & (disease2'=0) + 
        0.4 : (disease1'=1) & (disease2'=0);

    [medicine] (disease1=0 & disease2=1) & !done & start -> 
        1 : (disease1'=0) & (disease2'=1);

    [medicine] (disease1=1 & disease2=1) & complication=0 & !done & start -> 
        0.8 : (disease1'=0) & (disease2'=1) + 
        0.4 : (disease1'=1) & (disease2'=1);
    [medicine] (disease1=1 & disease2=1) & complication=1 & !done & start -> 
        0.6 : (disease1'=0) & (disease2'=1) + 
        0.4 : (disease1'=1) & (disease2'=1);

    // PCTA: Less invasive, affected by complication
    [pcta] (disease1=0 & disease2=0) & !done & start -> 
        1 : (disease1'=0) & (disease2'=0);

    [pcta] (disease1=1 & disease2=0) & complication=0 & !done & start -> 
        0.75 : (disease1'=0) & (disease2'=0) + 
        0.25 : (disease1'=1) & (disease2'=0);
    [pcta] (disease1=1 & disease2=0) & complication=1 & !done & start -> 
        0.55 : (disease1'=0) & (disease2'=0) + 
        0.45 : (disease1'=1) & (disease2'=0);

    [pcta] (disease1=0 & disease2=1) & complication=0 & !done & start -> 
        0.6 : (disease1'=0) & (disease2'=0) + 
        0.4 : (disease1'=0) & (disease2'=1);
    [pcta] (disease1=0 & disease2=1) & complication=1 & !done & start -> 
        0.4 : (disease1'=0) & (disease2'=0) + 
        0.6 : (disease1'=0) & (disease2'=1);

    [pcta] (disease1=1 & disease2=1) & complication=0 & !done & start ->
        0.65 : (disease1'=0) & (disease2'=1) + 
        0.35 : (disease1'=1) & (disease2'=1);
    [pcta] (disease1=1 & disease2=1) & complication=1 & !done & start ->
        0.45 : (disease1'=0) & (disease2'=1) + 
        0.55 : (disease1'=1) & (disease2'=1);

    // CABG: More invasive, more effective, but higher risk of complication
    [cabg] (disease1=0 & disease2=0) & !done & start -> 
        0.9 : (disease1'=0) & (disease2'=0) & (complication'=0) + 
        0.1 : (disease1'=0) & (disease2'=0) & (complication'=1); // Add complication with 10% probability

    [cabg] (disease1=1 & disease2=0) & complication=0 & !done & start -> 
        0.9 : (disease1'=0) & (disease2'=0) & (complication'=0) + 
        0.1 : (disease1'=1) & (disease2'=0) & (complication'=1); // Add complication with 10% probability
    [cabg] (disease1=1 & disease2=0) & complication=1 & !done & start -> 
        0.7 : (disease1'=0) & (disease2'=0) & (complication'=0) + 
        0.3 : (disease1'=1) & (disease2'=0) & (complication'=1);

    [cabg] (disease1=0 & disease2=1) & complication=0 & !done & start -> 
        0.8 : (disease1'=0) & (disease2'=0) & (complication'=0) + 
        0.2 : (disease1'=0) & (disease2'=1) & (complication'=1); // Add complication with 20% probability
    [cabg] (disease1=0 & disease2=1) & complication=1 & !done & start -> 
        0.6 : (disease1'=0) & (disease2'=0) & (complication'=0) + 
        0.4 : (disease1'=0) & (disease2'=1) & (complication'=1);

    [cabg] (disease1=1 & disease2=1) & complication=0 & !done & start ->
        0.75 : (disease1'=0) & (disease2'=1) + 
        0.25 : (disease1'=1) & (disease2'=1);
    [cabg] (disease1=1 & disease2=1) & complication=1 & !done & start ->
        0.55 : (disease1'=0) & (disease2'=1) + 
        0.45 : (disease1'=1) & (disease2'=1);

    // Wait: Increases time elapsed, no treatment
    [wait] disease1=0 & disease2=0 & !done & start -> 0.9 : (harmlessPain'=harmlessPain) + 0.1 : (harmlessPain'=false);
    [wait] (disease1=1 | disease2=1) & !done & start -> 0.9 : (complication'=complication) + 0.1 : (complication'=1);

    // Done: Completes the process if cured
    [Done] isCured -> 1 : (done' = true);
endmodule

label "done" = done;

// Rewards for Costs
rewards "cost"
    [test1] true : 5;
    [test2] true : 20;
    [test3] true : 15;
    [medicine] (test1Result = 0 & test2Result = 0 & test3Result = 0) : 100; // Do not treat without diagnosis
    [medicine] !(test1Result = 0 & test2Result = 0 & test3Result = 0) : 10;
    [pcta] (test1Result = 0 & test2Result = 0 & test3Result = 0) : 100; // Do not treat without diagnosis
    [pcta] !(test1Result = 0 & test2Result = 0 & test3Result = 0) : 50;
    [cabg] (test1Result = 0 & test2Result = 0 & test3Result = 0) : 150; // Do not treat without diagnosis
    [cabg] !(test1Result = 0 & test2Result = 0 & test3Result = 0) : 100;
    [wait] true : 5; // Cost of waiting increases with time

    // Additional cost due to complications
    [medicine] complication=1 : 20;
    [pcta] complication=1 : 50;
    [cabg] complication=1 : 100;
endrewards
