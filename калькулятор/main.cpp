#include <iostream>
using namespace std;

int pluse(int x, int y, char c);
int min(int x, int y, char c);
int del(int, int, char c);
int ymnoj(int, int, char c);

int main()
{
	setlocale(LC_ALL, "ru");

	int x,y;
	char c;
	cout << "¬ведите первое число: ";
	cin >> x;
	cout << "¬ведите (* / + -)";
	cin >> c;
	cout << "¬ведите второе число: ";
	cin >> y;
	
	cout << endl;
	int (*operations[4])(int x, int y, char c) = {min, del, ymnoj, pluse};
	int size = sizeof(operations)/sizeof(operations[0]);

	for (int i = 0; i < size; i++) {

		if (operations[i](x, y, c) != 0) {
			cout << x << c << y << " = " << operations[i](x, y, c) << endl;
			break;
		}
	}
	return 0;
}

int pluse(int x, int y, char c)
{
	if (c == '+') {
		x =  x + y;
		return x;
	}
	
	return 0;
}
int min(int x, int y, char c)
{
	if (c == '-') {
		x = x - y;
		return x;
	}
	else
	return 0;
}
int del(int x, int y, char c)
{
	if (c == '/') {
		x = x / y;
		return x;
	}
	else
	return 0;
}
int ymnoj(int x, int y, char c)
{
	if (c == '*') {
		x =  x * y;
		return x;
	}
	else
	return 0;
}