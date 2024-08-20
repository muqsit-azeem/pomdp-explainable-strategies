#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {6.f,0.f,1.f,1.f,3.f,1.f,0.f,5.f,0.f,2.f,4.f,0.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[3] <= 0.0) {
		if (x[7] <= 4.5) {
			return 5.0f;
		}
		else {
			return 2.0f;
		}

	}
	else {
		return 6.0f;
	}

}