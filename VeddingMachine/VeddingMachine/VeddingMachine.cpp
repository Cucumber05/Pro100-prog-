#include "classes.h"
#include <iostream>
#include <string>
void ShowSelection();
void SellProduct(dispenserType& product);

dispenserType Chips(37, 85);
dispenserType Peanut(50, 40);
dispenserType Chocolate(0, 69);
dispenserType Sandwich(20, 150);
cashRegister CashRegister(0);

int main() {
	ShowSelection();
	int item;
	std::cout << "do u want some? (yes/no)" << std::endl;
	std::string contin;
	std::cin >> contin;
	while (contin != "no") {

		std::cout << "<3 enter wich one(1-4):" << std::endl;
		std::cin >> item;
		switch (item) {
		case 1:
			SellProduct(Chips);
			break;
		case 2:
			SellProduct(Peanut);
			break;
		case 3:
			SellProduct(Chocolate);
			break;
		case 4:
			SellProduct(Sandwich);
			break;
		default:
			std::cout << "Please try another one :(" << std::endl;
			break;
		}
		std::cout << "do u want some more? (yes/no)" << std::endl;
		std::cin >> contin;

	}
	std::cout << "Ur change: " << CashRegister.getCurrentBalance() << " rubles \nbye bye <3 hope see u again!" << std::endl;

	return 0;
}


void ShowSelection() {
	std::cout << "Hi! Waht do u want to buy?^-^ \nlook! We have a lot of food:		rubles   piece\n1.Chips					 " << Chips.getCost() << "	  " << Chips.getNoOfItems() << std::endl;
	std::cout << "2.Peanut				 " << Peanut.getCost() << "	  " << Peanut.getNoOfItems()<< std::endl;
	std::cout << "3.Chocolate				 " << Chocolate.getCost() << "	  " << Chocolate.getNoOfItems() << std::endl;
	std::cout << "4.Sandwich			  	 " << Sandwich.getCost() << "	  " << Sandwich.getNoOfItems() << std::endl;
} 

void SellProduct(dispenserType& product) {
	int cash;

		if (product.getNoOfItems() > 0 ) {
			std::cout << "It cost: " << product.getCost() << " rubles" << std::endl;

			while (CashRegister.getCurrentBalance() < product.getCost())
			{
				std::cout << "Give me ur money :D  add " << product.getCost() - CashRegister.getCurrentBalance() << " rubles more" << std::endl;
				std::cin >> cash;
				CashRegister.acceptAmount(cash);
			}
			product.makeSale();
			CashRegister.acceptAmount(product.getCost() * (-1));
			std::cout << "Tnx! Dont forget take ur food! Yammyy <333" << std::endl;
			std::cout << "Ur balance:" << CashRegister.getCurrentBalance() << " rubles" << std::endl;

		}
		else { std::cout << "Sorry >'_'< We're out of that :(" << std::endl; }

}