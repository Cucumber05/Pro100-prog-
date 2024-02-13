#include "classes.h"
#include <iostream>

cashRegister::cashRegister(): cashOnHand(500) {} //��������� �����������
cashRegister::cashRegister(int cashOnHand_) { cashOnHand = cashOnHand_; }//�����������
int cashRegister::getCurrentBalance() {return cashOnHand;}//������ ������
void cashRegister::acceptAmount(int cashOnHand_) { cashOnHand+= cashOnHand_;} //�������� ����

dispenserType::dispenserType() : numberOfItems(50), TypeCost(50) {} //��������� �����������
dispenserType::dispenserType(int numberOfItems_, int TypeCost_) { //�����������
	numberOfItems = numberOfItems_;
	TypeCost = TypeCost_;
} 
int dispenserType::getNoOfItems() { return numberOfItems; } //������ �������� numberOfItems
int dispenserType::getCost() { return TypeCost; } //������ ���������
void dispenserType::makeSale() { //�������
	if (numberOfItems > 0) {
		numberOfItems--;
	}
}
