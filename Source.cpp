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

int PlayerMove(int* LocationX, int* LocationY);
void EnemyMove(int* LocationX, int* LocationY);
void PrintPoint(int LocationX, int LocationY, char Shape);

int Source()
{
	srand((unsigned int)time(NULL));

	int PlayerX = 1;
	int PlayerY = 1;
	char PlayerShape = 'P';

	int EnemyX = X_MAX;
	int EnemyY = Y_MAX;
	char EnemyShape = 'M';

	bool GamePlay = true;

	while (GamePlay)
	{
		if (PlayerMove(&PlayerX, &PlayerY) == 1)
		{
			GamePlay = false;
		}

		EnemyMove(&EnemyX, &EnemyY);

		system("cls");

		PrintPoint(PlayerX, PlayerY, PlayerShape);

		PrintPoint(EnemyX, EnemyY, EnemyShape);
	}
	return 0;
}

int PlayerMove(int* LocationX, int* LocationY)
{
	int KeyInput = 0;
	switch (KeyInput = _getch())
	{
	case 'w':
		*LocationY = (*LocationY) - 1;
		break;
	case 's':
		*LocationY = (*LocationY) + 1;
		break;
	case 'a':
		*LocationX = (*LocationX) - 1;
		break;
	case 'd':
		*LocationX = (*LocationX) + 1;
		break;
	case 'q':
		return 1;
		break;
	default:
		break;
	}
	return 0;
}

void EnemyMove(int* LocationX, int* LocationY)
{
	int EnemyMove = (rand() % 4);
	switch (EnemyMove)
	{
	case 0:
		*LocationY = (*LocationY) - 1;
		break;
	case 1:
		*LocationY = (*LocationY) + 1;
		break;
	case 2:
		*LocationX = (*LocationX) - 1;
		break;
	case 3:
		*LocationX = (*LocationX) + 1;
		break;
	default:
		break;
	}
}

void PrintPoint(int LocationX, int LocationY, char Shape)
{
	COORD Cur;
	Cur.X = LocationX;
	Cur.Y = LocationY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	cout << Shape << " ";
}