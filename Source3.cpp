#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	if (a * b == 0)
	{
		return a + b;
	}
	if (a < b)
	{
		return gcd(a, b % a);
	}
	else
	{
		return gcd(a % b, b);
	}
}
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	cout << a * b / gcd(a, b);
	cout << endl;

	return EXIT_SUCCESS;
}