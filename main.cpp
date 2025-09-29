#include <iostream>

using namespace std;

struct FCharaeter
{
	int LocationX;
	int LocationY;
	char Shape;
};

int main()
{
	FCharaeter Player;
	FCharaeter Monster;

	Player.LocationX = 1;
	Player.LocationY = 1;
	Player.Shape = 'P';

	Monster.LocationX = 10;
	Monster.LocationY = 10;
	Monster.Shape = 'M';

	return 0;
}