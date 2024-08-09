#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {17.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 18.0) {
		return 2.0f;
	}
	else {
		return 3.0f;
	}

}