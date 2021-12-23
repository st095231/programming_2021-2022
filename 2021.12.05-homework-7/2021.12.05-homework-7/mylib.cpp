#include"myLib.h"
#include <iostream>

int f(int n)
{	if(n==1){
		return 0;
	}
	else if (n % 2 == 0) {
		return f(n / 2) + 1;
	}
	else {
	return f(3 * n + 1) + 1;
	}
}
int circle(int n)
{	const double K = 4.8;
	int m = 0;
	int sqr_n = 0;
	int sqr_m = 0;
	double temp = 0;

	m = (int)(n * 0.9);
	sqr_n = pow(n, 2);
	sqr_m = pow(m, 2);
	std::cout << std::endl;
	for (int i = 0; i <= 2 * n; i++) {
		if (pow(n - i, 2) * K <= sqr_n) {
			for (int j = 0; j <= 2 * n; j++) {
				temp = pow(n - i, 2) * K + pow(n - j, 2);
				if ((temp >= sqr_m) & (temp <= sqr_n)) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
			}
			std::cout << std::endl;
		}
	}
	return 0;
}