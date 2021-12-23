#include<iostream>

using namespace std;

int main(int argc, char* agrv[]) {
	int x = 0;
	int sqr_x = 0;

	cin >> x;
	sqr_x = x * x;
	cout << (sqr_x + x) * sqr_x + sqr_x + x + 1;

	EXIT_SUCCESS;
}