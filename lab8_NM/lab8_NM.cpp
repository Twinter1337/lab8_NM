#include "lab8_header.h"
#include <iostream>
using namespace std;

int main() {
	double X[10] = { 0.15, 0.20, 0.25, 0.30, 0.35, 0.40, 0.45, 0.50, 0.55, 0.60 };
	double Y[10] = { 5.615, 5.467, 5.352, 5.193, 5.066, 4.946, 4.832, 4.722, 4.618, 4.519 };

	

	cout << "| X | ";
	for (int i = 0; i < 10; i++) {
		cout << X[i] << "\t| ";
	}
	cout << "\n| Y | ";
	for (int i = 0; i < 10; i++) {
		cout << Y[i] << "\t| ";
	}
	cout << endl;

	double RES_L = LagrangeMethod(X, Y);
	cout << "\nLagrange Method:\n" << RES_L << endl << endl;

	double RES_N = NewtonMethod(X, Y);
	cout << "Newton Method:\n" << RES_N << endl;

	return 0;
}