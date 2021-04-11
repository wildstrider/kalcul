#include <iostream>
using namespace std;
#define tab "\t"

const int s = 10;

void fill_arr(int* arrA, int* arrB);
void show_arr(int* arr);
void copy_past(int* arrA, int* arrB, int* arrC);

void main()
{
	int arrA[s];
	int arrB[s];
	int arrC[s];
	fill_arr(arrA, arrB);
	cout << "arrA" << tab;
	show_arr(arrA);
	cout << "arrB" << tab;
	show_arr(arrB);
	copy_past(arrA, arrB, arrC);
	cout << "arrC" << tab;
	show_arr(arrC);
}

void fill_arr(int* arrA, int* arrB)
{
	for (int i = 0; i < s; i++) {

		arrA[i] = rand() % 50;
		arrB[i] = rand() % 50;
 }
}
void show_arr(int* arr)
{
	for (int i = 0; i < s; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void copy_past(int* arrA, int* arrB, int* arrC)
{
	for (int i = 0; i < s; i++) {

		arrC[i] = arrA[i] + arrB[i];
		
	}
}