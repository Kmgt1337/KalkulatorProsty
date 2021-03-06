﻿#include <iostream>
#include <math.h>
#include <iomanip>
#include <limits.h>

using namespace std;

void stop()
{
	system("pause");
}
int main()
{
	char wybor;
	double a;
	double b;
	double c;


	for (; ;)
	{
		do {
			system("cls");
			cout << "==========Kalkulator prosty==========" << endl << endl;
			cout << "**Dla katow jednostka sa radiany**" << endl << endl;
			cout << "[+] - dodawanie" << endl;
			cout << "[-] - odejmowanie" << endl;
			cout << "[*] - mnozenie" << endl;
			cout << "[/] - dzielenie" << endl;
			cout << "[p] - pierwiastek kwadratowy" << endl;
			cout << "[s] - sinus kata" << endl;
			cout << "[c] - cosinus kata" << endl;
			cout << "[t] - tangens kata" << endl;
			cout << "[i] - arcsin kata" << endl;
			cout << "[o] - arccos kata" << endl;
			cout << "[a] - arctg kata" << endl; 
			cout << "[e] - funkcja eksponencjalna" << endl;
			cout << "[l] - logarytm o podstawie 10" << endl;
			cout << "[k] - logarytm o podstawie naturalnej" << endl;
			cout << "[x] - wyjscie z progrmau" << endl << endl;
			cout << "Wybierz swoje dzialanie: ";
			cin >> wybor;
			cout << endl;
			if(wybor == 'x')
			{
                          exit(1);
			}
		} while (wybor != '+' && wybor != '-' && wybor != '*'
			&& wybor != '/' && wybor != 'p' && wybor != 's' && wybor != 'c' && wybor != 't' && wybor != 'i'
			&& wybor != 'o' && wybor != 'a' && wybor != 'e' && wybor != 'l' && wybor != 'k' && wybor!='x');

		cout << "Liczba/kat 1: ";
		cin >> a;
		cout << "\n";
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Wprowadzone dane musza byc liczba: ";
			cin >> a;
			cout << "\n";
		}
		cout << "Liczba/kat 2: ";
		cin >> b;
		cout << "\n";
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Wprowadzone dane musza byc liczba: ";
			cin >> b;
			cout << "\n";
		}
		cout << "Liczba/kat 3: ";
		cin >> c;
		cout << "\n";
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Wprowadzone dane musza byc liczba: ";
			cin >> c;
			cout << "\n";
		}
		cout << "\n";

		switch (wybor)
		{
		case '+':
		{
			cout << "Suma wynosi: " << a + b + c << endl;
			stop();
			break;
		}
		case '-':
		{
			cout << "Roznica wynosi: " << a - b - c << endl;
			stop();
			break;
		}
		case '*':
		{
			cout << "Iloczyn wynosi: " << setprecision(20) << a * b * c << endl;
			stop();
			break;
		}
		case '/':
		{
			if (b == 0 || c == 0)
			{
				cout << "Nie mozna dzielic przez 0" << endl;
				stop();
				break;
			}
			else
			{
				cout << "Iloraz wynosi: " << setprecision(20) << a / b / c << endl;
				stop();
				break;
			}
		}
		case'p':
		{
			cout << "Pierwiastek liczby 1. wynosi: " << setprecision(20) << sqrt(a) << endl << endl;
			cout << "Pierwiastek liczby 2. wynosi: " << sqrt(b) << endl << endl;
			cout << "Pierwiastek liczby 3. wynosi: " << sqrt(c) << endl << endl;
			stop();
			break;
		}
		case 's':
		{
			cout << "Sinus kata 1. wynosi: " << setprecision(20) << sin(a) << endl << endl;
			cout << "Sinus kata 2. wynosi: " << sin(b) << endl << endl;
			cout << "Sinus kata 3. wynosi: " << sin(c) << endl << endl;
			stop();
			break;
		}
		case 'c':
		{
			cout << "Cosinus kata 1. wynosi: " << setprecision(20) << cos(a) << endl << endl;
			cout << "Cosinus kata 2. wynosi: " << cos(b) << endl << endl;
			cout << "Cosinus kata 3. wynosi: " << cos(c) << endl << endl;
			stop();
			break;
		}
		case 't':
		{
			cout << "Tangens kata 1. wynosi: " << setprecision(20) << tan(a) << endl << endl;
			cout << "Tangens kata 2. wynosi: " << tan(b) << endl << endl;
			cout << "Tangens kata 3. wynosi: " << tan(c) << endl << endl;
			stop();
			break;
		}
		case 'i':
		{
			cout << "Arcsin kata 1. wynosi: " << setprecision(20) << asin(a) << endl << endl;
			cout << "Arcsin kata 2. wynosi: " << asin(b) << endl << endl;
			cout << "Arcsin kata 3. wynosi: " << asin(c) << endl << endl;
			stop();
			break;
		}
		case 'o':
		{
			cout << "Arccos kata 1. wynosi: " << setprecision(20) << acos(a) << endl << endl;
			cout << "Arccos kata 2. wynosi: " << acos(a) << endl << endl;
			cout << "Arccos kata 3. wynosi: " << acos(a) << endl << endl;
			stop();
			break;
		}
		case 'a':
		{
			cout << "Arctg kata 1. wynosi: " << setprecision(20) << atan(a) << endl << endl;
			cout << "Arctg kata 2. wynosi: " << atan(b) << endl << endl;
			cout << "Arctg kata 3. wynosi: " << atan(c) << endl << endl;
			stop();
			break;
		}
		case 'e':
		{
			cout << "Funkcja wykladnicza dla argumentu 1.: " << setprecision(20) << exp(a) << endl << endl;
			cout << "Funkcja wykladnicza dla argumentu 2.: " << exp(b) << endl << endl;
			cout << "Funkcja wykladnicza dla argumentu 3.: " << exp(c) << endl << endl;
			stop();
			break;
		}
		case 'l':
		{
			cout << "Logarytm o podstawie 10 z liczby 1. wynosi: " << setprecision(20) << log10(a) << endl << endl;
			cout << "Logarytm o podstawie 10 z liczby 2. wynosi: " << log10(b) << endl << endl;
			cout << "Logarytm o podstawie 10 z liczby 3. wynosi: " << log10(c) << endl << endl;
			stop();
			break;
		}
		case 'k':
		{
			cout << "Logarytm o podstawie naturalnej z liczby 1. wynosi: " << setprecision(20) << log(a) << endl << endl;
			cout << "Logarytm o podstawie naturalnej z liczby 2. wynosi: " << log(b) << endl << endl;
			cout << "Logarytm o podstawie naturalnej z liczby 3. wynosi: " << log(c) << endl << endl;
			stop();
			break;
		}
		default:
		{
			cout << "Blad" << endl;
			stop();
			break;
		}


		}
		}
	}
