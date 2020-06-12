#include <windows.h>


void draw(HDC hdc, int height, int width) {
	for (int xdir = 20; xdir < 240; xdir++) {
		for (int ydir = 50; ydir < 170; ydir++) {
			SetPixel(hdc, xdir, ydir, RGB(255, 0, 0));
		}
	}
}

int main()
{
	HDC hdc = GetDC(GetConsoleWindow());
	int height = 100;
	int width = 100;
	draw(hdc, height, width);
}
