#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    cin >> a >> b;
    int low = 0;
    if (floor(sqrt(a)) == sqrt(a)) {
        low = sqrt(a);
    }
    else {
        low = floor(sqrt(a)) + 1;
    }
    int high = 0;
    if (floor(sqrt(b)) == sqrt(b)) {
        high = sqrt(b);
    }
    else {
        high = floor(sqrt(b));
    }
    for(int i=low;i<=high;i++){
        cout << i * i<<" ";
    }
    return EXIT_SUCCESS;
    cout << "";
}