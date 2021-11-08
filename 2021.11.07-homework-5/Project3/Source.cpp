#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	int value = 0;
	cin >> value;
	if ((value >> 31) == -1) {
		value = ~value;
		{	// операция прибавки единицы к положительному числу
			int f = 1;
			int d = 1;
			while ((value & f) != 0) {
				f = f << 1;
				d = d | f;
			}
			value = value & (~d);
			value = value | f;
		}
	}
	cout << value;
	return EXIT_SUCCESS;
}