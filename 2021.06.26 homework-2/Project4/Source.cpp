#include<iostream>

using namespace std;

/*
int main(int argc, char* agrv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;
	int t = ((a > 0) * 8 + (b > 0) * 4 + (c > 0) * 2 + (d > 0) * 1);
		if ((t == 1) || (t == 2) || (t == 3)) {
			cout << "INF";
		}
	if ((t == 4) || (t == 5) || (t == 6) || (t == 7) || (t == 8) || (t == 12)) {
		cout << "NO";
	}
	if ((t == 9) || (t == 13)) {
		if (b % a == 0) {
			cout << -b / a;
		}
		else {
			cout << "NO";
		}
	}
	if ((t == 10) || (t == 11) || (t == 14) || (t == 15)) {
		if ((b / a == d / c) || (-b % a != 0)) {
			cout << "NO";
		}
		else {
			cout << -b / a;
		}
	}
	return EXIT_SUCCESS;
}
*/


int main(int argc, char* agrv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;
	int t = ((a > 0) * 8 + (b > 0) * 4 + (c > 0) * 2 + (d > 0) * 1);
	if ((t == 1) || (t == 2) || (t == 3)) {
		cout << "INF";
	}
	if ((t == 4) || (t == 5) || (t == 6) || (t == 7) || (t == 8) || (t == 12)) {
		cout << "NO";
	}
	if ((t == 9) || (t == 13)) {
		if (b % a == 0) {
			cout << -b / a;
		}
		else {
			cout << "NO";
		}
	}
	if ((t == 10) || (t == 11) || (t == 14) || (t == 15)) {
		if ((b / a == d / c) || (-b % a != 0)) {
			cout << "NO";
		}
		else {
			cout << -b / a;
		}
	}
	return EXIT_SUCCESS;
}