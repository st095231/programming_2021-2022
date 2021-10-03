#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int count = 0;
    cin >> n;
    for (int i = 1; count < n; i++) {
        for (int j = 1; (j <= i && count < n); j++) {
            count++;
            cout << count << " ";
        }
        cout << "\n";
    }
    return EXIT_SUCCESS;
}