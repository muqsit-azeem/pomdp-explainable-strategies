#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,6.f,0.f,1.f,1.f,1.f,1.f,0.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		if (x[3] <= 0.5) {
			return 3.0f;
		}
		else {
			if (x[1] <= 1.5) {
				return 23.0f;
			}
			else {
				if (x[1] <= 3.5) {
					return 31.0f;
				}
				else {
					if (x[1] <= 5.5) {
						return 2.0f;
					}
					else {
						return 31.0f;
					}

				}

			}

		}

	}
	else {
		return 0.0f;
	}

}