#include <iostream>
using namespace std;
#define tab '\t'

void search(char* f, int s);

void main()
{
	string simbol = " hello world !!! 2021";
	cout << simbol << endl;
	int s = simbol.length();
	search(&simbol[0], s);
	cout << endl;
	cout << simbol;
}

void search(char* f, int s)
{
	for (int i = 0; i < s; i++) {

		if (f[i] == ' ') {
			f[i] = tab;
		}
    }
}
