#include <iostream>
#define NumChar 3
using namespace std;

class GameCharacter {
    // ���⿡ �����ڿ� ����Լ� ����
protected:
    string GameChr;
public:
    GameCharacter() { GameChr = ""; }
    GameCharacter(string GameChr) { this->GameChr = GameChr; }
    virtual void draw() { cout << GameChr << "�� �׸��ϴ�.\n"; }
};

class Hobbit : public GameCharacter {
public:
    Hobbit() :GameCharacter() {}
    Hobbit(string cname) :GameCharacter(cname) {}
    void draw() { cout << "ȣ���� �׸��ϴ�.\n"; }
};

class Titan : public GameCharacter {
public:
    Titan() :GameCharacter() {}
    Titan(string cname) :GameCharacter(cname) {}
    void draw() { cout << "Ÿ��ź�� �׸��ϴ�.\n"; }
};

class Magician : public GameCharacter {
public:
    Magician() :GameCharacter() {}
    Magician(string cname):GameCharacter(cname){}
    void draw() { cout << "�ּ��縦 �׸��ϴ�.\n"; }
};

int main() {
    GameCharacter* arrayOfGameChr[3];
    arrayOfGameChr[0] = new Hobbit();
    arrayOfGameChr[1] = new Titan();
    arrayOfGameChr[2] = new Magician();

    for (int i = 0; i < NumChar; i++) {
        cout << "======================" << endl;
        arrayOfGameChr[i]->draw();  //������ �迭�� �̿��� ȣ��
        cout << "======================" << endl;
    }

    return 0;
}