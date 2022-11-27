#include <iostream>
using namespace std;
int main10()
{
	int
		number,
		number1 = -1,
		number2 = 1,
		sum;
	cout << "Enter the number -> ";
	cin >> number;
	for (int i = 0; i < number; i++)
	{
		sum = number1 + number2;
		number1 = number2;
		number2 = sum;
		cout << sum << endl;
	}
//  getch();
	return 0;
}