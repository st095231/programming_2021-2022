#include<iostream>

using namespace std;

int main(int argc, char* agrv[]) {
	int n = 0;
	
	cin >> n;
	if (((n % 4 == 0) & (n % 100 != 0)) || (n % 400 == 0)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return EXIT_SUCCESS;
}