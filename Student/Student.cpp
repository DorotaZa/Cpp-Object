// Zad.2.3 - Student

// Zaimplementuj klasę student(Student), która pozwala na :
//• ustawienie imienia oraz nazwiska
//• przekazanie 5 ocen z przedmiotu
//• wyliczenie średniej

#include <iostream>
#include <string>

class Student {

    std::string fullName;
    double grades[5];
    //const int size = 5;
    //double grades[size];
    
public:
    
    Student(std::string name, double gradeArr[])
    {
        fullName = name;
        //grades[] = gradeArr[];
    }

    /*double sum = 0;
    double average() 
    {
        for (int i = 0; i < 5; ++i)
        {
            sum += gradeArr[i];
        }
        return sum / 5;
    }*/


};


int main()
{
    Student student;

    //std::string fullName = { "Adam Kowalski" };
    std::string fullName = {};
    //std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);
    Student student(fullName);
}
