#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {
	
	int f = 0;
	int num1 = 0;
	int num2 = 0;

	cin >> f;
	{	// �������� �������� �����
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
	{	//������ �����, ���������� ������ ��� ����� (������ ��������)
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
	{	// �������� ����� � ������� �������� �����
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
	{	// ������ ����� ����� f � ����������� ������
		f_copy = f & (~(bitMask1 | bitMask2));
	}
	{	// ��������� ���� �� ����� f
		bitMask1 = ((f & bitMask1) != 0);
		bitMask2 = ((f & bitMask2) != 0);
	}
	{	// ������ ���� ������� ����� �����������
		int temp = bitMask1;
		bitMask1 = bitMask2;
		bitMask2 = temp;
	}
	{	// ������ ����� �� ������ ����� �����
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
	{	// ���������� ���������� ����� � ����� � ����������� ������
		f_copy = f_copy | bitMask1 | bitMask2;
	}
	{	// �������� ����� � �������� �����
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
	{	// ������� ����� � ���������� �����
		cout << f_copy << endl;
	}
	return EXIT_SUCCESS;
}