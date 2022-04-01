#pragma once
#include "AllLibraries.h"
class Weapon
{
public:
	virtual void Action1() { cout << "Weapon::Shoot()\n"; }
	virtual void Action2() { cout << "Weapon::Reload()\n"; }
};

class Knife :public Weapon
{
public:
	void Action1() override { cout << "Knife::Attack 1\n"; }
	void Action2() override { cout << "Knife::Attack 2\n"; }
};

class Pistol :public Weapon
{
public:
	void Action1() override { cout << "Pistol::Shoot()\n"; }
	void Action2() override { cout << "Pistol::Reload()\n"; }
};

class SubmachineGun : public Weapon
{
public:
	void Action1() override { cout << "SubmachineGun::Shoot()\n"; }
	void Action2() override { cout << "SubmachineGun::Reload()\n"; }
};

class Rifle : public Weapon
{
public:
	void Action1() override { cout << "Rifle::Shoot()\n"; }
	void Action2() override { cout << "Rifle::Reload()\n"; }

};

class AutomaticRifle :public Weapon
{
public:
	void Action1() override { cout << "AutomaticRifle::Shoot()\n"; }
	void Action2() override { cout << "AutomaticRifle::Reload()\n"; }
};

class Grenade :public Weapon
{
public:
	void Action1() override { cout << "Grenade::Pull_out_the_ring()\n"; }
	void Action2() override { cout << "Grenade::Throw()\n"; }
};

class NLAW : public Weapon
{
public:
	void Action1() override { cout << "NLAW::Shoot()\n"; }
	void Action2() override { cout << "NLAW::Reload()\n"; }
};

class Javelin : public Weapon
{
public:
	void Action1() override { cout << "Javelin::Shoot()\n"; }
	void Action2() override { cout << "Javelin::Reload()\n"; }
};

class Stinger : public Weapon
{
public:
	void Action1() override { cout << "Stinger::Shoot()\n"; }
	void Action2() override { cout << "Stinger::Reload()\n"; }
};

class Support : public Weapon
{
public:
	void Action1() override { cout << "Neptun is working!\n"; }
	void Action2() override { cout << "F-16 is working!\n"; }
};

void Support1();