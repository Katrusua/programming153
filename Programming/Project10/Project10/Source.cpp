#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	int a, b;
	cin >> a >> b;
	int m;
	((a >= b) && (m = a)) || ((b >= a) && (m = b));
	cout << m;
	return EXIT_SUCCESS;
}