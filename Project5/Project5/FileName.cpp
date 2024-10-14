#include<iostream>
#include<string>
using namespace std;
int main() {
	int q, l, a, b, sum = 0;
	string str, str1, str2, str3, str4;
	cin >> q;
	cin >> str;
	for (int i = 0; i < q; i++) {
		cin >> l;
		string t;
		if (l == 1) {
			cin >> t;
			str = str + t;
			str1 = str;
		}
		else if (l == 2) {
			cin >> a >> b;
			str2 = str.substr(a, b);
			
		}
		else if (l == 3) {
			cin >> a >> t;
			str.insert(a, t);
			str3 = str;
		}
		else if (l == 4) {
			cin >> t;
			int pos = str.find(t);
			sum = pos;
		}
		
	}
	cout << str1 <<'\n';
	cout << str2 <<'\n';
	cout << str3 <<'\n';
	cout << sum;
	return 0;
}