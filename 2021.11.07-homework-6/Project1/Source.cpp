#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int a = 0;
	int n = 1;
	int cap = 1;
	int* arr = new int[cap] { 0 };
	arr[0] = 0; //arr[1] = 1; arr[2] = 2; arr[3] = 3; arr[4] = 4;
	cin >> a;
	while (a != 0){
		switch (a) {
			case 1: {
				for (int i = 0; i < n; i++) {
					cout << arr[i] << " ";
				}
				cout << endl;
				break;
			}
			case 2: {
				if (n >= cap) {
					cap = cap * 2;
					int* newArr = new int[cap]{ 0 };
					for (int i = 0; i < n; i++) {
						newArr[i] = arr[i];
					}
					delete[] arr;
					arr = newArr;
				}
				n += 1;
				cin >> arr[n-1];
				break;
			}
			case 3: {
				if (n >= cap) {
					cap = cap * 2;
					int* newArr = new int[cap] { 0 };
					for (int i = 0; i < n; i++) {
						newArr[i+1] = arr[i];
					}
					delete[] arr;
					arr = newArr;
				}
				else {
					for (int i = n-1; i>0; i--) {
						arr[i] = arr[i - 1];
					}
				}
				n += 1;
				cin >> arr[0];
				break;
			}
			case 4: {
				n -= 1;
				if (cap >= 2*n) {
					cap = cap / 2;
					int* newArr = new int[cap]{ 0 };
					for (int i = 0; i < n; i++) {
						newArr[i] = arr[i];
					}
					delete[] arr;
					arr = newArr;
				}
				break;
			}
			case 5: {
				n -= 1;
				if (cap >= 2 * n) {
					cap = cap / 2;
					int* newArr = new int[cap] { 0 };
					for (int i = 0; i < n; i++) {
						newArr[i] = arr[i+1];
					}
					delete[] arr;
					arr = newArr;
				}else {
					for (int i = 0; i < n; i++) {
						arr[i] = arr[i+1];
					}
				}
				break;
			}
			case 6: {
				int temp = 0;
				for (int i = 0; i < n / 2; i++) {
					temp = arr[i];
					arr[i] = arr[n - 1 - i];
					arr[n - 1 - i] = temp;
				}
			}
		}
		cin >> a;
	}

	return EXIT_SUCCESS;
}