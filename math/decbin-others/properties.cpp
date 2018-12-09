#pragma once
#include "pch.h"
#include <iostream>
#include <windows.h>
#include "mathlib.h"

#undef __CONSOLEBLACK
#undef __CONSOLEBLUE
#undef __CONSOLEGREEN
#undef __CONSOLECYAN
#undef __CONSOLERED
#undef __CONSOLEMAGENTA
#undef __CONSOLEBROWN
#undef __CONSOLELIGHTGRAY
#undef __CONSOLEDARKGRAY
#undef __CONSOLELIGHTBLUE
#undef __CONSOLELIGHTGREEN
#undef __CONSOLELIGHTCYAN
#undef __CONSOLELIGHTRED
#undef __CONSOLELIGHTMAGENTA
#undef __CONSOLEYELLOW
#undef __CONSOLEWHITE

#define __CONSOLEBLACK			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
#define __CONSOLEBLUE			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
#define __CONSOLEGREEN			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
#define __CONSOLECYAN			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
#define __CONSOLERED			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
#define __CONSOLEMAGENTA		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
#define __CONSOLEBROWN			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
#define __CONSOLELIGHTGRAY		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
#define __CONSOLEDARKGRAY		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
#define __CONSOLELIGHTBLUE		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
#define __CONSOLELIGHTGREEN		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
#define __CONSOLELIGHTCYAN		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
#define __CONSOLELIGHTRED		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
#define __CONSOLELIGHTMAGENTA	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
#define __CONSOLEYELLOW			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
#define __CONSOLEWHITE			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

using std::cout;
using std::cin;
using std::endl;
using std::string;
using mathlib::dls;