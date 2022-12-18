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
   /// virtual 사용후 필요없어진 함수입니다.
   /// </summary>
   /*
   void Car::Go()
   {
      speed += 10;
   }
   */

   /// <summary>
   /// virtual 사용후 함수입니다.
   /// </summary>
/*
void OilCar::Go()
{
    speed += 10;
    oil -= 10;
}
*/
/// <summary>
/// virtual 사용후 함수입니다.
/// </summary>
 /*
void HybridCar::Go()
{
    OilCar::Go();
    power -= 10;
}
*/

/// <summary>
/// virtual 사용후 함수입니다.
/// </summary>
/*
void HybridCar::ShowState()
{
    cout << "HybirdCar-speed = " << speed << endl << "HybirdCar-oil = " << oil << endl << "HybirdCar-power = " << power << endl;
}
*/
/// <summary>
/// virtual 사용후 함수입니다.
/// </summary>
/*
void OilCar::ShowState()
{
    cout << "OilCar-speed = " << speed << endl << "OilCar-oil = " << oil << endl;
}
*/

/// <summary>
/// virtual 사용후 필요 없어진 함수입니다.
/// </summary>
/*
void Car::ShowState()
{
   cout << "Car-speed = " << speed << endl;
}

Car::Car(int speed) :speed(speed)
{
   cout << "Car 생성자 호출 완료" << endl;
}
*/

/// <summary>
/// virtual 사용전 함수입니다.
/// </summary>
/*
void Car::ShowState()
{
   cout << "Car-speed = " << speed << endl;
}
*/
/// <summary>
/// virtual 사용전 함수입니다.
/// </summary>
/*
Car::Car(int speed) :speed(speed)
{
   cout << "Car 생성자 호출 완료" << endl;
}
*/


/// <summary>
/// virtual 사용후 생성자입니다.
/// </summary>
/// <param name="driver"></param>
/// <param name="speed"></param>
/// <param name="oil"></param>
/*
OilCar::OilCar(string* driver, int speed, int oil):speed(speed),driver(driver),oil(oil)
{
   cout << "OilCar 생성자 호출 완료" << endl;
}

/// <summary>
/// virtual 사용후 소멸자 입니다.
/// </summary>
 OilCar::~OilCar()
{
   cout << "OilCar 소멸자 호출 완료" << endl;
}
*/

/// <summary>
/// virtual 사용전 소멸자 입니다.
/// </summary>
/*
OilCar::~OilCar()
{
   cout << "OilCar 소멸자 호출 완료" << endl;
}
*/


/*
HybridCar::HybridCar(string* passenger, string* driver, int oil, int power):OilCar(driver,speed,oil), passenger(passenger),power(power)
{
   cout << "Hybrid 생성자 호출 완료" << endl;
}


 HybridCar::~HybridCar()
{
   cout << "HybridCar 소멸자 호출 완료" << endl;
}
*/

/// <summary>
/// virtual 사용전 소멸자 입니다.
/// </summary>
/*
HybridCar::~HybridCar()
{
   cout << "HybridCar 소멸자 호출 완료" << endl;
}
*/