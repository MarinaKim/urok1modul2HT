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
	cout << "введите номер задания:";
	cin >> i;
// 1.	Дано натуральное (целое неотрицательное) число, а и целое положительное число d.
//Вычислить частное q и остаток r при делении, а на d	
	
	if (i == 1)
	{
		int q1,q2,a,d;
		double  r, q;
		cout << "введите число a:";
		cin >> a;
		cout << "Введите число d:";
		cin >> d;
		q = a / d;
		q1 = (int)q;
		r = a%d;
		cout << "частное q:" << q1 << endl;
		cout << "остаток r:" << r << endl;

		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}

	//2.	Напишите функцию int f(int x, int y), которая возвращает 0, если значения x и y
	//оба равны нулю, 12/x, если y равен 0, 12/y, если x равен 0, иначе 144/(x*y).

	else if (i == 2)
	{
		int f, x, y;
		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
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
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}
	
	// 3.	Напишите функцию int f(int x, int y), которая возвращает x-y, 
	//если x больше y, иначе возвращает y-x

	else if (i == 3)
	{
		int f, x, y;
		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
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
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}

	//4.	Напишите функцию double f(double x, double y), которая возвращает x/y, 
	//если x больше y, иначе возвращает y/x.
	//Предполагается, что значения параметров больше нуля. 

	else if (i == 4)
	{
		double f, x, y;
		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
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
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}

	//5.	Напишите функцию double f(double x, double y, double z),
	//которая возвращает m*n/k, где k есть меньшее из чисел x, y, z, а m и n есть среднее
	//и большее из этих чисел. Предполагается, что значения параметров больше нуля

	else if (i == 5)
	{
		double f, x, y,z;
		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
		cin >> y;
		cout << "Введите число z:";
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
				
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}

	//6.	Напишите функцию int f(int a, int b, int c),
	//которая возвращает наименьшее из значений a, b, c.

	else if (i == 6)
	{
		int f, x, y, z;
		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
		cin >> y;
		cout << "Введите число z:";
		cin >> z;

		if ((x > y) && (y > z))
		{
			f = z;
			cout << "наименьшее ыисло:" <<f<< endl;
		}
		else if ((y > x) && (x > z))
		{
			f = z;
			cout << "наименьшее ыисло:" <<f<< endl;
		}
		else if ((z > x) && (x > y))
		{
			f = y;
			cout << "наименьшее ыисло:" <<f<< endl;
		}

		else if ((z>y)&&(y>x))
		{
			f = x;
			cout << "наименьшее число:" << f << endl;
		}

		else if ((y>z)&&(z>x))
		{
			f = x;
			cout << "наименьшее число:" << f << endl;
		}

		else if ((x>z)&&(z>y))
		{
			f = y;
			cout << "наименьшее число:" << f << endl;
		}

		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}

	//7.	Напишите функцию int f(int a, int b, int c), 
	//которая возвращает наибольшее из значений a, b, c.

	else if (i == 7)
	{

		int f, x, y, z;
		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
		cin >> y;
		cout << "Введите число z:";
		cin >> z;

		if ((x > y) && (y > z))
		{
			f = x;
			cout << "наибольшее число:" << f << endl;
		}
		else if ((y > x) && (x > z))
		{
			f = y;
			cout << "наибольшее число:" << f << endl;
		}
		else if ((z > x) && (x > y))
		{
			f = z;
			cout << "наибольшее число:" << f << endl;
		}

		else if ((z>y) && (y>x))
		{
			f = z;
			cout << "наибольшее число:" << f << endl;
		}

		else if ((y>z) && (z>x))
		{
			f = y;
			cout << "наибольшее число:" << f << endl;
		}

		else if ((x>z) && (z>y))
		{
			f = x;
			cout << "наибольшее число:" << f << endl;
		}

		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	
	}

	//8.	Напишите функцию bool f(int x, int y, int z), 
	//которая возвращает true, если х2+у2= z2, иначе возвращает false.

	else if (i == 8)
	{
		bool f;
		int x, y, z;
		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
		cin >> y;
		cout << "Введите число z:";
		cin >> z;
		if ((x*x + y*y) == (z*z))
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}
			
			
			cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}

	//9.	Напишите функцию bool f(int x, int y), которая возвращает true, 
	//если x делится нацело на y, или наоборот, y делится нацело на x, иначе
	//возвращает false. Предполагается, что значения параметров больше нуля

	else if (i == 9)
	{
		bool f1,f;
		int x, y;
		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
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

		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}

	//10.	Положительные числа x, y, z могут быть сторонами треугольника, 
	//если большее из них меньше суммы двух других. Напишите функцию
	//bool f(int x, int y, int z), которая возвращает true, если числа x, y, z могут
	//быть сторонами треугольника, иначе возвращает false. Предполагается, что значения 
	//параметров больше нуля
	else if (i == 10)
	{
		int x, y, z,f;
		cout << "введите число x:";
		cin >> x;
		cout << "Введите число y:";
		cin >> y;
		cout << "Введите число z:";
		cin >> z;
		if (((x + y) > z) || ((x + z) > y) || ((z + y) > x))
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;
		}
	}

}