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

int countDiv(int n) {
	int c = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			c++;
		}
	}
	return c;
}

int celMaiMicNrCuMaxDiv(int n) {
	int max = 1;
	for (int i = 1; i <= n; i++) {
		if (countDiv(i) > max) {
			max = i;
		}
	}
	return max;
}

int countPb14(int x[], int n, int k) {
	int c = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] % k == 0 && x[i] % 10 == k) {
			c++;
		}
	}
	return c;
}

int countPb15(int x[], int n) {
	int c = 0;
	int s = 0, d = 0;

	if (x[0] > x[n - 1]) {
		s = x[n - 1];
		d = x[0];
	}
	else {
		d = x[n - 1];
		s = x[0];
	}

	for (int i = 0; i < n; i++) {
		if (x[i] >= s && x[i] <= d) {
			c++;
		}
	}
	return c;
}

void atribuirePb16(int x[100][100], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i % 2 == 0) {
				x[i][j] = (i + 1) + (j + 1);
			}
			else {
				if (j == 0) {
					x[i][j] = x[i - 1][j];
				}
				else {
					x[i][j] = i + j;
				}
			}
		}
	}
}

void citirePb17(double x[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Introduceti valoarea a[" << i << "] : ";
		cin >> x[i];
	}
}

void afisareVectorPb17(double x[], int n) {
	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}
}

void aranjarePb17(double x[], int n) {
	bool flag = true;
	do {
		flag = true;
		for (int i = 0; i < n - 1; i++) {
			if (x[i] > 0 && x[i + 1] < 0) {
				double r = x[i];
				x[i] = x[i + 1];
				x[i + 1] = r;
				flag = false;
			}
		}
	} while (flag == false);
}

bool estePrim(int n) {
	if (countDiv(n) == 2) {
		return true;
	}
	return false;
}

void aranjarePb18(int x[], int n) {
	for (int i = 0, j = n - 1; i < j; i++) {
		while (x[j] == 0) {
			j--;
		}
		if (x[i] == 0) {
			x[i] = x[j];
			x[j] = 0;
			j--;
		}
	}
}

int primStangaPb19(int n) {
	for (int i = n; i > 1; i--) {
		if (estePrim(i)) {
			return i;
		}
	}
}

int primDreaptaPb19(int n) {
	for (int i = n; i < 30001; i++) {
		if (estePrim(i)) {
			return i;
		}
	}
}

int raspunsPb19(int n) {
	return primDreaptaPb19(n) - primStangaPb19(n);
}

void aranjarePb20(int x[], int m, int n) {
	int r = x[0];
	for (int i = 0; i < n; i++) {
		if (i == n - 1) {
			x[i] = r;
		}
		else {
			x[i] = x[i + 1];
		}
	}
}

double raspunsPb21(int x, int y) {
	int cateCifre = countCifre(y);
	int z = 1;
	while (cateCifre > 0) {
		z *= 10;
		cateCifre--;
	} 
	double rasp = x * z + y;
	rasp /= z;
	return rasp;
}

int raspunsPb22(int a, int b, int c) {
	int count = 0;
	for (int i = a; i < b + 1; i++) {
		if (i % c == 0) {
			count++;
		}
	}
	return count;
}

int raspunsPb23(int x[], int n, int a, int b) {
	int s = 0;
	for (int i = 0; i < a; i++) {
		s += x[i];
	}
	for (int i = b - 1; i < n; i++) {
		s += x[i];
	}
	return s;
}