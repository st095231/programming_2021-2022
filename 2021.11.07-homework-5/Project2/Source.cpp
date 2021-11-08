#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	float f = 0;
	cin >> f;
	
	long long int bitMask = 1;
	for (int i = 0; i < 31; ++i) {
		bitMask = bitMask << 1;
	}

	int value = *((int*)&f);
	int size = sizeof(int);
	size = size << 3;
	int spacecount = 1;
	for (int i = 0; i < size; ++i)
	{
		int bit = value & bitMask;
		if (bit == 0) {
			bit = 0;
		}else {
			bit = 1;
		}
		cout << bit;

		if (spacecount == 8) {
			cout << " ";
			spacecount = 1;
		}
		else {
			spacecount = spacecount << 1;
		}

		bitMask = bitMask >> 1;
	}
	return EXIT_SUCCESS;
}