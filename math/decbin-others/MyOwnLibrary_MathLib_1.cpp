// MyOwnLibrary_MathLib_1.cpp : Bin to Dec & other own methods

#include "pch.h"
#include "properties.cpp"

void bindec_out(string, int);
void decbin_out(int, string);

int main()
{
	//string a, binarna;
	//int b, decymalna;
	//int okt, dec;
	////<dls> TYPE
	//dls obiekt;
	//obiekt.ulamekBinarny();
	////INPUT
	//cout << "Podaj liczbe binarna: "; cin >> a;
	//cout << "Podaj liczbe decymalna: "; cin >> b;
	////COUNT
	//decymalna = dls::total_bin2dec(a);
	//binarna = dls::total_dec2bin(b);
	////OUTPUT
	//bindec_out(a, decymalna);
	//decbin_out(b, binarna);
	int dec;
	string okt;
	cin >> okt;
	dec = dls::total_all2dec(okt, 8);
	cout << dec;
	system("pause");
	return 0;
}

void bindec_out(string a, int wynikDec)
{
	cout << endl;
	cout << a; __CONSOLERED; cout << "(2)"; __CONSOLEWHITE; cout << " == " << wynikDec; __CONSOLERED; cout << "(10)" << endl; __CONSOLEWHITE;
}

void decbin_out(int a, string wynikBin)
{
	cout << endl;
	cout << a; __CONSOLERED; cout << "(10)"; __CONSOLEWHITE; cout << " == " << wynikBin; __CONSOLERED; cout << "(2)" << endl; __CONSOLEWHITE;
}