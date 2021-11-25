#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {
	const int limit = 100001;
	int n = 0;
	int m = 0;
	int temp = 0;

	bool* a = (bool*)malloc(limit * sizeof(bool));
	bool* b = (bool*)malloc(limit * sizeof(bool));
	for (int i = 0; i < limit; i++) {
		a[i] = 0;
		b[i] = 0;
	}
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		a[temp] = 1;
	}
	for (int i = 0; i < m; i++) {
		cin >> temp;
		b[temp] = 1;
	}
	for (int i = 0; i < limit; i++) {
		if ((a[i]) & (b[i])) {
			cout << i << " ";
		}
	}
	free(a);
	free(b);

	return EXIT_SUCCESS;
}