#include <iostream>
using namespace std;

void sum_symbol(char* t, int s);

void main()
{
	setlocale(LC_ALL, "ru");
	string text = "Hello World!!! 2021-0512. By";
	cout << text << endl;
	int s = text.length();
	sum_symbol(&text[0], s);

}

void sum_symbol(char* t, int s)
{
	int b = 0, n = 0, c = 0;
	for (int i = 0; i < s; i++) {

		if (t[i] >= 'a' && t[i] <= 'z' || t[i] >= 'A' && t[i] <= 'Z') {
			b++;
		}
		if (t[i] >= '0' && t[i] <= '9') {
			n++;
		}
    }
	c = s - b - n;
	cout << "Букв - " << b << endl;
	cout << "Цифр - " << n << endl;
	cout << "Символы - " << c << endl;
}
