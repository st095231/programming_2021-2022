#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int n = 0;
    cin >> n;
    int count_left= 0;
    int count_center = 0;
    int count_right = 0;
    int a = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        if (a > 0) { count_right++; };
        if (a == 0) { count_center++; }
        if (a < 0) { count_left++; }
    }
    cout << count_center << " " << count_right << " " << count_left;
    return EXIT_SUCCESS;
}