#include<iostream>
using namespace std;
int main(int argc, char* agrv[]) {
	int v, t;
	cin >> v >> t;
	cout << ((v * t % 109) + 109) % 109;
	EXIT_SUCCESS;
}