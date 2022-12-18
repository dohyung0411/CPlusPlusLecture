#pragma once
#include <iostream>
#include <string>
using namespace std;


// 협업때는 class명이 겹칠 확률이 높음.
// 따라서 namespace를 자신만의 이름으로 정해놓고 class를 사용.
namespace test
{
    class Archer
    {
    private:

        string Name;
        int HP;
        int Power;
        Archer* party;
    public:
        Archer(string name = "", int HP = 1, int b = 1);

        ~Archer();

        void ShowState();

        void Heal();

        string GetName() { return Name; }

        string SetName();

        void GetHP();

        void SetHP();

        void GetPower();

        void SetPower();

        Archer* Getparty() { return party; }

        Archer* Setparty();


    };
}

