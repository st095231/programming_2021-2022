#include<iostream>

using namespace std;

int main(int argc, char* agrv[]) {
	int n = 0;
	cin >> n;
	int c = n % 10; n = n / 10;
	int b = n % 10; n = n / 10;
	int a = n % 10; n = n / 10;
	switch (a) {
	case 1: {cout << "��� "; break;	}
	case 2: {cout << "������ "; break; }
	case 3: {cout << "������ "; break; }
	case 4: {cout << "��������� "; break; }
	case 5: {cout << "������� "; break; }
	case 6: {cout << "�������� "; break; }
	case 7: {cout << "������� "; break; }
	case 8: {cout << "��������� "; break; }
	case 9: {cout << "��������� "; break; }
	}
	switch (b * 10 + c) {
		case 11: {cout << "����������� �������"; break; }
		case 12: {cout << "���������� �������"; break; }
		case 13: {cout << "���������� �������"; break; }
		case 14: {cout << "������������ �������"; break; }
		case 15: {cout << "���������� �������"; break; }
		case 16: {cout << "����������� �������"; break; }
		case 17: {cout << "���������� �������"; break; }
		case 18: {cout << "������������ �������"; break; }
		case 19: {cout << "������������ �������"; break; }
		default: {
			switch (b) {
				case 1: {cout << "������ "; break; }
				case 2: {cout << "�������� "; break; }
				case 3: {cout << "�������� "; break; }
				case 4: {cout << "����� "; break; }
				case 5: {cout << "��������� "; break; }
				case 6: {cout << "���������� "; break; }
				case 7: {cout << "��������� "; break; }
				case 8: {cout << "����������� "; break; }
				case 9: {cout << "��������� "; break; }
			}
			switch (c) {
				case 0: {cout << "�������"; break; }
				case 1: {cout << "���� �����"; break; }
				case 2: {cout << "��� ������"; break; }
				case 3: {cout << "��� ������"; break; }
				case 4: {cout << "������ ������"; break; }
				case 5: {cout << "���� �������"; break; }
				case 6: {cout << "����� �������"; break; }
				case 7: {cout << "���� �������"; break; }
				case 8: {cout << "������ �������"; break; }
				case 9: {cout << "������ �������"; break; }
			}
	}
	}
	return EXIT_SUCCESS;
}