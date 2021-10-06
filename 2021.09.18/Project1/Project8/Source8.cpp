#include <iostream>
using namespace std;
int main(int argc, char* argv[]
) {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	cout << d * 3600 + e * 60 + f - a * 3600 - b * 60 - c;
	return EXIT_SUCCESS;
}