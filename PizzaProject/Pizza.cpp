#include"Pizza.h"
#include<string>
#include<iostream>
using namespace std;

Pizza::Pizza(string name, int cost, int diameter)
{
	this->name = name;
	this->cost = cost;
	this->diameter = diameter;
	toppings.push_back("Cheese");
}
void Pizza::addToppings(string topping)
{
	toppings.push_back(topping);
}
string Pizza::getName() const
{
	return name;
}
int Pizza::getDiameter() const
{
	return diameter;
}
int Pizza::getCost() const
{
	return cost;
}
void Pizza::printToppings() const
{
	for (auto topping : toppings)
	{
		cout << "\t" << topping << endl;
	}
}