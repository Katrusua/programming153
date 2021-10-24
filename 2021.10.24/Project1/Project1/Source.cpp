#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    const int N = 7;
    int a[N] = { 2, -7, 35, -28, 6, 23, -9 }; 
        

    cout << "ARRAY:";
    for (int i = 0; i < N; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    

    cout << "EVEN:";

        for (int i = 0; i < N; ++i)
        {
            if (a[i] % 2 == 0)
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;

        cout << "SUM:";
        int sum = 0;
        for (int i = 0; i < N; ++i)
        {
            sum += a[i];
        }
        cout << sum << endl;

        cout << "PRODUCT OF NEGATIVE:";
        int m = 1;
        for (int i = 0; i < N; ++i)
        {
            if (a[i] < 0)
            {
                m *= a[i];
            }

        }
        cout << m << endl;

        cout << "FIRST MIN INDEX:";
        int min_idx = 0;
        int min_val = a[0];
        for (int i = 1; i < N; ++i)
        {
            if (a[i] < min_val)
            {
                min_val = a[i];
                min_idx = i;
            }

        }
        cout << min_idx << endl;

        cout << "FIRST MAX:"; // SECOND MAX не получается
        int idx = 0;
        int max = a[0];

        for (int i = 1; i < N; ++i)
        {
            if (a[i] > max)
            {
                max = a[i];
                idx = i;
            }
        }

        cout << max << endl;

        cout << "REVERSE:";
        for (int i = N - 1; i != -1; i--)
        {
            cout << a[i] << " ";
        }

        cout << endl;
        
        cout << "ODD INDEXES:";
        for (int i = 1; i < N; i += 2)
        {
            cout << a[i] << " ";
        }

        cout << endl;

    return EXIT_SUCCESS;
}