#include "stdafx.h"
#include "iostream"
#include "ctime"
using namespace System;
using namespace std;

int main() {

	int t = 1, l = 1, i, *tp = &t, *lp = &l;
	srand(time(0));
	cout << "BANG!!! Comienza la carrera \n  ";

	if (*lp == *tp) {
		cout << "La tortuga esta en la posicion  " << *tp << "\n";
		cout << "La liebre esta en la posicion  " << *lp << "\n";
		cout << "OUCH!!!";
	}

	while (t < 70 && l < 70) {
		i = 1 + rand() % 10;

		if (i <= 5) {
			*tp += 3;
			cout << "La tortuga esta en la posicion  " << *tp << "\n";
			if (i <= 2)
				cout << "La liebre esta en la posicion  " << *lp << "\n";
			if (i > 2 && i <= 4) {
				*lp += 9;
				cout << "La liebre esta en la posicion  " << *lp << "\n";
			}
			if (i == 5) {
				*lp -= 12;
				if (*lp < 1)
					*lp = 1;
				cout << "La liebre esta en la posicion  " << *lp << "\n";
			}
			if (*lp == *tp)
				cout << "OUCH!!!  ";
		}
		if (i > 5 && i <= 8) {
			*lp += 1;
			cout << "La liebre esta en la posicion " << *lp << "\n";
			if (i <= 7) {
				*tp -= 6;
				if (*tp < 1)
					*tp = 1;
				cout << "La tortuga esta en la posicion " << *tp << "\n";
			}
			if (*lp == *tp)
				cout << "OUCH!!!";
		}
		if (i >= 8 && i <= 10) {
			*tp += 1;
			cout << "La tortuga esta en la posicion " << *tp << "\n";
			if (i >= 9) {
				*lp -= 2;
				if (*lp < 1)
					*lp = 1;
				cout << "La liebre esta en la posicion " << *lp << "\n";
			}
			if (*lp == *tp)
				cout << "OUCH!!! ";
		}
	}
	if (t >= 70)
		cout << "La tortuga gana \n ";
	if (l >= 70)
		cout << "La liebre gana \n ";
	if (l >= 70 && t >= 70)
		cout << "Es un empate \n";


	system("pause");
	return 0;
}