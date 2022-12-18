#pragma once
#include <iostream>
#include <string>
using namespace std;


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