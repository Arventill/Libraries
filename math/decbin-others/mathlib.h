#pragma once
#include <iostream>
#include <string>

using std::string;

namespace mathlib
{
	class dls //models (mdls)
	{
	private:
		int total_a;
		char oper;
		int fraction_a;
	public:
		void ulamekBinarny();
	public:
		//TOTAL
		static int total_bin2dec(string);
		static string total_dec2bin(int);
		static int total_all2dec(string, int);
		//FRACTION
		static int fraction_bin2dec(string, string);
		static string fraction_dec2bin(int);
		//CONVERT
		static string intostr(int); //konwersja inta do stringa
	};
}