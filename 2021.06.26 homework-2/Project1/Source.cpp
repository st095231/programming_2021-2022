#include<iostream>

using namespace std;


int main(int argc, char* agrv[]) {
	int n = 0;
	cin >> n;
	int c = n % 10; n = n / 10;
	int b = n % 10; n = n / 10;
	int a = n % 10; n = n / 10;
	switch (a) {
	case 1: {cout << "��� "; }
	case 2: {cout << "������ "; }
	case 3: {cout << "������ "; }
	case 4: {cout << "��������� "; }
	case 5: {cout << "������� "; }
	case 6: {cout << "�������� "; }
	case 7: {cout << "������� "; }
	case 8: {cout << "��������� "; }
	case 9: {cout << "��������� "; }
	}
	switch (b * 10 + c) {
		case 11: {cout << "����������� �������"; }
		case 12: {cout << "���������� �������"; }
		case 13: {cout << "���������� �������"; }
		case 14: {cout << "������������ �������"; }
		case 15: {cout << "���������� �������"; }
		case 16: {cout << "����������� �������"; }
		case 17: {cout << "���������� �������"; }
		case 18: {cout << "������������ �������"; }
		case 19: {cout << "������������ �������"; }
	default: {
		switch (b) {
			case 1: {cout << "������ "; }
			case 2: {cout << "�������� "; }
			case 3: {cout << "�������� "; }
			case 4: {cout << "����� "; }
			case 5: {cout << "��������� "; }
			case 6: {cout << "��������� "; }
			case 7: {cout << "��������� "; }
			case 8: {cout << "����������� "; }
			case 9: {cout << "��������� "; }
		}
		switch (c) {
			case 1: {cout << "���� �����"; }
			case 2: {cout << "��� ������"; }
			case 3: {cout << "��� ������"; }
			case 4: {cout << "������ ������"; }
			case 5: {cout << "���� �������"; }
			case 6: {cout << "����� �������"; }
			case 7: {cout << "���� �������"; }
			case 8: {cout << "������ �������"; }
			case 9: {cout << "������ �������"; }

		}
	}
	}
	return EXIT_SUCCESS;
}