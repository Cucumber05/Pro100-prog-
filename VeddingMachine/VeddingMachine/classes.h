#pragma once

class cashRegister
{
private:
	int cashOnHand;
public:
	cashRegister(); //��������� �����������
	cashRegister(int cashOnHand_); //�����������
	int getCurrentBalance(); //������ ������
	void acceptAmount(int cashOnHand_); //�������� ����
};

class dispenserType
{
private:
	int numberOfItems;
	int TypeCost;
public:
	dispenserType(); //��������� �����������
	dispenserType(int numberOfItems, int TypeCost); //�����������
	int getNoOfItems(); //������ �������� numberOfItems
	int getCost(); //������ ���������
	void makeSale(); //�������
};

