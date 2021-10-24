#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 4;
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++) {
        a = a * i;
    }
    cout << a;
    return EXIT_SUCCESS;
}