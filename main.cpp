/*�÷��̾ X,Y������ ���� �� �� �ֽ��ϴ�.

wasd�� �Է��� �޾Ƽ� �÷��̾�� ��ĭ�� �����Դϴ�.

w�� ����, s�� �Ʒ���, a�� ����, d�� ������ �̷� ���α׷��� ��������.
�÷��̾� ����� P�� ��� ���ּ���.

���͵� �Ѹ��� ���� �����ּ���.*/

#include <iostream>
#include <windows.h>
#include <conio.h>
#define X_MAX 10
#define Y_MAX 10

using namespace std;

int main() 
{
	srand((unsigned int)time(NULL));

	int PlayerX = 1;
	int PlayerY = 1;
	char PlayerShape = 'P';

	int EnemyX = X_MAX;
	int EnemyY = Y_MAX;
	char EnemyShape = 'M';
	int EnemyMove = 0;

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

		EnemyMove = (rand() % 4);
		switch (EnemyMove)
		{
		case 0:
			EnemyY--;
			break;
		case 1:
			EnemyY++;
			break;
		case 2:
			EnemyX--;
			break;
		case 3:
			EnemyX++;
			break;
		default:
			break;
		}

		system("cls");

		COORD Cur;
		Cur.X = PlayerX;
		Cur.Y = PlayerY;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
		cout << PlayerShape << " ";

		Cur.X = EnemyX;
		Cur.Y = EnemyY;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
		cout << EnemyShape << " ";
	}
	return 0;
}