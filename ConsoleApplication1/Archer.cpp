/*#include "Archer.h"
using namespace test;

// [�̴ϼȶ�����]

Archer::Archer(Archer& copy):Name(copy.Name), HP(copy.HP), Power(copy.Power)
{

   cout << this << "������ ȣ�� �Ϸ�!" << endl;
}

*/
// [������]
/*
test::Archer::Archer(string name , int a, int b )
{
   Name  = name;
   HP    = a;
   Power = b;

   cout << "������ ȣ�� �Ϸ�!" << endl;
}

// [�Ҹ���]
Archer::~Archer()
{
   delete  Party;

   cout << "�Ҹ��� ȣ�� �Ϸ�!!" << endl;
}

// [���� ������]
Archer::Archer(Archer& copy):Name(copy.Name), HP(copy.HP), Power(copy.Power)
{
   if (copy.Party != NULL)
      Party = new Archer(copy.Party->Name, copy.Party->HP, copy.Party->Power);
   cout << this << "���� ������ ȣ��Ϸ�!" << endl;
}

void test::Archer::Attack(Archer& target)
{
   target.HP = target.HP - Power;

}
*/

/*
using namespace test;
void test::Healer::ShowState()
{
   cout << "�̸� : " << this->Name << endl;
   cout << "HP : " << this->HP << endl;
   cout << "Power : " << this->Power << endl;

}

void test::Warrior::ShowState()
{
   cout << "�̸� : " << this->Name << endl;
   cout << "HP : " << this->HP << endl;
   cout << "Power : " << this->Power << endl;


}

void Healer::SetName(string Name)
{
   this->Name = Name;
}

void Healer::SetHP(int HP)
{
   this->HP = HP;
}

void Healer::SetPower(int Power)
{
   this->Power = Power;
}
*/

/*
void test::Archer::Heal()
{
   HP += 10;
}

string Archer::GetName()
{
   return Name;

}

int Archer::GetHP()
{
   return HP;
}

Archer Archer::Getparty()
{
   return *Party;
}

void Archer::SetParty(Archer party)
{
   this->Party = &party;

}
*/


//#include "Archer.h"

/*
void car::Go(int speed, int gear)
{
   Speed++;

}

void car::Stop()
{
   Speed = Speed-1;
}


car::car()
{
   cnt++;

   cout << "������ ȣ�� �Ϸ�!" << endl;
}

car::~car()
{
   cnt--;
}

int car::GetCnt()
{
   return cnt;
}
*/