#pragma warning(disable:4996)
#include <stdio.h>
#include <thread>
#include <Windows.h>

using namespace std;

class Enemy
{
protected:
	int health;
	int xPos;
	int yPos;
	char sprite;
public:
	Enemy()
	{
		health = 10;
		xPos = 0;
		yPos = 0;
		sprite = NULL;
		printf("enemy spawn\n");
	}
	~Enemy()
	{
		printf("enemy gone\n");
	}
	void printPosition()
	{
		printf("enemy placement:%d,%d\n", xPos, yPos);
	}
	void printHealth()
	{
		printf("enemy health: %d\n", health);
	}
	int getHealth()
	{
		return health;
	}
	void setHealth(int e)
	{
		health = e;
	}
	
};

class RpgEnemy :public Enemy
{
protected:
	int experienceVal;
public:
	RpgEnemy()
	{
		experienceVal = 1;
		printf("rpgEnemy spawn\n");
	}
	~RpgEnemy()
	{
		printf("rpgEnemy gone\n");
	}
	void printXP()
	{
		printf("rpgEnemy's xp reward: %d\n", experienceVal);
	}
};
class Mage:public RpgEnemy
{
	int mana;
public:
	Mage()
	{
		
		mana = 10;
		printf("mage spawn\n");
	}
	~Mage()
	{
		printf("mage gone\n");
	}
	void printMana()
	{
		printf("mage mana: %d\n", mana);
	}
	int fireball()
	{
		if (mana >= 5)
		{
			mana -= 5;
			printf("mage cast fireball\n");
			return 50;
		}
		else
		{
			printf("mage spell fizzles\n");
			return 0;
		}
	}
	int thunderOrb()
	{
		if (mana >= 7)
		{
			mana -= 7;
			printf("mage cast thunder orb\n");
			return 60;
		}
		else
		{
			printf("mage spell fizzles\n");
			return 0;
		}
	}
	int frostbolt()
	{
		if (mana >= 3)
		{
			mana -= 3;
			printf("mage cast frostbolt\n");
			return 10;
		}
		else
		{
			printf("mage spell fizzles\n");
			return 0;
		}
	}
};

class Goat :public RpgEnemy
{
	long long int evilness;
	float abuse;
public:
	Goat()
	{
		evilness = LLONG_MAX;
		abuse = 9000.1;
		printf("goat spawn\n");
	}
	~Goat()
	{
		printf("goat gone\n");
	}
	void printEvil()
	{
		printf("goat evil:%lld", evilness);
	}
	void printAbuse()
	{
		printf("goat Abuse:%f", abuse);
	}

};
int main()
{
	Mage ela1;
	Goat Baphomet;
	
	ela1.printHealth();
	
	Baphomet.printEvil();
	
	
	getchar();
	return 0;
}