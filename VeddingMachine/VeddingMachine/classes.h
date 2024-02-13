#pragma once

class cashRegister
{
private:
	int cashOnHand;
public:
	cashRegister(); //дефолтный конструктор
	cashRegister(int cashOnHand_); //конструктор
	int getCurrentBalance(); //узнать баланс
	void acceptAmount(int cashOnHand_); //внесение кэша
};

class dispenserType
{
private:
	int numberOfItems;
	int TypeCost;
public:
	dispenserType(); //дефолтный конструктор
	dispenserType(int numberOfItems, int TypeCost); //конструктор
	int getNoOfItems(); //узнать значение numberOfItems
	int getCost(); //узнать стоимость
	void makeSale(); //продать
};

