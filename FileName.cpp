#include <iostream>
using namespace std;
int main()
{
	int a, b, f;
	char c;
	cin >> a >> b >> c >> f;
	for (int g = 1;g <= a; g++)
	{
		for (int h = 1; h <= b; h++)
		{
			if (h == b || f == 1 || g == a || h == 1 || g == 1){
				cout << c;
		}
			else{cout << ' ';
			}
				
		}
		cout << endl;
	}
	return 0;
}