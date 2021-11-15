#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int k = 0;
    int m = 0;
    int n = 0;

    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> n >> m;
        cout << 19 * m + (n + 239) * (n + 366) / 2;;
    }

    cout << endl;

    return EXIT_SUCCESS;
}