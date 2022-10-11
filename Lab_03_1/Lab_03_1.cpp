// Lab_03_1.cpp
// < �������� ��� >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 16


#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	const double EulerConstant = std::exp(1.0); // ����� ������;
	
	cout << "x = "; cin >> x;

	// ����� 1: ������������ � ��������� ����
	if (x < -1)

		y = 5 * pow(EulerConstant, 3 * x) - ( sqrt(2) * pow(x, 3) - 7 );

	if (-1 <= x && x < 3)

		y = 5 * pow(EulerConstant, 3 * x) - (2 * log10(1 - x / 4));

	if (x >= 3)

		y = 5 * pow(EulerConstant, 3 * x) - (cos(abs(x)) + 3);

	cout << endl;
	cout << "1) y = " << y << endl;

	// ����� 2: ������������ � ����� ����
	if (x < -1)
		y = 5 * pow(EulerConstant, 3 * x) - (sqrt(2) * pow(x, 3) - 7);
	else

		if (-1 <= x && x < 3)
			y = 5 * pow(EulerConstant, 3 * x) - (2 * log10(1 - x / 4)); 

		else
			y = 5 * pow(EulerConstant, 3 * x) - (cos(abs(x)) + 3); 
	
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}