#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int m[3][4];
	int i, j, sum = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout << "Enter value for " << i << j << " : ";
			cin >> m[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			cout << setw(3) << m[i][j];
		cout << endl;
	}
	cout << "\n sum of upper triangle : ";
	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < 4; j++)
			sum += m[i][j];
	}
	cout << sum;
	sum = 0;
	cout << "\n sum of lower triangle : ";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < i; j++)
			sum += m[i][j];
	}
	cout << sum;
	return 0;
}