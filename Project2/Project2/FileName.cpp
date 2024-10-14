#include <iostream>
using namespace std;
int main() {
	int sum1=0, n, a;
	cin >> n;
	int b[100];
	while (sum1 < n) {
		cin >> a;  
		b[sum1] = a;
		sum1 ++ ;
	}
	int e;
	for (int i = 1; i <= n; i++) {
		e = b[i - 1];
		if (e == 0) {
			cout << 0 << endl;
			continue;
		}
		if (e == 1){
			cout << 1 << endl;
			continue;
		}
			
		int f1 = 1;
		int f2 = 0;
		int fn = 0;
		for (int i = 2; i <= e; i++)
		{
			fn = f2 + f1;
			f2 = f1;
			f1 = fn;
		}
		cout << fn << endl;
	}
	return 0;
}