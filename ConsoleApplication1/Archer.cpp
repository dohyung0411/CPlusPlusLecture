/*#include "Archer.h"
using namespace test;

// [이니셜라이저]

Archer::Archer(Archer& copy):Name(copy.Name), HP(copy.HP), Power(copy.Power)
{

   cout << this << "생성자 호출 완료!" << endl;
}

*/
// [생성자]
/*
test::Archer::Archer(string name , int a, int b )
{
   Name  = name;
   HP    = a;
   Power = b;

   cout << "생성자 호출 완료!" << endl;
}

// [소멸자]
Archer::~Archer()
{
   delete  Party;

   cout << "소멸자 호출 완료!!" << endl;
}

// [복사 생성자]
Archer::Archer(Archer& copy):Name(copy.Name), HP(copy.HP), Power(copy.Power)
{
   if (copy.Party != NULL)
      Party = new Archer(copy.Party->Name, copy.Party->HP, copy.Party->Power);
   cout << this << "복사 생성자 호출완료!" << endl;
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
   cout << "이름 : " << this->Name << endl;
   cout << "HP : " << this->HP << endl;
   cout << "Power : " << this->Power << endl;

}

void test::Warrior::ShowState()
{
   cout << "이름 : " << this->Name << endl;
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

   cout << "생성자 호출 완료!" << endl;
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