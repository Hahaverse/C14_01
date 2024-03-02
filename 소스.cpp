#include <iostream>
#define NumChar 3
using namespace std;

class GameCharacter {
    // 여기에 생성자와 멤버함수 정의
protected:
    string GameChr;
public:
    GameCharacter() { GameChr = ""; }
    GameCharacter(string GameChr) { this->GameChr = GameChr; }
    virtual void draw() { cout << GameChr << "을 그립니다.\n"; }
};

class Hobbit : public GameCharacter {
public:
    Hobbit() :GameCharacter() {}
    Hobbit(string cname) :GameCharacter(cname) {}
    void draw() { cout << "호빗을 그립니다.\n"; }
};

class Titan : public GameCharacter {
public:
    Titan() :GameCharacter() {}
    Titan(string cname) :GameCharacter(cname) {}
    void draw() { cout << "타이탄을 그립니다.\n"; }
};

class Magician : public GameCharacter {
public:
    Magician() :GameCharacter() {}
    Magician(string cname):GameCharacter(cname){}
    void draw() { cout << "주술사를 그립니다.\n"; }
};

int main() {
    GameCharacter* arrayOfGameChr[3];
    arrayOfGameChr[0] = new Hobbit();
    arrayOfGameChr[1] = new Titan();
    arrayOfGameChr[2] = new Magician();

    for (int i = 0; i < NumChar; i++) {
        cout << "======================" << endl;
        arrayOfGameChr[i]->draw();  //포인터 배열을 이용한 호출
        cout << "======================" << endl;
    }

    return 0;
}