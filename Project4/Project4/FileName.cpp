#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int boy = 0, girl = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'b' || (i + 1 < str.size() && str[i + 1] == 'o') || (i + 1 < str.size() && str[i + 2] == 'y'))
			boy++;
		if (str[i] == 'g' || (i + 1 < str.size() && str[i + 1] == 'i') || (i + 2 < str.size() && str[i + 2] == 'r') || (i + 3 < str.size() && str[i + 3] == 'l'))
			girl++;
	}
	cout << boy << '\n' << girl;
	return 0;
}
