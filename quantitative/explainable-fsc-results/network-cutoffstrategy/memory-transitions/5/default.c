#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 0.5) {
		return 6.0f;
	}
	else {
		return 7.0f;
	}

}