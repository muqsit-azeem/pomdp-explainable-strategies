#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {15.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 14.5) {
		return 16.0f;
	}
	else {
		return 4.0f;
	}

}