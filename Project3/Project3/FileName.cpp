#include<iostream>
using namespace std;
int main() {
	int sum1;
	int i = 1;
	int a[100];
	while (1) {
		cin >> sum1;
		if (sum1 != 0) {
			a[i] = sum1;
			i++;
		}
		else {
			break;
		}
	}
	for (int b = i-1; b > 0; b--) {
		cout << a[b] << ' ';
	}
	return 0;
}