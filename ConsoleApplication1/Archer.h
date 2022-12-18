#pragma once
#include <iostream>
#include <string>
using namespace std;


// �������� class���� ��ĥ Ȯ���� ����.
// ���� namespace�� �ڽŸ��� �̸����� ���س��� class�� ���.
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

