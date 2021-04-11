#include <iostream>
using namespace std;

void words(char* st, int s);

void main()
{
	string str = "hello world it me happy ";
	cout << str << endl;
	int s = str.length();
	words(&str[0], s);


}

void words(char* st, int s)
{
	int wor = 0;

	

	for (int i = 0; i < s; i++) {
		
		if (st[i] == ' ')
			wor++;
		
	}
	if(st[0] == ' ' || st[s-1])
	cout << wor << endl;
}