#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int n = 0;
	
	cin >> n;
	switch (n) {
		case 1: {cout << "9 45"; break; }
		case 2: {cout << "10 35"; break; }
		case 3: {cout << "11 35"; break; }
		case 4: {cout << "12 25"; break; }
		case 5: {cout << "13 25"; break; }
		case 6: {cout << "14 15"; break; }
		case 7: {cout << "15 15"; break; }
		case 8: {cout << "16 5"; break; }
		case 9: {cout << "17 5"; break; }
		case 10: {cout << "17 55"; break; }
	}
	return EXIT_SUCCESS;
}