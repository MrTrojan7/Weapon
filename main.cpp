#include "AllLibraries.h"
#include "Weapon.h"

int main()
{
	cout << "Chose your weapon:\n";
	cout << "1 - Knife\n";
	cout << "2 - Pistol\n";
	cout << "3 - SubmachineGun\n";
	cout << "4 - Rifle\n";
	cout << "5 - AutomaticRifle\n";
	cout << "6 - Grenade\n";
	cout << "7 - NLAW\n";
	cout << "8 - Javelin\n";
	cout << "9 - Stinger\n";
	cout << "0 - Artillery support\n";
	cout << "Space - Shoot/Another action\n";
	cout << "Enter - Reload/Another action\n";
	cout << "********************************\n";

	Weapon** weapon = new Weapon* [9];
	weapon[0] = new Knife;
	weapon[1] = new Pistol;
	weapon[2] = new SubmachineGun;
	weapon[3] = new Rifle;
	weapon[4] = new AutomaticRifle;
	weapon[5] = new Grenade;
	weapon[6] = new NLAW;
	weapon[7] = new Javelin;
	weapon[8] = new Stinger;

	Weapon* temp = new Weapon;
	int type;

	while (true)
	{
		type = _getch();
		switch (type)
		{
		case 49: cout << "You chose Knife\n"; temp = weapon[0]; break;
		case 50: cout << "You chose Pistol\n"; temp = weapon[1]; break;
		case 51: cout << "You chose SubmachineGun\n"; temp = weapon[2]; break;
		case 52: cout << "You chose Rifle\n"; temp = weapon[3]; break; 
		case 53: cout << "You chose AutomaticRifle\n"; temp = weapon[4]; break;
		case 54: cout << "You chose Grenade\n"; temp = weapon[5]; break;
		case 55: cout << "You chose NLAW\n"; temp = weapon[6]; break;
		case 56: cout << "You chose Javelin\n"; temp = weapon[7]; break;
		case 57: cout << "You chose Stinger\n"; temp = weapon[8]; break;
		case 48: cout << "You chose Support\n"; Support1(); break;
		//case 88: case 120: cout << "Go forward\n"; temp = weapon[10];
			if (type != 48)
			{
			case 32: temp->Action1(); break;
			case 13: temp->Action2(); break;
			}
		default:
			continue;
		}
	}
	delete[] weapon;
	return 0;
}