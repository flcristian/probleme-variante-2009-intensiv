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
	for (int i = 0; i < a - 1; i++) {
		s += x[i];
	}
	for (int i = b; i < n; i++) {
		s += x[i];
	}
	return s;
}

int raspunsPb24(int x[], int n, int m) {
	int s = 0;
	for (int i = 0; i < m; i++) {
		s += x[i];
	}
	return s;
}

int raspunsPb25(int x) {
	int i = x;
	while (i > x - 1) {
		if (estePrim(i)) {
			return i;
		}
		i++;
	}
}

void citireFisier(int x[], int& n) {
	ifstream f("BAC.txt");
	f >> n;
	for (int i = 0; i < n; i++) {
		f >> x[i];
	}
}

bool estePatratPerfect(int n) {
	double x = sqrt(n);
	if (x == ceil(x)) {
		return true;
	}
	return false;
}

int countPatratePerfecte(int x[], int n) {
	int c = 0;
	for (int i = 0; i < n; i++) {
		if (estePatratPerfect(x[i])) {
			c++;
		}
	}
	return c;
}

int afisareRaspunsPb26(int x[], int n) {
	int c = countPatratePerfecte(x, n);
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (estePatratPerfect(x[i])) {
			cout << x[i];
			s += x[i];
			if (c > 1) {
				cout << "+";
				c--;
			}
			else {
				cout << "=" << s;
				return 0;
			}
		}
	}
}

void citireFisierPb27(int x[], int& n) {
	ifstream f("numerePb27input.txt");
	n = 0;

	while (!f.eof()) {
		f >> x[n];
		n++;
	}
}

void eliminareElement(int x[], int& n, int p) {
	for (int i = p; i < n - 1; i++) {
		x[i] = x[i + 1];
	}
	n--;
}

int variabilaNrCifrePb27(int count) {
	int z = 1;
	while (count > 1) {
		z *= 10;
		count--;
	}
	return z;
}

int eliminareCifreImpare(int n) {
	int count = countCifre(n);
	int z = variabilaNrCifrePb27(count);
	while (z > 0) {
		if ((n / z) % 2 == 1 || (n / z) == 0) {
			n = n / (z * 10) * z + (n % z);
		}
		z /= 10;
	}
	if (n == 0) {
		return -1;
	}
	return n;
}

void rezolvarePb27(int x[], int& n) {
	for (int i = 0; i < n; i++) {
		int variabila = eliminareCifreImpare(x[i]);
		if (variabila == -1) {
			eliminareElement(x, n, i);
			i--;
		}
		else {
			x[i] = variabila;
		}
	}
}

void outputPb27(int x[], int n) {
	ofstream o("numerePb27output.txt");

	for (int i = 0; i < n; i++) {
		o << x[i] << " ";
	}
}

void citireFisierPb28(int x[], int& n) {
	ifstream f("BAC.txt");
	n = 0;

	while (!f.eof()) {
		f >> x[n];
		n++;
	}
}

int sumaCifrelor(int n) {
	int s = 0;
	while (n != 0) {
		s += n % 10;
		n /= 10;
	}
	return s;
}

void raspunsPb28(int x[], int n) {
	int c = n / 5, z = 5;
	int count = 0;
	for (int i = 0; i < n; c--) {
		if (c == 0) {
			z = n % 5;
		}
		for (int j = 0; j < z; j++) {
			if (sumaCifrelor(x[i]) % 2 == 0) {
				count++;
			}
			cout << x[i] << " ";
			i++;
		}
		cout << endl;
	}
	cout << count;
}

void citirePb29(int x[], int& n) {
	ifstream f("BAC.txt");
	n = 0;

	while (!f.eof()) {
		f >> x[n];
		n++;
	}
}

int countImpareVector(int x[], int n) {
	int c = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] % 2 == 1) {
			c++;
		}
	}
	return c;
}

void rezolvarePb29(int x[], int n) {
	ofstream o("BACout.txt");
	cout << "In fisier a fost scris : " << endl;
	int c = countImpareVector(x, n);

	if (c < 2) {
		cout << "Numere insuficiente.";
		o << "Numere insuficiente.";
	}
	else {
		for (int i = n - 1, z = 0; i > -1 && z < 2; i--) {
			if (x[i] % 2 == 1) {
				cout << x[i] << " ";
				o << x[i] << " ";
				z++;
			}
		}
	}
}

void citirePb30(int x[], int& n) {
	ifstream f("numere.txt");
	n = 0;

	while (!f.eof()) {
		f >> x[n];
		n++;
	}
}

void adaugareCifreNumar(int y[], int x[], int i, int& m) {
	while (x[i] != 0) {
		y[m] = x[i] % 10;
		x[i] /= 10;
		m++;
	}
}

void atribuire0Frecventa(int x[], int d) {
	for (int i = 0; i < d; i++) {
		x[i] = 0;
	}
}

void adaugareCifreFrecventa(int y[], int n) {
	while (n != 0) {
		y[n % 10]++;
		n /= 10;
	}
}

void raspunsPb30(int x[], int n) {
	int y[10];
	atribuire0Frecventa(y, 10);
	for (int i = 0; i < n; i++) {
		adaugareCifreFrecventa(y, x[i]);
	}
	
	for (int i = 9; i > -1; i--) {
		for (int c = y[i]; c > 0; c--) {
			cout << i;
		}
	}
}

int cateNrMaiMiciDecatM(int x[], int n, int m) {
	int c = 0;
	for (int i = 0; i < n; i++) {
		if (m > x[i]) {
			c++;
		}
	}
	return c;
}

void citireFisierPb32nr1(int x[], int& n) {
	ifstream f("nr1.txt");
	n = 0;

	while (!f.eof()) {
		f >> x[n];
		n++;
	}
}

void citireFisierPb32nr2(int x[], int& n) {
	ifstream f("nr2.txt");
	n = 0;

	while (!f.eof()) {
		f >> x[n];
		n++;
	}
}


void adaugareNumereLaVectorDacaNuAuMaiAparut(int x[], int aparitie[], int raspuns[], int n, int& j) {
	for (int i = 0; i < n; i++) {
		if (aparitie[x[i]] == 0) {
			raspuns[j] = x[i];
			j++;
			aparitie[x[i]]++;
		}
	}
}

void raspunsPb32(int x[], int y[], int n, int m, int raspuns[], int& j) {
	int aparitie[10000];
	adaugareNumereLaVectorDacaNuAuMaiAparut(x, aparitie, raspuns, n, j);
	adaugareNumereLaVectorDacaNuAuMaiAparut(y, aparitie, raspuns, m, j);
	afisareVector(raspuns, j);
}