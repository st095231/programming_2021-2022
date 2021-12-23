#include<iostream>

using namespace std;

int main(int argc, char* agrv[]) {
	int n = 0;
	cin >> n;
	int c = n % 10; n = n / 10;
	int b = n % 10; n = n / 10;
	int a = n % 10; n = n / 10;
	switch (a) {
	case 1: {cout << "сто "; break;	}
	case 2: {cout << "двести "; break; }
	case 3: {cout << "триста "; break; }
	case 4: {cout << "четыреста "; break; }
	case 5: {cout << "пятьсот "; break; }
	case 6: {cout << "шестьсот "; break; }
	case 7: {cout << "семьсот "; break; }
	case 8: {cout << "восемьсот "; break; }
	case 9: {cout << "девятьсот "; break; }
	}
	switch (b * 10 + c) {
		case 11: {cout << "одиннадцать бананов"; break; }
		case 12: {cout << "двенадцать бананов"; break; }
		case 13: {cout << "тринадцать бананов"; break; }
		case 14: {cout << "четырнадцать бананов"; break; }
		case 15: {cout << "пятнадцать бананов"; break; }
		case 16: {cout << "шестнадцать бананов"; break; }
		case 17: {cout << "семнадцать бананов"; break; }
		case 18: {cout << "восемнадцать бананов"; break; }
		case 19: {cout << "девятнадцать бананов"; break; }
		default: {
			switch (b) {
				case 1: {cout << "десять "; break; }
				case 2: {cout << "двадцать "; break; }
				case 3: {cout << "тридцать "; break; }
				case 4: {cout << "сорок "; break; }
				case 5: {cout << "пятьдесят "; break; }
				case 6: {cout << "шестьдесят "; break; }
				case 7: {cout << "семьдесят "; break; }
				case 8: {cout << "восемьдесят "; break; }
				case 9: {cout << "девяносто "; break; }
			}
			switch (c) {
				case 0: {cout << "бананов"; break; }
				case 1: {cout << "один банан"; break; }
				case 2: {cout << "два банана"; break; }
				case 3: {cout << "три банана"; break; }
				case 4: {cout << "четыре банана"; break; }
				case 5: {cout << "пять бананов"; break; }
				case 6: {cout << "шесть бананов"; break; }
				case 7: {cout << "семь бананов"; break; }
				case 8: {cout << "восемь бананов"; break; }
				case 9: {cout << "девять бананов"; break; }
			}
	}
	}
	return EXIT_SUCCESS;
}