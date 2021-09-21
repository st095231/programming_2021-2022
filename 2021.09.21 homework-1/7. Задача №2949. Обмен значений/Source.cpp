#include<iostream>
using namespace std;
int main(int argc, char* agrv[]) {
	int a, b, c;
	cin >> a >> b;
	c = a;
	a = b;
	b = c;
	cout << a << " " << b;
	EXIT_SUCCESS;
}