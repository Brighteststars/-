#include "iostream"
#include "Prototype.h"

using namespace std;

int main()
{
    cout << "hello world\n" << endl;


    Resume resume("�޳�");
    resume.SetPersonalInfo("��", "19");
    resume.SetWorkExperience("2003-2009", "΢��");

    resume.Display();




    return 0;
}
