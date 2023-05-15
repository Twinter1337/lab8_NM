#include "lab8_header.h"
#include <iostream>
#define LENGHT 10
using namespace std;

double Diff(int i, int j, double X[], double Y[]) {
	if (i == j) {
		return Y[i];
	
	}

	double RES = (Diff(i, j + 1, X, Y) - Diff(i - 1, j, X, Y)) / (X[i] - X[j]);

	return RES;
}

double LagrangeMethod(double X[], double Y[]) {
	double RES = 0, X0 = 0.439;

	for (int i = 0; i < LENGHT; i++) {
		double Down = 1, Top = 1;
	
		for (int j = 0; j < LENGHT; j++) {
			if (i != j) {
				Top *= (X0 - X[j]);
				Down *= (X[i] - X[j]);

			}
		}

		RES += ((Top / Down) * Y[i]);
		Top = 1;
		Down = 1;
	}

	return RES;
}

double NewtonMethod(double X[], double Y[]) {
	double RES = 0, X0 = 0.439;
	
	for (int i = 0; i < LENGHT; i++) {
		double Temp = 1;
		
		for (int j = 0; j < i; j++) {
			Temp *= (X0 - X[j]);
	
		}
		
		RES += Temp * Diff(i, 0, X, Y);
	}

	return RES;
}