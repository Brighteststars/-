#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <string>
#include "iostream"
using std::cout;
using std::endl;
using std::string;


//����������
class WorkExperience
{
private:
    string company;
    string workDate;

public:
    WorkExperience(){}
    ~WorkExperience(){}



    //��¡���ù��캯��
    WorkExperience(WorkExperience* work)
    {
        this->company = work->getCompony();
        this->workDate = work->getWorkDate();
    }


    string getCompony() { return company; }

    string getWorkDate() { return workDate; }

    void setCompany(string company)
    {
        this->company = company;

    }

    void setWorkDate(string workdate)
    {
        this->workDate = workdate;
    }

    //��¡
    WorkExperience* Clone()
    {
        return new WorkExperience(this);
    }

};


//ԭ����,������¡����Ľӿ�
class Prototype
{
protected:
    string name;
    string sex;
    string age;


public:

    virtual void SetPersonalInfo(string sex, string age) = 0;
    virtual void Display() = 0;
    virtual Prototype* Clone() = 0;

};

class Resume :public Prototype
{
private:
    WorkExperience* work;

public:

    Resume(string name)
    {
        this->name = name;
        work = new WorkExperience;
    }



    ~Resume()
    {
        if (work)
        {
            delete work;
        }
    }

    Resume(WorkExperience* work)
    {
        this->work = work->Clone();
    }

    void SetPersonalInfo(string sex, string age)
    {
        this->sex = sex;
        this->age = age;
    }

    void SetWorkExperience(string workDate, string company)
    {
        work->setWorkDate(workDate);
        work->setCompany(company);
    }

    void Display()
    {
        cout << name << " " << sex << " " << age << endl;
        cout << "��������: " << work->getWorkDate() << " " << work->getCompony() << endl;

    }

    Resume* Clone()
    {
        Resume* cloneResume = new Resume(work);
        cloneResume->name = this->name;
        cloneResume->age = this->age;
        cloneResume->sex = this->sex;

        return cloneResume;
    }
};

#endif // PROTOTYPE_H
