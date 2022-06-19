#include<iostream>
#include"Pizza.h"
using namespace std;

void printPizzaData(const Pizza& pizza);
int main()
{
	Pizza Pizza_1("Cheese pizza", 5, 8);

	Pizza Pizza_2("Special pizza", 7, 8);
	Pizza_2.addToppings("Pepperoni");
	Pizza_2.addToppings("Mushroom");
	Pizza_2.addToppings("Black olives");

	printPizzaData(Pizza_1);
	printPizzaData(Pizza_2);

		
	return 0;
}

void printPizzaData(const Pizza& pizza)
{
	cout << "Name: " << pizza.getName() << endl;
	cout << "Diameter: " << pizza.getDiameter() << endl;
	cout << "Cost: $" << pizza.getCost() << endl;
	cout << "Toppings:" << endl;
	pizza.printToppings();
	cout << endl;
}
