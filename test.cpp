#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "AutoTech.h"

TEST_CASE("Car Default Constructor") {
    Car car;
    REQUIRE(car.getBrand() == "");
    REQUIRE(car.getModel() == "");
    REQUIRE(car.getYear() == 0);
}

TEST_CASE("Car Parameterized Constructor and Getters") {
    Car car("Toyota", "Corolla", 2000);
    REQUIRE(car.getBrand() == "Toyota");
    REQUIRE(car.getModel() == "Corolla");
    REQUIRE(car.getYear() == 2000);
}

TEST_CASE("Car Setter Functions") {
    Car car;
    car.setBrand("Honda");
    car.setModel("Civic");
    car.setYear(2010);
    REQUIRE(car.getBrand() == "Honda");
    REQUIRE(car.getModel() == "Civic");
    REQUIRE(car.getYear() == 2010);
}

TEST_CASE("Car isClassicCar Function") {
    Car classicCar("Ford", "Mustang", 1980);
    Car modernCar("Tesla", "Model S", 2020);
    REQUIRE(classicCar.isClassicCar() == true);
    REQUIRE(modernCar.isClassicCar() == false);
}

TEST_CASE("Laptop Default Constructor") {
    Laptop laptop;
    REQUIRE(laptop.getBrand() == "");
    REQUIRE(laptop.getProcessor() == "");
    REQUIRE(laptop.getRam() == 0);
}

TEST_CASE("Laptop Parameterized Constructor and Getters") {
    Laptop laptop("Dell", "Intel i7", 16);
    REQUIRE(laptop.getBrand() == "Dell");
    REQUIRE(laptop.getProcessor() == "Intel i7");
    REQUIRE(laptop.getRam() == 16);
}

TEST_CASE("Laptop Setter Functions") {
    Laptop laptop;
    laptop.setBrand("Apple");
    laptop.setProcessor("M2");
    laptop.setRam(32);
    REQUIRE(laptop.getBrand() == "Apple");
    REQUIRE(laptop.getProcessor() == "M2");
    REQUIRE(laptop.getRam() == 32);
}

TEST_CASE("Laptop isHighPerformance Function") {
    Laptop highPerfLaptop("Asus", "AMD Ryzen 9", 32);
    Laptop lowPerfLaptop("HP", "Intel i5", 8);
    REQUIRE(highPerfLaptop.isHighPerformance() == true);
    REQUIRE(lowPerfLaptop.isHighPerformance() == false);
}
