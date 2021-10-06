#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	int V, T;
	cin >> V >> T;
	cout << (109 + (V * T) % 109) % 109;
	return EXIT_SUCCESS;
}