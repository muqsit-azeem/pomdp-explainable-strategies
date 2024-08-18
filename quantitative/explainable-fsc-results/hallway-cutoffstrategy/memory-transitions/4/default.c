#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {17.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 6.0) {
		if (x[0] <= 4.5) {
			return 4.0f;
		}
		else {
			return 19.0f;
		}

	}
	else {
		return 4.0f;
	}

}