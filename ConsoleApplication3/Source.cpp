#include <stdio.h>
#include<locale.h>
#include <iostream>
#include<stdint.h>
#include<math.h>
using namespace std;
char u;

void main()
{
	setlocale(LC_ALL, "Russian");
	
start:
	int i = 0;
	cout << "������� ����� �������:";
	cin >> i;
// 1.	���� ����������� (����� ���������������) �����, � � ����� ������������� ����� d.
//��������� ������� q � ������� r ��� �������, � �� d	
	
	if (i == 1)
	{
		int q1,q2,a,d;
		double  r, q;
		cout << "������� ����� a:";
		cin >> a;
		cout << "������� ����� d:";
		cin >> d;
		q = a / d;
		q1 = (int)q;
		r = a%d;
		cout << "������� q:" << q1 << endl;
		cout << "������� r:" << r << endl;

		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}

	//2.	�������� ������� int f(int x, int y), ������� ���������� 0, ���� �������� x � y
	//��� ����� ����, 12/x, ���� y ����� 0, 12/y, ���� x ����� 0, ����� 144/(x*y).

	else if (i == 2)
	{
		int f, x, y;
		cout << "������� ����� x:";
		cin >> x;
		cout << "������� ����� y:";
		cin >> y;

		if ((x == 0) && (y == 0))
		{
			f = 0;
			cout << f << endl;
		}
		else if (y==0)
		{
			f = 12 / x;
			cout << f << endl;
		}
		else if (x == 0)
		{
			f = 12 / y;
			cout << f << endl;
		}
		else
		{
			f = 144 / (x*y);
			cout << f << endl;
		}
		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}
	
	// 3.	�������� ������� int f(int x, int y), ������� ���������� x-y, 
	//���� x ������ y, ����� ���������� y-x

	else if (i == 3)
	{
		int f, x, y;
		cout << "������� ����� x:";
		cin >> x;
		cout << "������� ����� y:";
		cin >> y;
		
		if (x > y)
		{
			f = x - y;
			cout << f << endl;
		}
		else
		{
			f = y - x;
			cout << f << endl;
		}
		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}

	//4.	�������� ������� double f(double x, double y), ������� ���������� x/y, 
	//���� x ������ y, ����� ���������� y/x.
	//��������������, ��� �������� ���������� ������ ����. 

	else if (i == 4)
	{
		double f, x, y;
		cout << "������� ����� x:";
		cin >> x;
		cout << "������� ����� y:";
		cin >> y;

		if (x > y)
		{
			f = x / y;
			cout << f << endl;
		}
		else
		{
			f = y / x;
			cout << f << endl;
		}
		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}

	//5.	�������� ������� double f(double x, double y, double z),
	//������� ���������� m*n/k, ��� k ���� ������� �� ����� x, y, z, � m � n ���� �������
	//� ������� �� ���� �����. ��������������, ��� �������� ���������� ������ ����

	else if (i == 5)
	{
		double f, x, y,z;
		cout << "������� ����� x:";
		cin >> x;
		cout << "������� ����� y:";
		cin >> y;
		cout << "������� ����� z:";
		cin >> z;

		if ((x > y)&&(y>z))
		{
			double k, m, n;
			k = z;
			m = y;
			n = x;

			f = m*n / k;
			cout << f << endl;
		}
		else if ((y > x) && (x>z))
		{
			double k, m, n;
			k = z;
			m = x;
			n = y;

			f = m*n / k;
			cout << f << endl;
		}

		else if ((z > x) && (x>y))
		{
			double k, m, n;
			k = y;
			m = x;
			n = z;

			f = m*n / k;
			cout << f << endl;
		}
		else if ((z > y) && (y>x))
		{
			double k, m, n;
			k = x;
			m = y;
			n = z;

			f = m*n / k;
			cout << f << endl;
		}

		else if ((y > z) && (z>x))
		{
			double k, m, n;
			k = x;
			m = z;
			n =y;

			f = m*n / k;
			cout << f << endl;
		}
		else if ((x > z) && (z>y))
		{
			double k, m, n;
			k = y;
			m = z;
			n = x;

			f = m*n / k;
			cout << f << endl;
		}
				
		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}

	//6.	�������� ������� int f(int a, int b, int c),
	//������� ���������� ���������� �� �������� a, b, c.

	else if (i == 6)
	{
		int f, x, y, z;
		cout << "������� ����� x:";
		cin >> x;
		cout << "������� ����� y:";
		cin >> y;
		cout << "������� ����� z:";
		cin >> z;

		if ((x > y) && (y > z))
		{
			f = z;
			cout << "���������� �����:" <<f<< endl;
		}
		else if ((y > x) && (x > z))
		{
			f = z;
			cout << "���������� �����:" <<f<< endl;
		}
		else if ((z > x) && (x > y))
		{
			f = y;
			cout << "���������� �����:" <<f<< endl;
		}

		else if ((z>y)&&(y>x))
		{
			f = x;
			cout << "���������� �����:" << f << endl;
		}

		else if ((y>z)&&(z>x))
		{
			f = x;
			cout << "���������� �����:" << f << endl;
		}

		else if ((x>z)&&(z>y))
		{
			f = y;
			cout << "���������� �����:" << f << endl;
		}

		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}

	//7.	�������� ������� int f(int a, int b, int c), 
	//������� ���������� ���������� �� �������� a, b, c.

	else if (i == 7)
	{

		int f, x, y, z;
		cout << "������� ����� x:";
		cin >> x;
		cout << "������� ����� y:";
		cin >> y;
		cout << "������� ����� z:";
		cin >> z;

		if ((x > y) && (y > z))
		{
			f = x;
			cout << "���������� �����:" << f << endl;
		}
		else if ((y > x) && (x > z))
		{
			f = y;
			cout << "���������� �����:" << f << endl;
		}
		else if ((z > x) && (x > y))
		{
			f = z;
			cout << "���������� �����:" << f << endl;
		}

		else if ((z>y) && (y>x))
		{
			f = z;
			cout << "���������� �����:" << f << endl;
		}

		else if ((y>z) && (z>x))
		{
			f = y;
			cout << "���������� �����:" << f << endl;
		}

		else if ((x>z) && (z>y))
		{
			f = x;
			cout << "���������� �����:" << f << endl;
		}

		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	
	}

	//8.	�������� ������� bool f(int x, int y, int z), 
	//������� ���������� true, ���� �2+�2= z2, ����� ���������� false.

	else if (i == 8)
	{
		bool f;
		int x, y, z;
		cout << "������� ����� x:";
		cin >> x;
		cout << "������� ����� y:";
		cin >> y;
		cout << "������� ����� z:";
		cin >> z;
		if ((x*x + y*y) == (z*z))
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}
			
			
			cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}

	//9.	�������� ������� bool f(int x, int y), ������� ���������� true, 
	//���� x ������� ������ �� y, ��� ��������, y ������� ������ �� x, �����
	//���������� false. ��������������, ��� �������� ���������� ������ ����

	else if (i == 9)
	{
		bool f1,f;
		int x, y;
		cout << "������� ����� x:";
		cin >> x;
		cout << "������� ����� y:";
		cin >> y;

		f = x%y;
		f1 = y%x;
		if ((f == 0) || (f1 == 0))
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}

		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}

	//10.	������������� ����� x, y, z ����� ���� ��������� ������������, 
	//���� ������� �� ��� ������ ����� ���� ������. �������� �������
	//bool f(int x, int y, int z), ������� ���������� true, ���� ����� x, y, z �����
	//���� ��������� ������������, ����� ���������� false. ��������������, ��� �������� 
	//���������� ������ ����
	else if (i == 10)
	{
		int x, y, z,f;
		cout << "������� ����� x:";
		cin >> x;
		cout << "������� ����� y:";
		cin >> y;
		cout << "������� ����� z:";
		cin >> z;
		if (((x + y) > z) || ((x + z) > y) || ((z + y) > x))
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}
		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}

}