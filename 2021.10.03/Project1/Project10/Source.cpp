#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a, b;

    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        int Sqrt = sqrt((double)i);
        if (Sqrt * Sqrt == i)
            cout << i << ' ';
    }

    return EXIT_SUCCESS;
}