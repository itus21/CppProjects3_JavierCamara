#include <iostream>
#include <string>
#include <ctime>


enum class Weapon { FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX }; //Fuertemente tipado (enum class)

class Zombie; // Se declara la funcion antes porque si no en Player no la encuentra
class Player
{
public:

	Weapon arma;
	float precision;
	int life;

	Player();

private:

	void attack(Zombie&)
	{
		int damage;
		switch (arma)
		{
		case Weapon::FISTS:
			damage = 0 * precision;
			break;
		case Weapon::GUN:
			damage = 1 * precision;
			break;
		case Weapon::SHOTGUN:
			damage = 2 * precision;
			break;
		case Weapon::REVOLVER:
			damage = 3 * precision;
			break;
		case Weapon::SNIPER:
			damage = 4 * precision;
			break;
		case Weapon::MACHINE_GUN:
			damage = 5 * precision;
			break;
		case Weapon::MAX:
			break;

		default:
			break;
		}
	}
	
	bool isAlive()
	{

	}
};

Player::Player()
{
}


class Zombie
{
public:

	int distanceToPlayer;
	float speed ;
	float damage;
	Zombie();


private:

	void attack(Player&) 
	{

	}

	bool isAlive() 
	{

	}

};

Zombie::Zombie()
{
}


