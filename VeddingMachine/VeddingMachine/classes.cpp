#include "classes.h"
#include <iostream>

cashRegister::cashRegister(): cashOnHand(500) {} //дефолтный конструктор
cashRegister::cashRegister(int cashOnHand_) { cashOnHand = cashOnHand_; }//конструктор
int cashRegister::getCurrentBalance() {return cashOnHand;}//узнать баланс
void cashRegister::acceptAmount(int cashOnHand_) { cashOnHand+= cashOnHand_;} //внесение кэша

dispenserType::dispenserType() : numberOfItems(50), TypeCost(50) {} //дефолтный конструктор
dispenserType::dispenserType(int numberOfItems_, int TypeCost_) { //конструктор
	numberOfItems = numberOfItems_;
	TypeCost = TypeCost_;
} 
int dispenserType::getNoOfItems() { return numberOfItems; } //узнать значение numberOfItems
int dispenserType::getCost() { return TypeCost; } //узнать стоимость
void dispenserType::makeSale() { //продать
	if (numberOfItems > 0) {
		numberOfItems--;
	}
}
