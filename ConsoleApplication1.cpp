#include<iostream>

using namespace std;

void drawTriangle(int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j <= i; ++j) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите высоту треугольника: ";
	cin >> n;
	drawTriangle(n);
	return 0;
}