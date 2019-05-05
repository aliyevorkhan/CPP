#include <iostream>
using namespace std;

class Alive
{
  public:
    Alive(string name = "Alive Object", string type = "Alive")
    {
        cout << "Alive constructor" << endl;
    }
    string getType() { return type; }
    string getName() { return name; }

  private:
    string name;
    string type;
};
class Animal : public Alive
{
  public:
    Animal(string name = "Animal", string type = "Animal", int birthYear = 1900) : Alive(name, type)
    {
        cout << "Animal constructor" << endl;
        this->birthYear = birthYear;
    }

  private:
    int birthYear;
};
class Human : public Animal
{
  public:
    Human(string name = "", string type = "Ä°nsan", int birthYear = 1900, string race = "TR") : Animal(name, type, birthYear)
    {
        cout << "Human constructor" << endl;
        this->race = race;
    }

  private:
    string race;
};

int main()
{
    //Human h1;
    //new Human();
    /*for(int i=0; i<10; i++){
        new Human();
    }*/

}
