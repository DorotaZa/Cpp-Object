// Student - proba na n wartosci przez k.kopiujacy
//niestety wystwietla te same bledy w kompilacji na samym poczatku co wczensiej 

#include <iostream>
#include<string>

class Student 
{
    std::string fullName;
    //double grade[n];

public:
    Student()//konstruktor domyslny; potrzebny do pobrania danych od uzytownika
    {

    }

    Student(std::string fullName/*, double grade[]*/) //konstruktor parametrowy
        
    {
        this->fullName = fullName;
        //this->grade[] = grade[];

    }

    Student(const Student& str) //konstruktor kopiujacy
    {
        this->fullName = str.fullName;
    }

    ~Student()
    {

    }

    void display()
    {
        std::cout << "Full name: " << fullName << std::endl;
    }
};

int main()
{
    std::string name;
    std::cout << "Enter your fullname: " << std::endl;
    std::getline(std::cin, name);
    Student student(name);
    Student student1("Marek Markowski");
    Student student3(student1);

    //std::cout << student1.display << ", " << student2.display <<std::endl;  co tutj sie wydarzylo??
    std::cout << student(name) << std::endl; /////wooooow nic nie dziala...
}

