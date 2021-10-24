#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++) {
        a = a * 2;
    }
    cout << a;
    return EXIT_SUCCESS;
}