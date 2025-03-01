#ifndef AUTOTECH_H
#define AUTOTECH_H
#include<iostream>
using namespace std;

class Car{
private:   
     string brand;
     string model;
     int year;
     static int carCount ;
public:     
     //Default Constructor
     Car(): brand(""), model(""), year(0){
      carCount ++;
     }
     //Parameterized Constructors
     Car(string b, string m, int y): brand(b), model(m), year(y){
      carCount++;
     }

    Car(const Car& car){
      this->brand = car.brand;
      this->model = car.model;
      this->year =car.year;
       carCount++;
    }

    // Inline Member function for the car class
    bool isClassicCar(){
         if((2024 - year ) > 25){
               return true;
      }else 
            return false;
    }
    
    void setBrand(string b){
      this->brand = b;
    }

    string getBrand(){
          return brand;
    }
    
    void setModel(string m){
      this->model = m;
    }

    string getModel(){
         return model;
    }

    void setYear(int y){
         this->year = y;
    }

    int getYear(){
        return year;
    }

    static int getCarCount() {
       return carCount; 
    }

  ~Car(){
    cout<<"Car obj is destroyed! "<<endl;
    carCount--;
  }
  
  static Car cloneCar(const Car & original){
    return Car(original);
  }
  
  static Car CompareCars(Car & car1, Car & car2){
    if(car1.year < car2.year )
         return car1;
    else 
         return car2;
  }

};


class Laptop{
private:   
  string brand;
  string processor;
  int ram;
   static int laptopCount;
public:
  // Default Constructor
  Laptop():brand(""), processor(""), ram(0){
    laptopCount++;
  }
  //Parameterized Constructor
  Laptop(string br, string p, int r){
         this->brand = br;
         this->processor = p;
         this-> ram = r;
        laptopCount++;
  }

  // Copy Constructor 
  Laptop(const Laptop & laptop){
         this->brand = laptop.brand;
         this->processor = laptop.processor;
         this->ram = laptop.ram;
         laptopCount++;
  }
  
  //Inline Member Function to check if the laptop has higher Performance
  bool isHighPerformance(){
    if(ram >= 16){
      return true;
    }else 
         return false;
  }

  //Getter and setter functions for laptop
  void setBrand(string b){
       this->brand = b;
  }
  
  string getBrand(){
    return brand;
  }
  
  void setProcessor(string p){
    this->processor = p;
  }
  string getProcessor(){
    return processor;
  }

  void setRam(int r){
    this->ram = r;
  }

  int getRam(){
    return ram;
  }

   static int getLaptopCount(){
    return laptopCount;
   }
  
  static Laptop cloneLaptop(const Laptop& original ){
       return Laptop(original);
  }

  static Laptop compareLaptops(Laptop & lapt1, Laptop & lapt2){
    if(lapt1.ram > lapt2.ram)
       return lapt1;
    else 
        return lapt2;
  }

  ~Laptop(){
      cout<<"Laptop obj is destroyed! "<<endl;
       laptopCount--;
  }

};



#endif //AUTOTECH_H