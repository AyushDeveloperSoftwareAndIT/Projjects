#include <iostream>
#include <conio.h>
using namespace std;
void passArray(int* array)
{
	for (int i = 0; i < 5; i++)
	{
		array[i] += 3;
	}
	return;//remove this return;
}
int main()
{
	int array[5];
	cout << "enter the Elements of array -> \n";
	for (int i = 0; i < 5; i++)
	{
		cout << "\tElement NO." << i << " = ";
		cin >> array[i];
	}
	passArray(array);
	cout << "displaying array:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "\tElement NO." << i << " = "<<array[i] << endl;
	}
}