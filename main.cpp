#include<iostream>
#include"AutoTech.h"
using namespace std;

int main(){

    //cout<<"Hi, I'm a programmer"<<endl;
    Car car1("BMW","Corrola", 1995 );
    Car car2("honda", "Farari", 2017);

    cout<<"Car count"<<Car::getCarCount()<<endl;
    cout<<"Is: "<<car1.getBrand()<< "Classic ? "<< (car1.isClassicCar() ? "yes" : "No")<<endl;

    Car older = Car::CompareCars(car1, car2);
    cout << "Older Car: " << older.getBrand() << " " << older.getModel() << endl;
    
    Laptop laptop1("Lenevo", "i7", 16);
    Laptop laptop2("HP", "Ryzen 5", 8);

    cout << "Laptop Count: " << Laptop::getLaptopCount() << endl;
    cout << "Is " << laptop1.getBrand() << " high-performance? " << (laptop1.isHighPerformance() ? "Yes" : "No") << endl;

    Laptop betterLaptop = Laptop::compareLaptops(laptop1, laptop2);
    cout << "Laptop with more RAM: " << betterLaptop.getBrand() << " " << betterLaptop.getProcessor() << endl;


   return 0;
}