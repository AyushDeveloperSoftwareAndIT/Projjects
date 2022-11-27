#include <iostream>
#include <conio.h>
using namespace std;
int main11()
{
	int comp1[2][2];
	int comp2[2][2];
	int sum[2][2];
	cout << "enter the values of metrix 1\n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << i << " , " << j << " = ";
			cin >> comp1[i][j];
		}
	}
	cout << "enter the values of metrix 2\n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << i << " , " << j << " = ";
			cin >> comp2[i][j];
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			sum[i][j] = comp1[i][j] + comp2[i][j];
		}
	}
	cout << "sum of matrix 1 and 2 is \n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << sum[i][j] << "\t";
		}
		cout << endl;
	}
	//getch();
	return 0;
}