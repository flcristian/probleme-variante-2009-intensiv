#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void afisareMatrice(int x[100][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}

void atribuirePb1(int x[100][100], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				x[i][j] = 0;
			}
			else {
				x[i][j] = n - j;
			}
		}
	}
}

void atribuirePb2(int x[100][100], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == n - i - 1) {
				x[i][j] = 0;
			}
			else {
				x[i][j] = n - i;
			}
		}
	}
}

void atribuirePb3(int x[100][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i >= j) {
				x[i][j] = i + 1;
			}
			else {
				x[i][j] = j + 1;
			}
		}
	}
}

void citireFisierPb4(int x[100][100], int n) {
	ifstream f("numere.txt");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			f >> x[i][j];
		}
	}
}

void afisarePb4(int x[100][100], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << x[i][j] << " ";
		}
	}
}

void atribuirePb5(int x[100][100], int n, int p) {
	for (int i = 0, y = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			x[i][j] = pow(y, 2);
			y += 2;
		}
	}
}

void citireTastatura(int x[100][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Introduceti x[" << i << "][" << j << "] : ";
			cin >> x[i][j];
		}
	}
}

int maxDintreMinLinilor(int x[100][100], int n, int m) {
	int max = 0;
	for (int i = 0; i < n; i++) {
		int min = x[i][0];
		for (int j = 0; j < m; j++) {
			if (x[i][j] < min) {
				min = x[i][j];
			}
		}
		if (min > max) {
			max = min;
		}
	}
	return max;
}

void atribuirePb7(int x[100][100], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			x[i][j] = ((i + 1) * (j + 1)) % 10;
		}
	}
}

void citirePb8(int x[100][100], int y[100][100], int& n, int& m) {
	cout << x[0][0];
}

void citireSiSelectareNumerePb8(int x[100][100], int y[100][100], int z[100][100]) {
	int n, m;
	citirePb8(x, y, n, m);
}

void atribuirePb9(int x[100][100], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == n - i - 1) {
				x[i][j] = 0;
			}
			else {
				if (j < n - i - 1) {
					x[i][j] = j + 1;
				}
				else {
					x[i][j] = n - i;
				}
			}
		}
	}
}

int countCifre(int n) {
	int c = 0;
	while (n != 0) {
		c++;
		n /= 10;
	}
	return c;
}

void atribuirePb10(int x[100][100], int& n) {
	int r = n;
	n = countCifre(n);
	for (int i = 0, y = 1; i < n; i++) {
		for (int j = 0; j < n; j++) {
			x[j][i] = (r % (y * 10)) / y;
		}
		y *= 10;
	}
}

void afisareVector(int x[], int n) {
	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}
	cout << endl;
}

void citirePb11(int x[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Introduceti valoarea x[" << i << "] : ";
		cin >> x[i];
	}
}

void bubbleSort(int x[], int n) {
	bool flag = true;
	do {
		flag = true;
		for (int i = 0; i < n - 1; i++) {
			if (x[i] > x[i + 1]) {
				int r = x[i];
				x[i] = x[i + 1];
				x[i + 1] = r;
				flag = false;
			}
		}
	} while (flag == false);
}

void atribuirePb12(int x[100][100], int n) {
	for (int i = 0, y = 1; i < 6; i++) {
		for (int j = i; j < 6; j++) {
			if (j == i) {
				x[i][j] = 0;
			}
			else {
				int s = (n % (y * 10)) / y;
				x[i][j] = s;
				x[j][i] = s;
			}
		}
		y *= 10;
	}
}