#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {5.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 4.5) {
		return 22.0f;
	}
	else {
		return 19.0f;
	}

}