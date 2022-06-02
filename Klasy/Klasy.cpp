#include <iostream>
// dla celów ćwiczeniowyych, żeby wszystko było w jednym miejscu i żeby wszystko ogarnąć:
// 1. klasę można zdefiniować w tym samym pliku, w którym jest funkcja main
// 2. również metody można zdefiniować bezpośrednio w klasie
// poniższa definicja klasy 'Person', jest tylko instrukcją jak tworzyć osoby
// w tym wypadku, każda osoba ma mieć imię i wiek
// by konkretna osoba "powstała" w programie według naszej instrukcji należy ją skonstruować w funkcji main()
// w tym celu wykorzystywana jest specjalna funkcja zdefiniowana w klasie, która nazywa się 'konstruktor' i służy do tworzenia obiektów w funkcji main()
// by wyświetlić dane przechowywane w konkretnym, już skonstruowanym obiekcie, potrzebna jest metoda zdefiniowana w klasie, która wyświetli te dane#


class Person
{
private:
    std::string name;
    int age;
public:
    // konstruktor klasy tj. konstruktor osoby
    Person(std::string p_name, int p_age)
    {
        name = p_name;
        age = p_age;
    }
    void displayPerson()
    {
        std::cout << "Imię: " << name << std::endl;
        std::cout << "Wiek: " << age << std::endl;
    }
};
int main()
{
    Person osoba1 = Person("Lidka", 4);
    Person osoba2("Irenka", 8);
    osoba1.displayPerson();
    osoba2.displayPerson();
}