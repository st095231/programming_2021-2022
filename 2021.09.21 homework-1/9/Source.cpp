#include<iostream>
using namespace std;
int main(int argc, char* agrv[]) {
	int x, sqr_x;
	cin >> x;
	//x ^ 4 + x ^ 3 + x ^ 2 + x + 1 = (x ^ 2 + x) * x ^ 2 + x ^ 2 + x + 1;
	sqr_x = x * x;
	cout << (sqr_x + x) * sqr_x + sqr_x + x + 1;
	EXIT_SUCCESS;
}