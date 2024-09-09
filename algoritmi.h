#pragma once
#include <iostream>
#include <string.h>
using namespace std;

void afisareMatrice(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}


// Varianta 15 Sub 2 Ex 3

void matrice1(int a[100][100], int n, int k) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			a[i][i] = 0;

			if (j > i) {

				if (i == 0  ) {
					a[i][j] = k % 10;
				}

				if (i == 1 ) {
					a[i][j] = k / 10 % 10;
				}

				if (i == 2 ) {
					a[i][j] = k / 100 % 10;
				}

				if (i == 3 ) {
					a[i][j] = k / 1000 % 10;
				}
				
				if (i == 4) {
					a[i][j] = k / 10000 % 10;
				}

			}
			else if (j < i) {

				if (j == 0) {
					a[i][j] = k % 10;
				}

				if (j == 1) {
					a[i][j] = k / 10 % 10;
				}

				if (j == 2) {
					a[i][j] = k / 100 % 10;
				}

				if (j == 3) {
					a[i][j] = k / 1000 % 10;
				}

				if (j == 4) {
					a[i][j] = k / 10000 % 10;
				}


			}
		}

	}
}

// Varianta 16 Sub 2 Ex 3

void matrice2(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			a[i][n - 1 - i] = 0;

			a[i][i] = 0;

			if (i < j & i + j < n - 1) {
				a[i][j] = 1;
			}

			else if (i<j && i + j>n - 1) {
				a[i][j] = 3;
			}

			else if (i>j && i + j < n - 1) {
				a[i][j] = 3;
			}

			else if (i>j && i + j>n - 1) {
				a[i][j] = 2;
			}

		}

	}
}

// Varianta 17 Sub 2 Ex 3

void matrice3(int a[100][100], int n) {


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			a[i][j] = i + j + 1;

		}
	}
}


// Varianta 18 Sub 2 Ex 3

void matrice4(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (i % 2 == 0) {
				a[i][j] = i + 1;
			}
			else {
				a[i][j] = j + 1;
			}

		}
	}

}

// Varianta 19 Sub 2 Ex 3

void matrice5(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (i % 2 == 0) {
				a[i][j] = i + j + 2;
			}

		}
	}
}

// Varianta 20 Sub 2 Ex 3

void matrice6(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (i == 0 || i == n-1 || j == 0 || j == n-1) {
				a[i][j] = i + j+ 2;
			}

			else {
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1];
			}

		}
	}
}

// Varianta 22 Sub 2 Ex 3

void matrice7(int a[100][100], int n,int m) {

	int valoare = n % m;

	for (int i = 0; i < n;  i++) {
		for (int j = 0; j <m; j++) {

			a[i][j] =valoare;

			valoare--;
		}
	}
}


// Varianta 23 Sub 2 Ex 3

void matrice8(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		a[i][0] = i + 1;

	}

	for (int j = 0; j < m; j++) {
		a[0][j] = j + 1;
	}

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			a[i][j] = a[i - 1][j] + a[i][j - 1];
		}
	}

	cout << endl;
	cout << "Ultima cifra a numarului situat pe ultima linie si ultima coloana este " << a[n - 1][m - 1] % 10 << endl;
}

// Varianta 25 Sub 2 Ex 3

void matrice9(int a[100][100], int n) {

	int produsMax = 0;

	for (int j = 0; j < n; j++) {

		int produs = 1;

		for (int i = 0; i < n; i++) {

			produs *= a[i][j];

		}

		if (produs > produsMax) {
			produsMax = produs;
		}
	}
	cout << produsMax << endl;
}

// Varianta 27 Sub 2 Ex 3

void matrice10(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (i == 0 || j == 0 || j == n - 1) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1] + a[i - 1][j + 1];
			}


		}
	}

}

// Varianta 30 Sub 2 Ex 3

void matrice11(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (i == 0 || j == 0) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = a[i][j-1] + a[i-1][j];
			}
		}
	}

}

// Varianta 34 Sub 2 Ex 3

bool valid(int n) {
	
	return n % 2 == 0 && n % 3 != 0;
}

void matrice12(int a[100][100], int n) {

	int numar = 2;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if(!valid(numar)){
				numar++;
			}
			a[i][j] = numar;
			numar++;
		}
	}

}

// Varianta 35 Sub 2 Ex 3

void matrice13(int a[100][100], int n) {



	for (int j = 0; j < n; j++) {

		int nrMin = 99999;

		for (int i = 0; i < n; i++) {
			if (a[i][j] < nrMin) {
				nrMin = a[i][j];
			}
		}
		cout << nrMin << " ";

	}
	cout << endl;
	cout << endl;
}


// Varianta 36 Sub 2 Ex 3

void matrice14(int a[100][100], int n) {

	for (int j = n-1; j >=0; j--) {

		int nrMin = 9999;

		for (int i = 0; i < n; i++) {
			if (a[i][j] < nrMin) {
				nrMin = a[i][j];
			}
		}
		cout << nrMin << " ";

	}
	cout << endl;
	cout << endl;
}

// Varianta 38 Sub 2 Ex 3

void matrice15(int a[100][100], int n) {

	int produs = 1;

	for (int i = 0; i < n; i++) {
		int coloana = n - i - 1;
		int nrMin = a[0][coloana];

		for (int j = 0; j < n; j++) {
			if (a[j][coloana] < nrMin) {
				nrMin = a[j][coloana];


			}
		}
		if (a[i][coloana] == nrMin) {
			produs *= a[i][coloana];

		}

	}
	cout << produs % 10 << endl;
	cout << endl;
}

// Varianta 41 Sub 2 Ex 3

void matrice16(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			a[i][j] = i + j + 2;

		}
	}

}

// Varianta 42 Sub 2 Ex 3

void matrice17(int a[100][100], int n) {

	int nrMax = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {

			a[i][j] = j % i + i % j;

			if (j > i) {
				if (a[i][j] > nrMax) {
					nrMax = a[i][j];
				}
			}

		}
	}

	cout << nrMax << endl;


}

// Varianta 43 Sub 2 Ex 3

void matrice18(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (i == j) {
				a[i][j] = 2;
			}
			else if (i > j) {
				a[i][j] = 3;
			}
			else {
				a[i][j] = 1;
			}

		}
	}

}

// Varianta 44 Sub 2 Ex 3

void matrice19(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = 1 + (i + j);
		}
	}

}

// Varianta 45 Sub 2 Ex 3

void matrice20(int a[100][100], int n) {

	int suma = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {

			a[i][j] = i - j;
		}
		suma += a[i][n - i - 1];
	}
	cout << suma << endl;
}

// Varianta 48 Sub 2 Ex 5

int valid1(int n) {
	return n % 2 == 0;
}

void matrice21(int a[100][100], int n) {

	int numar = 2;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n ; j++) {

			if (!valid1(numar)) {
				numar++;
			}
			a[i][j] = numar;
			numar++;

		}
	}

}

// Varianta 52 Sub 2 Ex 3

void matrice22(int a[100][100], int n) {

	int x = 5;

	int suma = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {

			if (i == j) {
				a[i][j] = x;
				x = x + 1;

				suma += a[0][j];

			}
		}
	}
	cout << suma << endl;
	cout << a[3][3] << endl;
}

// Varianta 53 Sub 2 Ex 3

void matrice23(int a[100][100], int n) {

	int x = 0;

	for (int i = 0; i < n; i++) {

		if (a[i][i] % 2 != 0) {

			x = x + a[i][n - i-1];
		}

	}
	cout << x << endl;
}

// Varianta 54 Sub 2 Ex 3

int primaCifraNr(int n) {

	while (n > 9) {

		n = n / 10;
	}
	
	return n;
}

void matrice24(int a[100][100], int n,int x) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][i] = primaCifraNr(x);

			a[i][n - i - 1] = x % 10;

			a[i][j] = x / 10 % 10; 
		}
	}

}

// Varianta 56 Sub 2 Ex 3

void matrice25(int a[100][100], int n,int k) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (i < k && j < k) {
				a[i][j] =1;
			}

			else if (i < k && j > n - k) {
				a[i][j] = 2;
			}

			else if (i > n - k && j < k) {
				a[i][j] = 3;
			}
			else {
				a[i][j] = 4;
			}
		}
	}

}

// Varianta 57 Sub 2 Ex 3

void matrice26(int x[100][100], int n,int a,int b) {

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {

			x[a][b] = 0;

			if (i < a && j < b) {
				x[i][j] = 1;
			}
			else if(i<a && j>b){
				x[i][j] = 2;
			}
			else if (i > a && j < b) {
				x[i][j] = 3;
			}
			else if (i > a && j > b) {
				x[i][j] = 4;
			}
		}
	}

}

// Varianta 60 Sub 2 Ex 3

void matrice27(int a[100][100], int n) {

	int suma = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {

			a[i][j] = (i - 1) * 5 + j;
		}
		suma += a[i][n - i + 1];
	}
	cout << suma << endl;
}

// Varianta 61 Sub 2 Ex 3

void matrice28(int a[100][100], int n) {

	for (int j = 0; j < n; j++) {
		a[n - 1][j] = j + 1;
	}

	for (int i = n - 2; i >= 0; i++) {
		for (int j = 1; j < n; j++) {

			if (i < j) {
				a[i][j] = 0;
			}
			else {
				
				int sum = 0;

				if (i + 1 < n) {
					sum += a[i + 1][j];
				}

				if (j > 0) {
					sum += a[i][j - 1];
				}

				if (j + 1 < n) {
					sum += a[i][j + 1];
				}
				a[i][j] = sum;

			}
		}
	}

}