#include<iostream>
using namespace std;
int main(int argc, char* agrv[]) {
	int a;
	cin >> a;
	cout << a%10+a/10%10+a/100;
	EXIT_SUCCESS;
}