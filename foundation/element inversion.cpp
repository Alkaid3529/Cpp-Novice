/* Alkaid#3529 */

#include<iostream>
using namespace std;

void inverse(int a[5]);

int main()
{
	srand((unsigned)time(NULL));
	int a[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		a[i] = rand() % 5 + i;
	}

	cout << "原数组为:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << "  ";
	}

	inverse(a);

	cout << "\n\n转换后的数组为:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << "  ";
	}

	return 0;
}

void inverse(int a[5])
{
	int mid = 0;

	for (int i = 0; i < 3; i++)
	{
		mid = a[i];
		a[i] = a[4 - i];
		a[4 - i] = mid;
	}

	return;
}