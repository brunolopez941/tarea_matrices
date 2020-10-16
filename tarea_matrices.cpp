#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;
//Solo har� el proceso con matrices que tengan el mismo tama�o

int main() {
	const int filas=3, columnas=3;
	string operacion, respuesta;
	respuesta = "si";

	array<array<float, columnas>, filas> A = {};
	array<array<float, columnas>, filas> B = {};

	//Semilla
	srand((int)time(0));
	//Matriz A
	cout << "Matriz A" << endl;
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			A[i][j] = (rand() % 10) + 1;
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	//Matriz B
	cout << "Matriz B" << endl;
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			B[i][j] = (rand() % 10) + 1;
			cout << B[i][j] << " ";
		}
		cout << endl;
	}

	while (respuesta == "si") {
		cout << "Ingrese la operacion deseada: " << endl;
		cin >> operacion;

		if (operacion == "+") {
			//Suma
			cout << "Suma de las matrices A y B" << endl;
			//Matriz suma
			array<array<float, columnas>, filas> suma = {};
			for (int i = 0; i < filas; i++) {
				for (int j = 0; j < columnas; j++) {
					suma[i][j] = A[i][j] + B[i][j];
					cout << suma[i][j] << " ";
				}
				cout << endl;
			}
		}
		else if (operacion == "-") {
			//Resta
			cout << "Resta de las matrices A y B" << endl;
			//Matriz resta
			array<array<float, columnas>, filas> resta = {};

			for (int i = 0; i < filas; i++) {
				for (int j = 0; j < columnas; j++) {
					resta[i][j] = A[i][j] - B[i][j];
					cout << resta[i][j] << " ";
				}
				cout << endl;
			}
		}
		else if (operacion == "*") {
			//Multiplicacion
			cout << "Multiplicacion de las matrices A y B" << endl;
			//Matriz multiplicacion
			array<array<float, columnas>, filas> multiplicacion = {};

			for (int i = 0; i < filas; i++) {
				for (int j = 0; j < columnas; j++) {
					multiplicacion[i][j] = 0;
					for (int k = 0; k < columnas; k++) {
						multiplicacion[i][j] = multiplicacion[i][j] + A[i][k] * B[k][j];
					}
					cout << multiplicacion[i][j] << " ";
				}
				cout << endl;
			}
		}
		else if (operacion == "/") {
			//Divisi�n
			cout << "Divisi�n de las matrices A y B" << endl;
			//Matriz divisi�n
			array<array<float, columnas>, filas> div = {};

			for (int i = 0; i < filas; i++) {
				for (int j = 0; j < columnas; j++) {
					div[i][j] = A[i][j] / B[i][j];
					cout << div[i][j] << " ";
				}
				cout << endl;
			}
		}
		cout << "�Desea hacer otra operacion? ";
		cin >> respuesta;
	}
}