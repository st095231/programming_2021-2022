#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {
	
	int f = 0;
	int num1 = 0;
	int num2 = 0;

	cin >> f;
	{	// печатаем входящее число
		cout << "Input:  ";
		int bitMask = 1;
		for (int i = 0; i < 15; ++i) {
			bitMask = bitMask << 1;
		}
		for (int i = 0; i < 16; ++i) {
			int bit = f & bitMask;
			cout << (bit != 0);
			bitMask = bitMask >> 1;
		}
		cout << endl;
	}
	cin >> num1 >> num2;
	int firstBitMask = 0;
	{	//создаём маску, выделяющую первый бит числа (первый значащий)
		int bitMask = 1;
		bitMask = 1;
		for (int i = 0; i < 16; ++i) {
			int bit = f & bitMask;
			if (bit != 0) {
				firstBitMask = bitMask;
			}
			bitMask = bitMask << 1;
		}
		//cout << firstBitMask << endl;
	}
	int bitMask1 = firstBitMask;
	int bitMask2 = firstBitMask;
	{	// получаем маски с нужными номерами битов
		for (int i = 0; i < num1; ++i) {
			bitMask1 = bitMask1 >> 1;
		}
		for (int i = 0; i < num2; ++i) {
			bitMask2 = bitMask2 >> 1;
		}
		bitMask1 = bitMask1 << 1;
		bitMask2 = bitMask2 << 1;
	}
	int f_copy = 0;
	{	// создаём копию числа f с вырезанными битами
		f_copy = f & (~(bitMask1 | bitMask2));
	}
	{	// извлекаем биты из числа f
		bitMask1 = ((f & bitMask1) != 0);
		bitMask2 = ((f & bitMask2) != 0);
	}
	{	// меняем биты местами между переменными
		int temp = bitMask1;
		bitMask1 = bitMask2;
		bitMask2 = temp;
	}
	{	// создаём маски на основе новых битов
		bitMask1 = bitMask1 << 1; 
		for (int count = firstBitMask; count > 1; count = count >> 1) {
			bitMask1 = bitMask1 << 1;
		}
		for (int i = 0; i < num1; ++i) {
			bitMask1 = bitMask1 >> 1;
		}
		bitMask2 = bitMask2 << 1;
		for (int count = firstBitMask; count > 1; count = count >> 1) {
			bitMask2 = bitMask2 << 1;
		}
		for (int i = 0; i < num2; ++i) {
			bitMask2 = bitMask2 >> 1;
		}
		cout << bitMask1 << " " << bitMask2 << endl;
	}
	{	// прибавляем полученные маски к числу с вырезанными битами
		f_copy = f_copy | bitMask1 | bitMask2;
	}
	{	// печатаем ответ в двоичной форме
		cout << "Output: ";
		int bitMask = 1;
		for (int i = 0; i < 15; ++i) {
			bitMask = bitMask << 1;
		}
		for (int i = 0; i < 16; ++i) {
			int bit = f_copy & bitMask;
			cout << (bit != 0);
			bitMask = bitMask >> 1;
		}
		cout << endl;
	}
	{	// выводим ответ в десятичной форме
		cout << f_copy << endl;
	}
	return EXIT_SUCCESS;
}