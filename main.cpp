/*�÷��̾ X,Y������ ���� �� �� �ֽ��ϴ�.

wasd�� �Է��� �޾Ƽ� �÷��̾�� ��ĭ�� �����Դϴ�.

w�� ����, s�� �Ʒ���, a�� ����, d�� ������ �̷� ���α׷��� ��������.
�÷��̾� ����� P�� ��� ���ּ���.*/

#include <iostream>
#include <windows.h>
#include <conio.h>
#define X_MAX 10
#define Y_MAX 10

using namespace std;

int main() 
{
	int PlayerX = 1;
	int PlayerY = 1;
	char PlayerPoint = '@';

	bool GamePlay = true;

	int KeyInput = 0;
	COORD Cur{};

	while (GamePlay)
	{
		//Player Controller
		switch (KeyInput = _getch())
		{
		case 'w':
			PlayerY--;
			break;
		case 's':
			PlayerY++;
			break;
		case 'a':
			PlayerX--;
			break;
		case 'd':
			PlayerX++;
			break;
		case 'q':
			GamePlay = false;
			break;
		default:
			break;
		}

		system("cls");
		COORD Cur;
		Cur.X = PlayerX;
		Cur.Y = PlayerY;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
		cout << PlayerPoint << " ";
	}
	return 0;
}