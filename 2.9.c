#include <stdio.h>
#include <stdlib.h>
int main() {
	int b, c[20], d[20], sum1 = 0, sum2 = 0, zmax = 0, zmin = 0, fmax = 0, fmin = 0;
	for (int a = 20; a > 0; a--) {
		scanf_s ("%d", &b);
		if (b > 0) {
			sum1++;
			for (int i = 0; i < sum1; i++) {
				c[0] = 0;
				c[i] = b;
				if (c[i] > c[i - 1]) {
					zmax = c[i];
				}
				else {
					zmin = c[i - 1];
				}
			}
		}
		if (b < 0) {
			sum2++;
			for (int i = 0; i < sum1; i++) {
				d[0] = -1000000;
				d[i] = b;
				if (d[i] > d[i - 1]) {
					fmax = d[i];
				}
				else {
					fmin = d[i - 1];
				}
			}
		}
		
	}
		printf("%d\n%d\n%d\n%d", zmin, zmin, fmax, fmin);
		return 0;
}