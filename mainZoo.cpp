#include <stdio.h>
#include <thread>
#include <Windows.h>
using namespace std;

class Animal
{
public:
	Animal()
	{}
	~Animal()
	{}
	void eat()
	{
		printf("Animal ate a treat\n");
	}
	virtual void talk()
	{
		printf("Ring-ding-ding-ding-dingeringeding\n");
	}
	virtual void laugh()
	{}
};
class Goat : public Animal
{
public:
	Goat()
	{}
	~Goat()
	{}
	void eat()
	{
		printf("Goat ate a can\n");
	}
	void talk()
	{
		printf("The goat says: AAAAAAAAAAAAAAHHHHHHHHHHH\n");
	}
	void laugh()
	{
		printf("People say filling your animals with helium is wrong\nI say whatever floats your goat\n");
	}
};
class Horse : public Animal
{
public:
	Horse()
	{}
	~Horse()
	{}
	void eat()
	{
		printf("Horse ate an apple()\n");
	}
	void talk()
	{
		printf("The horse says: neigh\n");
	}
	void laugh()
	{
		printf("Could I bother you for a glass of water?\nI'm a little horse\n");
	}
};
class Cat : public Animal
{
public:
	Cat()
	{}
	~Cat()
	{}
	void eat()
	{
		printf("Cat ate a bird\n");
	}
	void talk()
	{
		printf("The cat says: meow\n");
	}
	void laugh()
	{
		printf("It's raining cats and dogs\nWhat a CATastrophe!\n");
	}
};

int main()
{
	Goat baphomet;
	Horse pinkiepie;
	Cat bastet;
	Animal* zoo[3] = { &baphomet,&pinkiepie,&bastet };
	baphomet.eat();
	baphomet.laugh();
	baphomet.talk();
	zoo[0]->eat();
	zoo[0]->laugh();
	zoo[0]->talk();
	getchar();
	return 0;
}