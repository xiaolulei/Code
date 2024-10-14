#include<iostream>
using namespace std;
int main() {
	int l, m, u, v, a[10004], c = 0;
	cin >> l >> m;
	for (int i = 0; i <= l; i++) {
		a[i] = 0;
	}
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		for (int b = u; b <= v; b++) {
			a[b] = 1;
		}
	}
	for (int b = 0; b <= l; b++) {
		if (a[b] == 0) {
			c++;
		}
	}
	cout << c;
	return 0;
}