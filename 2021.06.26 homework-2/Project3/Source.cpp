#include<iostream>

using namespace std;

/*
int main(int argc, char* agrv[]) {
	int k = 0;
	int m = 0;
	int n = 0;
	cin >> k >> m >> n;
	int temp = 0;
	if (n % k == 0) {
		temp = n / k;
	}else {
		temp = n / k + 1;
	}
	cout << (temp*m*2);
	return EXIT_SUCCESS;
}*/
int main(int argc, char* agrv[]) {
	int k = 0;
	int m = 0;
	int n = 0;
	cin >> k >> m >> n;
	int pack_time = m * 2;
	int pack_size = k;
	if (n % pack_size == 0) {
		cout << pack_time * (n / pack_size);
	}else {
		cout << pack_time * ((n / pack_size) + 1);
	}

	return EXIT_SUCCESS;
}
/*
int main(int argc, char* agrv[]) {
	int k = 0;
	int m = 0;
	int n = 0;
	cin >> k >> m >> n;
	cout << (n + k - 1) / k * m * 2;
return EXIT_SUCCESS;
}*/