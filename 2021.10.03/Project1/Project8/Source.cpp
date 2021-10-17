#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int N, x;
    int sum = 0;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> x;
        sum += x;
    }
    cout << sum;
    return EXIT_SUCCESS;
}