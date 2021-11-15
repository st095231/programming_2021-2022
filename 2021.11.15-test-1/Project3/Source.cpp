#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int n = 0;
	int m = 0;
	int prod = 0;
	cin >> n >> m;
	prod = n * m;
	while (m != n) {
		if (m > n) {
			m = m - n;
		}else {
			n = n - m;
		}
	}
	cout << (prod / n);

	return EXIT_SUCCESS;
}