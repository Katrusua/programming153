#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;
	if ((a - c) == (b - d) || (a == c) || (b == d) || (a - c) == (d - b) || (c - a) == (b - d))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return EXIT_SUCCESS;
}
