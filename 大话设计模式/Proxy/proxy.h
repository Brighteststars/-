#ifndef PROXY_H
#define PROXY_H
#include "string"
#include "iostream"
using namespace std;


class SchoolGirl
{
private:
    string name;

public:
    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }


};

//������Subject
class IGiveGift
{
public:
    virtual void giveDolls() = 0;
    virtual void giveFlowers() = 0;
    virtual void giveCholocate() = 0;
};


//׷������concreteSubject
class Pursuit: IGiveGift
{
private:
    SchoolGirl* mm;

public:
    Pursuit(SchoolGirl* mm):mm(mm){}

    void giveDolls()
    {
        cout << mm->getName() << " ����������" << endl;
    }

    void giveFlowers()
    {
        cout << mm->getName() << " �����ʻ�" << endl;
    }

    void giveCholocate()
    {
        cout << mm->getName() << " �����ɿ���" << endl;
    }

};

//������
class Proxy: IGiveGift
{
private:
    Pursuit* gg;

public:


    Proxy(SchoolGirl* mm)
    {
        gg = new Pursuit(mm);
    }

    void giveDolls()
    {
        gg->giveDolls();
    }

    void giveFlowers()
    {
        gg->giveFlowers();
    }

    void giveCholocate()
    {
        gg->giveCholocate();
    }


};

#endif // PROXY_H
