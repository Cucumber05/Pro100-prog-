#include "classes.h"
#include <iostream>
#include <string>
void ShowSelection();
void SellProduct();

dispenserType Chips(37, 85);
dispenserType Peanut(50, 40);
dispenserType Chocolate(0, 69);
dispenserType Sandwich(20, 150);
cashRegister CashRegister(0);

int main() {
	ShowSelection();
	std::cout << "do u want some? (yes/no)" << std::endl;
	std::string contin;
	std::cin >> contin;
	while (contin != "no") {
		SellProduct();
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

void SellProduct() {
	int item;
	int cash;
	std::cout << "<3 enter wich one(1-4):" << std::endl;
	std::cin >> item;
	switch (item) {
	case 1:
		if (Chips.getNoOfItems() > 0 ) {
			std::cout << "It cost: " << Chips.getCost() << " rubles" << std::endl;

			while (CashRegister.getCurrentBalance() < Chips.getCost())
			{
				std::cout << "Give me ur money :D  add " << Chips.getCost() - CashRegister.getCurrentBalance() << " rubles more" << std::endl;
				std::cin >> cash;
				CashRegister.acceptAmount(cash);
			}
			Chips.makeSale();
			CashRegister.acceptAmount(Chips.getCost() * (-1));
			std::cout << "Tnx! Dont forget take ur chips! Yammyy <333" << std::endl;
			std::cout << "Ur balance:" << CashRegister.getCurrentBalance() << " rubles" << std::endl;

		}
		else { std::cout << "Sorry >'_'< We're out of chips :(" << std::endl; }
		break;

	case 2:
		if (Peanut.getNoOfItems() > 0) {
			std::cout << "It cost: " << Peanut.getCost() << " rubles" << std::endl;

			while (CashRegister.getCurrentBalance() < Peanut.getCost())
			{
				std::cout << "Give me ur money :D add " << Peanut.getCost() - CashRegister.getCurrentBalance() << " rubles more" << std::endl;
				std::cin >> cash;
				CashRegister.acceptAmount(cash);
			}
			Peanut.makeSale();
			CashRegister.acceptAmount(Peanut.getCost() * (-1));
			std::cout << "Tnx! Dont forget take ur peanut! Yammyy <333" << std::endl;
			std::cout << "Ur balance: " << CashRegister.getCurrentBalance() << " rubles" << std::endl;
		}
		else { std::cout << "Sorry >'_'< We're out of peanut :(" << std::endl; }
		break;

	case 3:
		if (Chocolate.getNoOfItems() > 0) {
			std::cout << "It cost: " << Chocolate.getCost() << " rubles" << std::endl;

			while (CashRegister.getCurrentBalance() < Chocolate.getCost())
			{
				std::cout << "Give me ur money :D add " << Chocolate.getCost() - CashRegister.getCurrentBalance() << " rubles more" << std::endl;
				std::cin >> cash;
				CashRegister.acceptAmount(cash);
			}
			Chocolate.makeSale();
			CashRegister.acceptAmount(Chocolate.getCost() * (-1));
			std::cout << "Tnx! Dont forget take ur chocolate! Yammyy <333" << std::endl;
			std::cout << "Ur balance: " << CashRegister.getCurrentBalance() << "rubles" << std::endl;
		}
		else { std::cout << "Sorry >'_'< We're out of chocolate :(" << std::endl; }
		break;

	case 4:
		if (Sandwich.getNoOfItems() > 0) {
			std::cout << "It cost: " << Sandwich.getCost() << " rubles" << std::endl;

			while (CashRegister.getCurrentBalance() < Sandwich.getCost())
			{
				std::cout << "Give me ur money :D add " << Sandwich.getCost() - CashRegister.getCurrentBalance() << " rubles more" << std::endl;
				std::cin >> cash;
				CashRegister.acceptAmount(cash);
			}
			Sandwich.makeSale();
			CashRegister.acceptAmount(Sandwich.getCost() * (-1));
			std::cout << "Tnx! Dont forget take ur sandwich! Yammyy <333" << std::endl;
			std::cout << "Ur balance: " << CashRegister.getCurrentBalance() << " rubles" << std::endl;
		}
		else { std::cout << "Sorry >'_'< We're out of sandwich :(" << std::endl; }
		break;
	
    default:
        std::cout << "Please try another one :(" << std::endl;
        break;
    }
}