#include "Weapon.h"

void Support1()
{
	cout << "Choose type of support:\n1 - Artillery\n2 - Air Force\n";
	int key;
	while (true)
	{
		key = _getch();
		if (key == 49)
		{
			Weapon* temp = new Support;
			temp->Action1();
			delete[] temp;
			return;
		}
		if (key == 50)
		{
			Weapon* temp = new Support;
			temp->Action2();
			delete temp;
			return;
		}
	}
}
