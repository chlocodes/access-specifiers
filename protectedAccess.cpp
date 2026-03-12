#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string engineNumber;
};

class Car:public Vehicle //syntax for accessing parent class from child class when using [protected] class
{
public:
    void setEngine(string eng)
    {
        engineNumber =eng;
    }
    void display()
    {
        cout<<engineNumber;
    }
}; //end of the child class
int main()
{
    Car car;
    car.setEngine("jfjd7878");
    car.display();
    //car.engineNumber ="gdshg7878"; //cannot use because it is protected
}
