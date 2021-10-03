#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int n = 0;
    cin >> n;
    int a = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        sum = sum + a;
    }
    cout << sum;
    return EXIT_SUCCESS;
}