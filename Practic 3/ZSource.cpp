#include <iostream>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n, m;
    //������ 1	
	int j = 1;
	cout << "������� ���������:\n";
	for (int i = 1; i <= 9; i++) {
		while (j <= 9) {
			cout << i << " X " << j << " = " << i * j << "\t";
			j++;
		}
		j = 1;
		cout << "\n";
	}

	cout << "������� ENTER ����� ����������... ";
	cin.get();
	cout << endl;

	//������ 2
	cout << "������ 2.\n������� ���������� ����� � �������: ";
	cin >> n;
	int minP = n, sum = 0;
	for (int i = 0; i < n; i++) {
		m = rand() % (5 + 1 - 1) + 1;
		cout << "���������� ����� � " << i + 1 << " ����: " << m << endl;
		sum += m;
		if (m < minP)
			minP = m;
	}
	cout << "����� ���. ����� ������� � ������� = " << sum << endl;
	cout << "�������. ���. ����� ������� � ����� ���� = " << minP << "\n\n";

	//������ 3
	cout << "������ 3.\n������� ����� � ������ ��������: ";
	cin >> n >> m;
	if (n % 2 == 0 && m % 2 == 0 && n <= 5 && m <= 5) {
		cout << "\n ������! \n ��� ��������� ������ ������� ������ ��ר���� ����� � ������� ����� ������ 5 (������������)!\n";
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