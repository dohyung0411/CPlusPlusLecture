#include "Archer.h"
using namespace test;
// [이니셜라이저]

test::Archer::Archer(string name , int a, int b )
{

   cout << "생성자 호출 완료!" << endl;
}


// [생성자]
test::Archer::Archer(string name, int a, int b)
{
	Name = name;
	HP = a;
	Power = b;

	cout << "생성자 호출 완료!" << endl;
}

// [소멸자]
test::Archer::~Archer()
{
	cout << "소멸자 호출 완료!!" << endl;
}



/*
void test::Archer::Attack(Archer& target)
{
	target.HP = target.HP - Power;

}
*/
void test::Archer::ShowState()
{
	cout << "이름 : " << Name << endl;
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



