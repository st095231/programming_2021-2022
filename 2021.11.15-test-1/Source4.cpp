#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int n = 0;
	int temp = 0;
	int min = 0;
	int max = 0;

	cin >> n;
	int* p = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		p[i]=0;
	}
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	max = p[0];
	min = p[0];
	for (int i = 0; i < n; i++) {
		temp = p[i];
		if (max < temp) { max = temp; }
		if (min > temp) { min = temp; }
	}
	for (int i = 0; i < n; i++) {
		if ((p[i]) == max) {
			p[i] = min;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << p[i] << " ";
	}
	free(p);

	return EXIT_SUCCESS;
}