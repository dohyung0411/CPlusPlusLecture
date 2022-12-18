/*
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

/*#include<iostream>

int main()
{
   std::cout << true;
   std::cout << std::endl;
   std::cout << sizeof(false);

   return 0;
}
*/
// ---------------------------------------------------------------------------------------------------------------------------------------------------------------

// 11/27     c++ 2번째 수업

// [참조자]

// 1) 선언과 동시에 변수로 초기화 해야 한다
// int &b;        - 선언만 불가능
// int &b=30;     - 상수 불가능
// int &b = NULL; - NULL불가능

/*
#include <iostream>

void Swap(int &a, int &b) // 참조자는 변수에 숫자가 들어가더라도 그 값의 주소를 가리킨다.
{
   int temp = a;
   a = b;
   b = temp;
}
int main(void)
{
   int a = 3;
   int b = 5;

   std::cout << "값 교환 이전" << a << ',' << b;
   Swap(a, b);
   std::cout << std::endl;
   std::cout << "값 교환 후 " << a <<',' << b;

   return 0;

}
*/

//            포인터                          VS              참조자
// - 선언을 일반변수 처럼 자유롭게 한다.                    선언시 무조건 변수로 초기화 해야 한다.
// - 사용시 기본은 주소를 불러온다.                        사용시 일반변수와 동일하다.
// - 언제든지 자유롭게 초기화 한다.                        한번 초기화 되면 다른 값으로 초기화 (불가능)**

// [참조자 동적할당]
/*
#include<iostream>
#include<string.h>
#include<stdlib.h>
typedef struct Point
{
   int x;
   int y;
}Point;

int main(void)
{

   Point a;
   Point b;
   Point &str = *(new Point);

   a.x = 10;
   a.y = 10;

   b.x = 30;
   b.y = 30;

   if (&str == NULL)
   {
      std::cout << "Err";
   }

   char *str1 = NULL;

   strcpy_s(str1, 4, "fds");
   std::cout << &str << std::endl;

   delete &str;
}
*/

// [네임스페이스 규칙]
/*
   1) 엔트리 포인트(main 함수는 들어가면 안된다)
   2) 사용할때는 네임스페이스뒤에 쌍점 2개를 사용한다.
   3) 생략을 위해선 헤더 부분에 using을 사용한다.
*/

/*
//#include<iostream>
#include<string>
using namespace std;
//1) 구조체 방식
typedef struct Archer
{
   string Name;
   int HP;
   int Power;
}Archer;

2) 구조체 방식
struct Archer
{
   string Name;
   int HP;
   int Power;
}

void Heal(Archer &player1, Archer& player2)
{
   player1.HP = player1.HP + 10;
   player2.HP = player2.HP + 10;

   cout << player1.HP;
   cout << endl;
   cout << player2.HP;
   cout << endl;
}


void Attack(Archer &player1, Archer &player2)
{
   player2.HP = player2.HP - player1.Power;
}

void ShowStata(Archer& player1, Archer& player2)
{
   cout << player1.Name;
   cout << endl;
   cout << player1.HP;
   cout << endl;
   cout << player1.Power;
   cout << endl;
   cout << player2.Name;
   cout << endl;
   cout << player2.HP;
   cout << endl;
   cout << player2.Power;
   cout << endl;
}

int main(void)
{
   Archer &player1 = *(new Archer);
   Archer &player2 = *(new Archer);


   player1.Power = 40;
   player1.HP = 100;

   player2.Power = 40;
   player2.HP = 100;

   Attack(player1, player2);
   Heal(player1, player2);
   ShowStata(player1, player2);


   cout << player2.HP;

   return 0;
}
*/

/*
#include<iostream>
#include <string>
using namespace std;


class Archer
{
   string Name;
   int HP;
   int Power;
};

   void Heal(Archer& player)
   {
      player.HP += 10;
   }

   void Attack(Archer& player1, Archer& player2)
   {
      player2.HP = player2.HP - player1.Power;
   }

   void ShowStata(Archer &player)
   {
      cout << player.Name;
      cout << endl;
      cout << player.HP;
      cout << endl;
      cout << player.Power;

   }



int main(void)
{
   Archer& player1 = *(new Archer);
   Archer& player2 = *(new Archer);


   player1.Power = 40;
   player1.HP = 100;

   player2.Power = 40;
   player2.HP = 100;

   Attack(player1, player2);

   ShowStata( player2);

   return 0;
}
*/

// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
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

/*
#include <iostream>
#include <string>
#include"Archer.h"
using namespace std;
using namespace test;

// 협업때는 class명이 겹칠 확률이 높음.
// 따라서 namespace를 자신만의 이름으로 정해놓고 class를 사용.


int main(void)
{

   Archer* player1 = new test::Archer();

   Archer* player2 = new test::Archer("김도형", 100 );

   Archer* player3 = new test::Archer("김도형", 100, 20);


   delete player1;
   delete player2;
   delete player3;


   return 0;

}*/

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

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// 12 / 4)
// C++ 4)
// SI(system integration)  SM(유지보수를 담당하는 부서)없으면 들어가지 마셈.
// - 거의 야근이 잦음
// - 취업난이도가 상대적으로 낮음.(인력난)

// SM(system management)

// soulution (경함쌓기가 힘듬)

// service(커리어로서 좋음)

// startup(자기개발 하기 좋음)
// 대박이 날수도 있지만 쪽박이 될수도...



// 객체 배열 VS 객체 포인터 배열

// - 디폴트 생성자만 쓸수있다. 따라서 값을 따로 초기화 해줘야 한다.

// - 한번에 생성되며 한번에 삭제 된다.
// - 즉 객체 한 개 한 개를 따로 관리 하지 못한다.


//--- 객체 포인터 배열 ---

// 다양한 생서자를 활용 가능하다.
// 객체마다 따로 생성 하며 객체 한 

/*
#include<iostream>
#include"Archer.h"
using namespace test;

int main(void)
{
   Archer* player1 = new Archer("박주병");

   Archer* Party = new Archer("파티원");

   player1->SetParty(*Party);

   cout << &(player1->Getparty()) << endl;

   delete player1;

   */
   // 가리키는 포인터가 없다면 객체는 소멸한다.


   /*
   Archer *player1 = new Archer("플레이어1");

   player1->party = new Archer("파티원111", 100, 100);

   Archer player2(*player1);

   //Archer* player3[3];

   cout << player1->party << endl;
   cout << player2.party << endl;


   cout << player2.Name << endl;
   cout << player2.party->Name << endl;
   */
   //delete player1;

    /*
   for (int i = 0; i < 3; i++)
   {
      player3[i] = new Archer;
      delete player3[i];
   }

   while(1)
   {
      player3[a] = new Archer;
      delete player3[a];
      a++;
      if (a == 3)
      {
         break;
      }
   }
}

// 실습을 하며 알아낸 사실
// 1. string 클래스는 깊은 복사 생성자를 구현해놧다.
// 2. 매개변수로 받은 객체는 call-by-balue로 받을시 깊은 복사라 할지라도 다시 객체를 생성해야 한다.
// 주소를 가리키는 변수가(포인터,참조자)아무것도 없다면 자동으로 해당 객체는 소멸된다.



// This의 규칙
// - 객체 자기 자신의 주소값을 가지는 포인터이다.
// - 클래스 내에서 사용가능하다.
// - 자기 자신의 객체를 뜻하기에 this.멤버변수,this.멤버함수 등의 활용이 가능하다.


//형성관리툴 -> 문서들 변경이력 관리
// git      CLI                                      github  웹서버


// 본인 PC 프로젝트  ->커밋  로컬   레포지토리  -> 푸시   서버  레포지토리
//                   <- pull                 <- 패치



//확장 -> 확장 관리 -> 깃허브 다운로드 -> 로그인 -> 보기 -> 팀 탐색기


// static의 규칙
// 1. 객체들이 공유한다.
// 2. 객체 생성없이 클래스이름으로 바로 접근한다.
// 3. 객체의 멤버변수가 아니다.
// 4. 프로그램이 실행될때 메모리에 올라간다.
// 5. 프로그램이 종료될때 메모리에서 사라진다.

// [Static함수의 규칙]
// 1. 객체들이 공유한다
// 2. 객체 생성없이 클래스이름으로 바로 접근한다.
// 3. 객체의 멤버함수가 아니다.
// 4. 멤버변수는 사용불가능하다.(객체 생성 이전에 사용할 수 있는 함수이기때문이다.)

/*
#include<iostream>
#include"Archer.h"
using namespace std;


int car::cnt = 0;

int main(void)
{

   car k7;
   car* p = new car;

   cout << car::GetCnt() << endl;

   delete p;



}
*/

// [상속의 특징]
// 1. 클래스명:접근제어지시자 부모클래스로 선언.
// 2. 부모클래스의 멤버변수, 멤버함수를 자식클래스가 가진다.
// 3. 자식이 똑같은 이름의 멤버변수, 멤버함수를 가진다면 자식이 우선시 된다.
// 4. 부모클래스의 생성자를 이용해 부모클래스로 부터 받은 멤버변수를 초기화 할 수 있다.
//    (이니셜라이저로 직접 초기화 불가능)


//#include<iostream>
//#include<string>
//using namespace std;

/*
class Car
{
private:
   int Speed;
protected:
   int Distance;
public:
   string Color;

 // private 이라도 이니셜라이저로 초기화까지는 가능하다.
   Car(int speed, int distance) :Speed(speed), Distance(distance)
   {

      cout << "Car Class 생성자 호출" << endl;
   }
   Car()
   {
      cout << "Car 디폴트 생성자 호출 완료" << endl;
   }

   ~Car()
   {
      cout << "Car 디폴트 소멸자 호출 완료" << endl;
   }

   void ShowState()
   {
      cout << "Car Class ShowState 호출" << endl;

   }


};


class K3 : public Car
{
public:
   string driver;

   K3(int speed , int distance ):Car(speed,distance)
   {
      Color = "빨강";
      Distance = 0;
   }

   K3()
   {
      cout << "K3 디폴트 생성자 호출 완료" << endl;
   }

  ~K3()
   {
      cout << "K3 디폴트 소멸자 호출 완료" << endl;
   }

   void test()
   {
      //Speed = 0;       Private 이어도 부모의 생성자를 통해 초기화는 가능하다.
      Distance = 0;
      Color = "빨강";
   }


};*/

//#include<iostream>
//#include<string>
//#include"Archer.h"
//using namespace std;

//int main(void)
//{
    //OilCar* myCar = new HybridCar(new string("운전자"), new string("승객"), 10, 100);

   // myCar->Go();
   // myCar->ShowState();

   // delete myCar;
    // virtual 사용후

    /*
    Car* mycar = new HybirdCar();

    mycar->Go();
    mycar->ShowState();

    mycar = new OilCar();

    mycar->Go();
    mycar->ShowState();
    */

    /* virtual 사용하기전
    HybirdCar* mycar = new HybirdCar;

    mycar->ShowState();

    mycar->OilCar::ShowState();

    mycar->Car::ShowState();
    */

    // [함수 오버라이딩]

    //First* obj = new Third;

    //obj->FirstFnc();

    //obj->SecondFnc(); /오류

    //obj->ThirdFnc();  /오류

    /*
    Third *test = new Third();

    First* test2 = new Third();

    test->FirstFnc();

    test2->FirstFnc();

    Archer* p1 = new Archer("p1", 20, 100);
    Healer* p2 = new Healer("p2", 10, 100);
    Warrior* p3 = new Warrior("p3", 30, 100);

    p3->Attack(*p1);

    cout << p1->getHP();

    p1->ShowState();

    p2->ShowState();

    p3->ShowState();

    */

    /*
   // K3* mycar = new K3(100, 100);

    K3* newcar = new K3();
    //newcar.test();
    //cout << mycar->Distance << endl;

    //cout << newcar.Color << endl;

    delete newcar;*/
}


// [접근제어 지시자의 추가기능]
// 1. 지정한 접근제어 보다 넓은 범위의 접근제어를 변경한다.


// [생성자, 소멸자의 상속]
// 1. 부모 큻래스의 생성자는 호출하지 않아도 디폴트 생성자는 실행된다.
// 2. 생성자는 부모 -> 자식 순으로 실행된다.
// 3. 자식이 소멸될때 부모의 소멸자도 자동으로 호출된다.
// 4. 소멸자는 자식 -> 부모순으로 실행된다.

// [가상함수]

// [가상함수의 특징]

// 1. 반환형 앞에 virtual 키워드를 쓴다.
// 2. 부모가 가상함수면은 자식이 오버라이딩시 키워드를 사용안해도 가상함수가 된다.
// 3. 사용시 가상함수라면 자식의 함수를 호출한다.
// 4. 자식 클래스는 키워드를 사용하지 않아도 자동으로 virtual이 되지만 그래도 명확히 써주는게 좋다.

// [순수 가상함수]

// 1. 함수 내용을 비우고 = 0; 을 작성한다.
// 2. 순수 가상함수가 있는 클래스는 객체화 될 수 없다.
// 3. 순수 가상함수를 가지는 클래스를 추상클래스 라고 부른다.
// 4. 의도치 않은 객체 생성을 막는다.
// 5. 자식클래스의 틀을 만드는 목적 이라는걸 명확히 표시 한다.

// [가상 소멸자]

// 1. 부모가 가상이면 자식도 가상소멸자가 된다.
// 2. 자식의 소멸자가 호출되면 부모의 소멸자는 자동으로 호출된다.
// 3. 자식 -> 부모 순으로 실행된다.