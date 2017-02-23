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

	void attack(Zombie&Zomb)
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

		default:
			break;
		}
		Zomb.life = Zomb.life - damage;
	}
	
	bool isAlive()
	{
		return life > 0;
	}
};

Player::Player(): arma(static_cast <Weapon>(rand()%static_cast<int>(Weapon::MAX))), precision(rand() % 20 / 10), life(100) {}


class Zombie
{
public:

	int distanceToPlayer;
	float speed;
	float damage;
	int life;
	Zombie();


private:

	void attack(Player&Pl) 
	{
		if (distanceToPlayer==0)
		{
			Pl.life = Pl.life - damage;
		}
		else
		{
			distanceToPlayer = distanceToPlayer - 1;
		}
	}

	bool isAlive() 
	{
		return life > 0;
	}

};

Zombie::Zombie(): distanceToPlayer(20+rand() % 200-20)), speed(rand() % 20 / 10), damage(rand() % 20 / 10) {}
