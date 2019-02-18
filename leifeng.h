#ifndef LEIFENG_H
#define LEIFENG_H

#include "iostream"
using namespace std;

//�����Ʒ��
class LeiFeng
{
public:
    virtual void Sweep()
    {
        cout << "ɨ��" << endl;
    }

    virtual void Wash()
    {
        cout << "ϴ��" << endl;
    }

    virtual void BuyRice()
    {
        cout << "����" << endl;
    }
};


//�����Ʒ��
class Undergraduate:public LeiFeng
{
public:
    void Sweep()
    {
        cout << "ѧ��-ɨ��" << endl;
    }

    void Wash()
    {
        cout << "ѧ��-ϴ��" << endl;
    }

    void BuyRice()
    {
        cout << "ѧ��-����" << endl;
    }
};


class Volunteer:public LeiFeng
{
public:
    void Sweep()
    {
        cout << "־Ը��-ɨ��" << endl;
    }

    void Wash()
    {
        cout << "־Ը��-ϴ��" << endl;
    }

    void BuyRice()
    {
        cout << "־Ը��-����" << endl;
    }
};

//���󹤳���
class AbstractFactory
{
public:
    virtual LeiFeng* createLeiFeng()
    {
        return new LeiFeng;
    }
};

class UndergraduateFactory:public AbstractFactory
{
public:
    Undergraduate* createLeiFeng()
    {
        return new Undergraduate;
    }
};

class VolunteerFactory:public AbstractFactory
{
public:
    Volunteer* createLeiFeng()
    {
        return new Volunteer;
    }

};

#endif // LEIFENG_H
