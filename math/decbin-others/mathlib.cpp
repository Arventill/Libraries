#include "pch.h"
#include "mathlib.h"
#include "properties.cpp"

using namespace mathlib;

int dls::total_bin2dec(string s) // BINARY TO DECIMAL
{
	int podstawa = 2, potega = 0, wynik = 0, temp = 0;

	int dl = s.length();
	for (int i = dl - 1; i >= 0; i--)
	{
		temp = s[i] - 48;
		wynik += temp * pow(podstawa, potega);
		potega++;
	}
	return wynik;
}

string dls::total_dec2bin(int i) // DECIMAL TO BINARY
{
	string wynik = "";
	while (i)
	{
		if (i % 2 == 0)
		{
			wynik = "0" + wynik;
			i /= 2;
		}
		else
		{
			wynik = "1" + wynik;
			i /= 2;
		}
	}
	return wynik;
}

int dls::total_all2dec(string s, int podstawa)
{
	int potega = 0;
	int wynik=0;
	int dl = s.length();

	for (int i = dl - 1; i >= 0; i--)
	{
		wynik += (s[i] - 48)*pow(podstawa, potega);
		potega++;
	}
	return wynik;
}

int dls::fraction_bin2dec(string s1, string s2)
{
	return 1;
}

string dls::fraction_dec2bin(int i)
{
	double ii = (double)i;
	string w = "";
	while (ii >= 1)
		ii /= 10;
	while (ii)
	{
		if (ii * 2 < 1)
		{
			w += "0";
			ii = ii * 2;
		}
		else
		{
			w += "1";
			ii = ii * 2 - 1;
		}
	}
	return w;
}

string dls::intostr(int i)
{
	string wynik = "";
	while (i)
	{
		if (i % 10 == 1)
		{
			wynik = "1" + wynik;
		}
		else
		{
			wynik = "0" + wynik;
		}
		i = i / 10;
	}
	return wynik;
}

void dls::ulamekBinarny()
{
	string ia1, ia2;
	cout << "Podaj ulamek, dziesietny: ";	cin >> total_a >> oper >> fraction_a;
	ia1 = dls::total_dec2bin(total_a);
	ia2 = dls::fraction_dec2bin(fraction_a);
	cout << ia1 << ", " << ia2; __CONSOLERED; cout << "(2)" << endl; __CONSOLEWHITE;
}