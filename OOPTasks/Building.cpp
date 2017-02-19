/*
Write	a	class	called	“Building”.	Write constructors,	destructor,	attributes	and
functions	for	the	class.
2. Use	that	class	in	a	program	where	you	must	define	business park	that	consist	of	3
buildings.	The	first	one	is	for	company called	“XYZ	industries”,	has	6	floors,	127
offices,	600	employees and	196	free	working	seats.	The	second	one	is	for	building
called	“Rapid	Development	Crew”,	has	8	floors,	210	offices,	822	employees,	85	free
working	seats	and	on	the	first	floor	there	is	a	restaurant	instead	of	offices. The	third
building	if	for	“University”.	To	fit	University’s	needs	the	build	has	11	floors,	106	offices,
200	employees	and	60	free	working	seats.
Based	on	that	information	make	a	program	to	print	the	names	of	the	buildings	with:
- Most	employees
- Most	free	places
- Highest	coefficient employees/(employees + free seats)
*/

#include<iostream>
#include<string>
using namespace std;

class Building
{
	//private atributes
	string name;
	string owner;
	double price;
	unsigned short int floors;
	unsigned short int employees;
	unsigned short int freePlaces;
	unsigned short int numberOfOffices;

public:
	
	//constructors
	Building();
	Building(string name,double price,unsigned short int floors);

	//Setters
	void setName(string name);
	void setOwner(string owner);
	void setPrice(double price);
	void setFloors(unsigned short int floor);
	void setEmployees(unsigned short int employees);
	void setFreePlaces(unsigned short int freePlaces);
	void setNumberOfOffices(unsigned short int numberOfOffices);
	//Getters
	string getName();
	string getOwner();
	double getPrice();
	unsigned short int getFloors();
	unsigned short int getEmployees();
	unsigned short int getFreePlaces();
	unsigned short int getNumberOfOffices();
};

//Default constructor
Building::Building()
{
	this->name = "Undefined Building";
	this->price = 0;
	this->floors = 0;
	this->employees = 0;
	this->freePlaces = 0;
	this->numberOfOffices = 0;
	this->owner = "Undefined Owner";
}
//Parametric Constructor
Building::Building(string name, double price, unsigned short int floors)
{
	this->name = name;
	this->price = price;
	this->floors = floors;
}
//Setters
void Building::setName(string name)
{
	this->name = name;
}
void Building::setFloors(unsigned short int floors)
{
	this->floors = floors;
}
void Building::setOwner(string owner)
{
	this->owner = owner;
}
void Building::setPrice(double price)
{
	this->price = price;
}
void Building::setEmployees(unsigned short int employees)
{
	this->employees = employees;
}
void Building::setFreePlaces(unsigned short int freePlaces)
{
	this->freePlaces = freePlaces;
}
void Building::setNumberOfOffices(unsigned short int numberOfOffices)
{
	this->numberOfOffices = numberOfOffices;
}
//Getters
string Building::getName()
{
	return name;
}
string Building::getOwner()
{
	return owner;
}
unsigned short int Building::getFloors()
{
	return floors;
}
double Building::getPrice() 
{
	return price;
}
unsigned short int Building::getEmployees()
{
	return employees;
}
unsigned short int Building::getFreePlaces()
{
	return freePlaces;
}
unsigned short int Building::getNumberOfOffices()
{
	return numberOfOffices;
}


//Functions
const int MAX_NUMBER_OF_BUILDINGS_IN_ARRAY = 10;
//Return number of employees in that building whith most employees
unsigned short int MostEmployees(Building arrrayEmployess[MAX_NUMBER_OF_BUILDINGS_IN_ARRAY])
{
	Building temporarryBuilding = Building();
	for (int i = 0; i < MAX_NUMBER_OF_BUILDINGS_IN_ARRAY; i++)
	{
		Building currentBuilding = arrrayEmployess[i];
		if (currentBuilding.getEmployees() > temporarryBuilding.getEmployees())
		{
			temporarryBuilding = currentBuilding;
		}
	}
	return temporarryBuilding.getEmployees();
}
unsigned short int MostFreePlaces(Building arrrayEmployess[MAX_NUMBER_OF_BUILDINGS_IN_ARRAY])
{
	Building temporarryBuilding = Building();
	for (int i = 0; i < MAX_NUMBER_OF_BUILDINGS_IN_ARRAY; i++)
	{
		Building currentBuilding = arrrayEmployess[i];
		if (currentBuilding.getFreePlaces() > temporarryBuilding.getFreePlaces())
		{
			temporarryBuilding = currentBuilding;
		}
	}
	return temporarryBuilding.getFreePlaces();
}
//Highest	coefficient employees/(employees+free seats)
double HighestCoefficient(Building arrrayEmployess[MAX_NUMBER_OF_BUILDINGS_IN_ARRAY])
{
	double topCoef = 0,coef;

	for (int i = 0; i < MAX_NUMBER_OF_BUILDINGS_IN_ARRAY; i++)
	{
		if ((arrrayEmployess[i].getEmployees() + arrrayEmployess[i].getFreePlaces()) == 0)
		{
			continue;
		}
		coef = arrrayEmployess[i].getEmployees()*1. / (arrrayEmployess[i].getEmployees()*1. + arrrayEmployess[i].getFreePlaces()*1.);
		if (coef > topCoef)
		{
			topCoef = coef;
		}
	}

		return topCoef;
}

int main() 
{
	Building myFirstBuilding = Building();
	myFirstBuilding.setEmployees(12);
	myFirstBuilding.setFreePlaces(10);
	Building mySecondBuilding = Building("FirstBuilding",750000,2);
	mySecondBuilding.setEmployees(15);
	mySecondBuilding.setFreePlaces(54);
	Building myThirdBuilding = Building();
	myThirdBuilding.setEmployees(500);
	myThirdBuilding.setFreePlaces(55);
	Building myFifthBuilding = Building();
	myFifthBuilding.setEmployees(15);
	myFifthBuilding.setFreePlaces(22);
	Building mySixthBuilding = Building();
	mySixthBuilding.setEmployees(22);
	mySixthBuilding.setFreePlaces(222);
	Building arrayEmployess[MAX_NUMBER_OF_BUILDINGS_IN_ARRAY] =
	{myFirstBuilding,mySecondBuilding,myThirdBuilding, myFifthBuilding,mySixthBuilding};
	
	cout << MostEmployees(arrayEmployess) << endl;
	cout << MostFreePlaces(arrayEmployess) << endl;
	cout << HighestCoefficient(arrayEmployess) << endl;
	
	return 0;
}