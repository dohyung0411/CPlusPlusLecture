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

/*
#include"Archer.h"
Character::Character(string name, int power , int HP) :name(name), power(power), HP(HP)
{

}
void Character::Attack(Character& target)
{
   target.HP = target.HP - this->power;
}

void  Character::setName(string name) { this->name = name; }
string  Character::getName() { return name; }

void  Character::setpower(int power) { this->power = power; }
int  Character::getpower() { return power; }

void  Character::setHP(int HP) { this->HP = HP; }
int  Character::getHP() { return HP; }

void Character::ShowState()
{
   cout << "name:" << name << endl;
   cout << "power:" << power << endl;
   cout << "HP:" << HP << endl;
}

   Archer::Archer(string name, int Power, int HP) :Character(name, Power, HP)
   {

   }

   Healer::Healer(string name, int Power, int HP) :Character(name, Power, HP)
   {

   }

   void Heal(Character& target)
   {
      target.setHP(target.getHP() + 10);
   }

   Warrior::Warrior(string name, int Power, int HP) :Character(name, Power, HP)
   {

   }

   void First::FirstFnc() { cout << "First Class" << endl; }

   void Second::SecondFnc() { cout << "Second Class" << endl; }

   void Third::ThirdFnc() { cout << "Third Class" << endl; }

   */


//#include"Archer.h"

   /// <summary>
   /// virtual ����� �ʿ������ �Լ��Դϴ�.
   /// </summary>
   /*
   void Car::Go()
   {
      speed += 10;
   }
   */

   /// <summary>
   /// virtual ����� �Լ��Դϴ�.
   /// </summary>
/*
void OilCar::Go()
{
    speed += 10;
    oil -= 10;
}
*/
/// <summary>
/// virtual ����� �Լ��Դϴ�.
/// </summary>
 /*
void HybridCar::Go()
{
    OilCar::Go();
    power -= 10;
}
*/

/// <summary>
/// virtual ����� �Լ��Դϴ�.
/// </summary>
/*
void HybridCar::ShowState()
{
    cout << "HybirdCar-speed = " << speed << endl << "HybirdCar-oil = " << oil << endl << "HybirdCar-power = " << power << endl;
}
*/
/// <summary>
/// virtual ����� �Լ��Դϴ�.
/// </summary>
/*
void OilCar::ShowState()
{
    cout << "OilCar-speed = " << speed << endl << "OilCar-oil = " << oil << endl;
}
*/

/// <summary>
/// virtual ����� �ʿ� ������ �Լ��Դϴ�.
/// </summary>
/*
void Car::ShowState()
{
   cout << "Car-speed = " << speed << endl;
}

Car::Car(int speed) :speed(speed)
{
   cout << "Car ������ ȣ�� �Ϸ�" << endl;
}
*/

/// <summary>
/// virtual ����� �Լ��Դϴ�.
/// </summary>
/*
void Car::ShowState()
{
   cout << "Car-speed = " << speed << endl;
}
*/
/// <summary>
/// virtual ����� �Լ��Դϴ�.
/// </summary>
/*
Car::Car(int speed) :speed(speed)
{
   cout << "Car ������ ȣ�� �Ϸ�" << endl;
}
*/


/// <summary>
/// virtual ����� �������Դϴ�.
/// </summary>
/// <param name="driver"></param>
/// <param name="speed"></param>
/// <param name="oil"></param>
/*
OilCar::OilCar(string* driver, int speed, int oil):speed(speed),driver(driver),oil(oil)
{
   cout << "OilCar ������ ȣ�� �Ϸ�" << endl;
}

/// <summary>
/// virtual ����� �Ҹ��� �Դϴ�.
/// </summary>
 OilCar::~OilCar()
{
   cout << "OilCar �Ҹ��� ȣ�� �Ϸ�" << endl;
}
*/

/// <summary>
/// virtual ����� �Ҹ��� �Դϴ�.
/// </summary>
/*
OilCar::~OilCar()
{
   cout << "OilCar �Ҹ��� ȣ�� �Ϸ�" << endl;
}
*/


/*
HybridCar::HybridCar(string* passenger, string* driver, int oil, int power):OilCar(driver,speed,oil), passenger(passenger),power(power)
{
   cout << "Hybrid ������ ȣ�� �Ϸ�" << endl;
}


 HybridCar::~HybridCar()
{
   cout << "HybridCar �Ҹ��� ȣ�� �Ϸ�" << endl;
}
*/

/// <summary>
/// virtual ����� �Ҹ��� �Դϴ�.
/// </summary>
/*
HybridCar::~HybridCar()
{
   cout << "HybridCar �Ҹ��� ȣ�� �Ϸ�" << endl;
}
*/