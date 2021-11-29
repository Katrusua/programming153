#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	int mx = 0;
	int mn = 0;
	int i = 2;
	cin >> mn >> mx;
	while (cin >> x)
	{
		i++;
		if (i % 2)
		{
			if (x < mn)mn = x;
		}
		else if (x > mx)mx = x;
	}
	cout << mx + mn;
	cout << endl;

	return EXIT_SUCCESS;
}