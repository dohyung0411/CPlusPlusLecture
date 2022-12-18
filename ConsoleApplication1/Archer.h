//#pragma once
//#include <iostream>
//#include <string>
//using namespace std;


// 협업때는 class명이 겹칠 확률이 높음.
// 따라서 namespace를 자신만의 이름으로 정해놓고 class를 사용.
//namespace test
//{
   /*
   class Archer
   {
      private:

      string Name;
      int HP;
      int Power;
      Archer* Party = NULL;

   public:
      //Archer(string name = "", int HP = 1, int b = 1);

      Archer(Archer& copy);

      ~Archer();

      Archer Getparty();

      string GetName();

      int GetHP();

      //int GetPower();

      //string SetName();

      //void SetHP();

      //void SetPower();

      void SetParty(Archer Party);

      void Attack(Archer& target);

      void ShowState();

      void Heal();


   };
}
*/

/*
class Healer
{
private:

   string Name;
   int HP;
   int Power;
   Healer* Party = NULL;

public:
   void ShowState();

   void ShowState();

   string GetName() { return Name; }

   void SetName(string Name);

   int GetPower() { return Power; }

   void SetPower(int Power);

   int GetHP() { return HP; }

   void SetHP(int HP);
};

class Warrior
{
private:

   string Name;
   int HP;
   int Power;
   Warrior* Party = NULL;

public:
   void ShowState();

   string GetName() { return Name; }

   void SetName();

   int GetPower() {return Power;}

   void SetPower();

   int GetHP() { return HP; }

   void SetHP();
};
*/
/*
#pragma once
#include<iostream>
using namespace std;

class car
{
private:
   int Speed;
   int Gear;

   static int Count;

   static int cnt;


public:

   void Go();
   void Stop();

   static int GetCnt();

   static int SetCnt();



   car();

   ~car();

};
*/


/*
#pragma once
#include <iostream>
#include <string>

using namespace std;
class Character
{
    string name;
    int power;
    int HP;

public:

    
    Character(string name = "", int power = 0, int HP = 0);

    void Attack(Character& target);

    void setName(string name);
    string getName();

    void setpower(int power);
    int getpower();

    void setHP(int HP);
    int getHP();

    void ShowState();
};

class Archer : public Character
{

public:
    Archer(string name, int Power, int HP);

};

class Healer : public Character
{

public:
    Healer(string name, int Power, int HP);

    void Heal(Character& target);

};

class Warrior : public Character
{

public:
    Warrior(string name, int Power, int HP);

};
*/

//------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
class First
{
public:
   void FirstFnc();

};

class Second : public First
{
public:
   void SecondFnc();
};

class Third : public Second
{
public:
   void ThirdFnc();

};
*/

/*
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Car
{
public:


    // virtual 사용후
    virtual void Go() = 0;
    virtual void ShowState() = 0;
    // virtual 사용하기전
    virtual void Go();
    void ShowState();
    
};*/

/*
class OilCar : public Car
{
public:

    string* driver;
    int oil = 100;
    int speed = 0;

    OilCar(string* driver, int speed, int oil);

    virtual ~OilCar();
    void Go();
    void ShowState();
};

class HybridCar : public OilCar
{
public:
    string* passenger;

    HybridCar(string* passenger, string* driver, int speed, int power);
    virtual ~HybridCar();
    int power = 100;
    void Go();
    void ShowState();
};
*/