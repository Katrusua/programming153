#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int N, i, M;
    cin >> N;
    M = 1;
    for (i = 1; i <= N; ++i) {
        M = M * 2;
    }
    cout << M;
    return EXIT_SUCCESS;

}
