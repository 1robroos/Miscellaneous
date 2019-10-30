#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int l1 = s1.length();
	int l2 = s2.length();
	int total = l1 + l2;
	for(int i=0;i<l1;i++)
		for (int j = 0; j < l2; j++)
		{
			if (s1.at(i) == s2.at(j))
				total -= 2;
		}
	int x = total % 7;
	switch (x)
	{
	case 0: cout << " Friendship";
		break;
	case 1: cout << " Love";
		break;
	case 2: cout << " Affection";
		break;
	case 3:cout << "Marriage";
		break;
	case 4:cout << "Enemies";
		break;
	case 5:cout << "Sweethearts";
		break;
	}
	return 0;



}