#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int n = 0;
	int parityCount = 0;
	int max0 = 0;
	int min1 = 0;
	int i = 0;
	
	while (cin >> n){
		i = i + 1;
		if (i % 2) {
			if (i == 1) { min1 = n; }
			if (n < min1) { min1 = n; }
		}
		else {
			if (i == 2) { max0 = n; }
			if (n > max0) { max0 = n; }
		}
	}
	cout << max0 + min1 << endl;

	return EXIT_SUCCESS;
}