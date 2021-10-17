#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0, k = 0;
    cin >> n >> k;


    int f = 1;
    for (int i = 2; i <= n; ++i) {
        f = f * i;

    }


    int g = 1;
    for (int i = 2; i <= k; ++i) {
        g = g * i;
    }


    int l = 1;
    for (int i = 2; i <= (n - k); ++i) {
        l = l * i;
    }

    int C;
    cout << f / g / l;



    return EXIT_SUCCESS;
}