#include <iostream>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n, m;
    //Задача 1	
	int j = 1;
	cout << "Таблица умножения:\n";
	for (int i = 1; i <= 9; i++) {
		while (j <= 9) {
			cout << i << " X " << j << " = " << i * j << "\t";
			j++;
		}
		j = 1;
		cout << "\n";
	}

	cout << "Нажмите ENTER чтобы продолжить... ";
	cin.get();
	cout << endl;

	//Задача 2
	cout << "Задача 2.\nВведите количество домов в деревне: ";
	cin >> n;
	int minP = n, sum = 0;
	for (int i = 0; i < n; i++) {
		m = rand() % (5 + 1 - 1) + 1;
		cout << "Количество людей в " << i + 1 << " доме: " << m << endl;
		sum += m;
		if (m < minP)
			minP = m;
	}
	cout << "Общее кол. людей живущих в деревне = " << sum << endl;
	cout << "Минимал. кол. людей живущих в одном доме = " << minP << "\n\n";

	//Задача 3
	cout << "Задача 3.\nВведите длину и высоту Молекули: ";
	cin >> n >> m;
	if (n % 2 == 0 && m % 2 == 0 && n <= 5 && m <= 5) {
		cout << "\n ОШИБКА! \n ДЛЯ ИЗБЕЖАНИЯ ОШИБОК ВВЕДИТЕ ТОЛЬКО НЕЧЁТНЫЕ ЧИСЛА И ВВЕДИТЕ ЧИСЛА БОЛЬШЕ 5 (ВКЛЮЧИТЕЛЬНО)!\n";
	}
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (i == 0 || i == n - 1 || i == n / 2)
					cout << " - ";
				else
					cout << " | ";
				if (j == 0-1 || j == m-1)
					cout << "   ";
			}
			cout << endl;
		}
	}

	return 0;
}