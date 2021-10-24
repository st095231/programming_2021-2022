#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int a[100];
	int n = 0;

	cin >> n;
	{	//2. ��������� ������ ������� � ����������
		for (int i = 0; i <= n-1; i++) {
			cin >> a[i];
		}
		cout << "\n";
	}
	{	//3. ������� ������.
		cout << "ARRAY :";
		for (int i = 0; i <= n-1; i++) {
			cout << " " << a[i];
		}
		cout << "\n";
	}
	{	//4. ������� ������ �������� �������.
		cout << "EVEN :";
		for (int i = 0; i <= n-1; i++) {
			if (a[i] % 2 == 0) {
				cout << " " << a[i];
			}
		}
		cout << "\n";
	}
	{	//5. ������� ����� ��������� �������.
		int sum = 0;
		for (int i = 0; i <= n-1; i++) {
			sum += a[i];
		}
		cout << "SUM : " << sum << "\n";
	}
	{	//6. ������� ������������ ������������� ��������� �������.
		int mult = 1;
		for (int i = 0; i <= n-1; i++) {
			if (a[i] < 0) {
				mult *= a[i];
			}
		}
		cout << "PRODUCT OF NEGATIVE : " << mult << "\n";
	}
	{	//7. ������� ������ ������� ������������ ��������.
		int min = a[0];
		int index = 0;
		for (int i = 1; i <= n-1; i++) {
			if (a[i] < min) {
				min = a[i];
				index = i;
			}
		}
		cout << "FIRST MIN INDEX : " << index << "\n";
	}
	{	//8. ������� �������� ������� �� �������� �������� �������.
		int first_max = a[0];
		int second_max = a[1];
		if (second_max > first_max) {
			int temp = second_max;
			second_max = first_max;
			first_max = temp;
		}
		for (int i = 2; i <= n - 1; i++) {
			if (a[i] > first_max) {
				second_max = first_max;
				first_max = a[i];
			}
			else if (a[i] > second_max) {
				second_max = a[i];
			}
		}
		cout << "SECOND MAX : " << second_max << "\n";
	}
	{	//9. ������� �������� ������� � �������� �������.
		cout << "REVERSE :";
		for (int i = n-1; i >=0; i--) {
			cout << " " << a[i];
		}
		cout<< "\n";
	}
	{	//0. ������� ��������, ������� �� �������� ������.
		cout << "ODD INDEXES :";
		for (int i = 1; i <= n - 1; i+=2) {
			cout << " " << a[i];
		}
		cout << "\n";
	}
	return EXIT_SUCCESS;
}