#include<iostream>
using namespace std;
int recur(int n)
{
	if (n == 1)
		return true;
	else if (n % 2 == 0)
	{
		recur(n / 2);
	}
	else if (n % 2 != 0)
	{
		recur((3 * n) + 1);
	}
}
int main()
{
	int n;
	cin >> n;
	recur(n) ? cout << "Yes" : cout << "No";
	return 0;
}