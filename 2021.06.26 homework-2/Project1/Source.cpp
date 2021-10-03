#include<iostream>

using namespace std;


int main(int argc, char* agrv[]) {
	int n = 0;
	cin >> n;
	int c = n % 10; n = n / 10;
	int b = n % 10; n = n / 10;
	int a = n % 10; n = n / 10;
	switch (a) {
	case 1: {cout << "сто "; }
	case 2: {cout << "двести "; }
	case 3: {cout << "триста "; }
	case 4: {cout << "четыреста "; }
	case 5: {cout << "п€тьсот "; }
	case 6: {cout << "шестьсот "; }
	case 7: {cout << "семьсот "; }
	case 8: {cout << "восемьсот "; }
	case 9: {cout << "дев€тьсот "; }
	}
	switch (b * 10 + c) {
		case 11: {cout << "одиннадцать бананов"; }
		case 12: {cout << "двенадцать бананов"; }
		case 13: {cout << "тринадцать бананов"; }
		case 14: {cout << "четырнадцать бананов"; }
		case 15: {cout << "п€тнадцать бананов"; }
		case 16: {cout << "шестнадцать бананов"; }
		case 17: {cout << "семнадцать бананов"; }
		case 18: {cout << "восемнадцать бананов"; }
		case 19: {cout << "дев€тнадцать бананов"; }
	default: {
		switch (b) {
			case 1: {cout << "дес€ть "; }
			case 2: {cout << "двадцать "; }
			case 3: {cout << "тридцать "; }
			case 4: {cout << "сорок "; }
			case 5: {cout << "п€тьдес€т "; }
			case 6: {cout << "шестдес€т "; }
			case 7: {cout << "семьдес€т "; }
			case 8: {cout << "восемьдес€т "; }
			case 9: {cout << "дев€носто "; }
		}
		switch (c) {
			case 1: {cout << "один банан"; }
			case 2: {cout << "два банана"; }
			case 3: {cout << "три банана"; }
			case 4: {cout << "четыре банана"; }
			case 5: {cout << "п€ть бананов"; }
			case 6: {cout << "шесть бананов"; }
			case 7: {cout << "семь бананов"; }
			case 8: {cout << "восемь бананов"; }
			case 9: {cout << "дев€ть бананов"; }

		}
	}
	}
	return EXIT_SUCCESS;
}