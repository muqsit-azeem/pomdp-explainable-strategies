#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {16.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 15.5) {
		return 16.0f;
	}
	else {
		return 21.0f;
	}

}