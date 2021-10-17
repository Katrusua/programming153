#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int N, x;
    int zero = 0, pos = 0, neg = 0;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> x;
        if (x == 0)
        {

            zero++;
        }
        else
        {
            if (x > 0)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }
    }
    cout << zero << ' ' << pos << ' ' << neg;

    return EXIT_SUCCESS;
}