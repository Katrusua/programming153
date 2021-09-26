#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int k = 0;
	cin >> n >> m >> k;
	if (((n + m) <= k) || ((m + k) <= n) || ((n + k) <= m))
	{
		cout << "impossible";
	}
	else
	{
		if (((n * n + m * m) == (k * k)) || ((n * n + k * k) == (m * m)) || ((k * k + m * m) == (n * n)))
		{
			cout << "right";
		}
		else
		{
			if ((k * k > n * n + m * m) || (n * n > k * k + m * m) || (m * m > k * k + n * n))
			{
				cout << "obtuse";
			}
			else
			{
				cout << "acute";
			}
		}

	}
	return EXIT_SUCCESS;
}