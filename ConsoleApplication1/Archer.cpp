#include "Archer.h"
using namespace test;
// [�̴ϼȶ�����]

test::Archer::Archer(string name , int a, int b )
{

   cout << "������ ȣ�� �Ϸ�!" << endl;
}


// [������]
test::Archer::Archer(string name, int a, int b)
{
	Name = name;
	HP = a;
	Power = b;

	cout << "������ ȣ�� �Ϸ�!" << endl;
}

// [�Ҹ���]
test::Archer::~Archer()
{
	cout << "�Ҹ��� ȣ�� �Ϸ�!!" << endl;
}



/*
void test::Archer::Attack(Archer& target)
{
	target.HP = target.HP - Power;

}
*/
void test::Archer::ShowState()
{
	cout << "�̸� : " << Name << endl;
	cout << "HP : " << HP << endl;
	cout << "Power : " << Power << endl;
}

void test::Archer::Heal()
{
	HP += 10;
}

string SetName(string name)
{
	

}

Archer* Setparty(Archer copy)
{
	 
}



