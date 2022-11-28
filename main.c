#include <stdio.h>
#include <math.h>


int main() {
	float z = 1.001;
	float y = 6.153;
	float res;
	
	res = (tan(cos(z)) + 4 * sin(z) / cos(y) + sqrt(y * z));

		printf("%f", res );

	return 0;
}

	
