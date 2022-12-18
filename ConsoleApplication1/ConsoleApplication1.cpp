

// 게임 개발->언리얼 엔진***
// c++ = c + 객체지향
// 객체지향주의 = 사물(눈에 보이는 모든것)을 위주로 생각하겠다
// 절차 지향(C) = 의존도가 높음

//printf();->cout

//scanf->cin

// std::cout

// std::cin

// std::endl

// 네임스페이스

// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

/*
#include <iostream>

int main() // 프로그램의 시작 진입점
{

    std::cout << "Hello World!\n";

    std::cout << "Hello World!" << std::endl;

    // 운영체제마다 계행 문자가 다를수도 있어서 위에 문장처럼 쓴다.


}*/
/*
int main(void)
{
   int age = 0;
   std::cout << "몇살이신가요 ?" << std::endl;
   std::cin >> age;
   std::cout << "당신의 나이는 " << age << "살 입니다";
   return 0;


}*/

/*
 int add(int a, int b)
{
    return a + b;

}

int main(void)
{
   int nData_1 = 0;
   int nData_2 = 0;

   std::cin >> nData_1 >> nData_2;

    std::cout << add(nData_1, nData_2);

}
*/

/*
int add(int a, int b)
{
   return a + b;
}
*/

/*
#include<iostream>
void add(char a, char b)
{
   std::cout << a << b;
}

int main(void)
{
    std::cout << add(3, 5);
    add('b', 'a');

   return 0;
}
*/

/*
 #include<iostream>
int add(int a = 1, int b = 2)
{
   return a + b;
}

int main(void)
{
   std::cout << add();
   std::cout << std::endl;
   std::cout << add(5, 3);

   return 0;
}
*/

/*
 #include<iostream>
int add(int a, int b, int c = 0, int d = 0, int e = 0)
{
   return a + b + c + d + e;
}

int main(void)
{
   int nData_1;  // 파스칼, 칼엘 방식(변수 명령 규칙)
   int nData_2;  // 파스칼 ex) GetDataInt() 각각의 단어의 맨 첫글자는 대문자
   int nData_3;  // 칼엘   ex) getDataInt() 각각의 단어의 맨 첫글자는 대문자지만 맨 첫글자는 소문자
   int nData_4;
   int nData_5;

   std::cin >> nData_1 >> nData_2 >> nData_3 >> nData_4 >> nData_5;

   std::cout << add(nData_1, nData_2, nData_3, nData_4, nData_5);

   return 0;
}
*/

// [Bool 타입]

/*
#include<iostream>

int main()
{
   std::cout << true;
   std::cout << std::endl;
   std::cout << sizeof(1);

   return 0;
}
*/

// 12 / 3
// C++ 3)

//kedudisk (웹하드)
// 학생 아이디 : it 3000
// 비번: koreait 11!


/*
#include <iostream>
#include <string>
using namespace std;

class Archer
{
private:
   string Name;
   int HP;
   int Power;

public:
   void SetPower(int Power)
   {
      if (Power < 0)
      {
         cout << "파워는 최소 0입니다." << endl;
         return;
      }
      else
      {
         cout << Power << endl;
      }
   }

   string GetName(string Name) { return Name; }

   void SetName(string name)
   {
      if (name.length() > 10 == true)
      {
         cout << "이름은 10자까지 사용할 수 있습니다." << endl;
         return;
      }
      else
      {
         cout << "사용가능한 이름 입니다." << endl;
      }
   }

   void SetHP(int HP)
   {
      if (HP > 100 == true)
      {
         cout << "최대 체력은 100까지 입니다." << endl;
         return;
      }
      else
      {
         cout << HP << endl;
      }
   }

   void Attack(Archer& target)
   {
      target.HP = target.HP - Power;

   }

   void ShowState(string Name, int HP, int Power)
   {
      cout << "이름 : " << Name << endl;
      cout << "HP : " << HP << endl;
      cout << "Power : " << Power << endl;
   }

   void Heal()
   {
      HP += 10;
   }

};


int main(void)
{

   Archer player1;
   Archer* player2 = new Archer;

   player1.SetHP(100);


   player2->SetHP(100);



   return 0;

}
*/

// 객체지향 4대 요소  ***
// 1) 캡슐화
// 2) 상속
// 3) 추상화
// 4) 다형성

// [파일분리]


#include <iostream>
#include <string>
#include"Archer.h"
using namespace std;
using namespace test;

// 협업때는 class명이 겹칠 확률이 높음.
// 따라서 namespace를 자신만의 이름으로 정해놓고 class를 사용.


int main(void)
{
    Archer* player1 = new Archer("박주병");

    Archer* Party = new Archer("파티원", 100, 100);

    player1->Setparty(*Party);

    cout << &(player1->Getparty()) << endl;
  
    delete player1;
}

// Archer.h   - 클래스의 선언
//            - 클래스의 사용함에 있어 최소한의 필요정보만 있음
//            - 컴파일러가 문법체크를 할 때 참조하는 용도 (컴파일되는건 아님)
//            - 컴파일시 헤더파일이 그대로 main이 있는 cpp파일에 카피된다.

// Archer.cpp - 클래스의 정의
//            - 컴파일시 필요없는 정보
//            - 컴파일이후 링커에 의해 하나의 실행파일로 묶일 때 사용된다.          

 // [생성자 규칙]
// 1) 반환형이 없다.(Void가 아니라 아예 없음)
// 2) 클래스 이름과 똑같다(대소문자 일치해야함)
// 3) 함수 오버로딩 가능
// 4) 함수 매개변수 초기화 가능
// 5) 모든 클래스는 생성자가 있으며 객체 생성시 

// [소멸자 규칙]
// 1) ~클래스이름
// 2) 반환형이 없다. Void가 아니라 아예 없다.
// 3) 정의하지 않으면 디폴트소멸자가 자동삽입된다.
// 4) 객체가 사라질때 호출된다.
// 5) 멤버변수를 동적 할당하였다면 소멸자에서 delete 처리하자