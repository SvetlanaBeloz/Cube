#include <iostream>
#include <windows.h>
using namespace std;

void Point(int x, int y)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD point;
	point.X = x;
	point.Y = y;
	SetConsoleCursorPosition(h, point);
	cout << (char)178 << (char)178;
}

void CursorInfo()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor;
	cursor.bVisible = false;
	cursor.dwSize = 1;
	SetConsoleCursorInfo(h, &cursor);
}

void Cube(int color, int number)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	CursorInfo();
	int width = 11;
	for (int y = 0; y < width; y++)
	{
		for (int x = 0; x < width; x++) {
			if (x == 0 || y == 0 || x == width - 1 || y == width - 1 || x == 1 && y == 1 || x == 1 && y == width - 2 || x == width - 2 && y == 1
				|| x == width - 2 && y == width - 2)
			{
				SetConsoleTextAttribute(h, color + 8);
				cout << (char)178 << (char)178;
			}
			else
			{
				SetConsoleTextAttribute(h, color);
				cout << (char)178 << (char)178;
			}
		}
		cout << "\n";
	}
	cout << "\n";

	SetConsoleTextAttribute(h, color + 8);

	if (number == 1) {
		Point(10, 5);
		Sleep(100000);
	}
	else if (number == 2) {
		Point(6, 3);
		Point(14, 7);
		Sleep(100000);
	}
	else if (number == 3) {
		Point(6, 3);
		Point(10, 5);
		Point(14, 7);
		Sleep(100000);
	}
	else if (number == 4) {
		Point(6, 3);
		Point(14, 3);
		Point(14, 7);
		Point(6, 7);
		Sleep(100000);
	}
	else if (number == 5) {
		Point(6, 3);
		Point(14, 3);
		Point(10, 5);
		Point(14, 7);
		Point(6, 7);
		Sleep(100000);
	}
	else if (number == 6) {
		Point(6, 3);
		Point(14, 3);
		Point(6, 5);
		Point(14, 5);
		Point(14, 7);
		Point(6, 7);
		Sleep(100000);
	}
}

int main()
{
	Cube(17, 6);
}