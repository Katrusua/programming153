#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int N, i, M; // M=N!
    cin >> N;
    M = 1;
    for (i = 1; i <= N; ++i) {
        M = M * i;
    }
    cout << M;
    return EXIT_SUCCESS;

}