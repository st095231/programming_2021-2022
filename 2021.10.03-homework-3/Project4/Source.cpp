#include<iostream>

using namespace std;

int f(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}
int main(int argc, char* argv[]){
    int n = 0;
    int k = 0;
    cin >> n >> k;
    cout << f(n)/f(k)/f(n-k);
    return EXIT_SUCCESS;
}