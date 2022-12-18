/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: mac
 *
 * Created on December 18, 2022, 10:14 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

struct Car {

    string name;
    string color;
    int maxSpeed;
    int model;
    
};


//passing struct to a function
void fun (Car car) {

    cout << car.name << endl;
    cout << car.color << endl;
    

}

//return a struct type as a function

Car s_fun (Car &s) {

    cout << "Enter Car Name:\n" ; 
    cin >> s.name;
    
    cout << "Enter Car Color:\n" ; 
    cin >> s.color;
    
    cout << "Enter Car Max Speed:\n" ; 
    cin >> s.maxSpeed;
    
    cout << "Enter Car Model:\n" ; 
    cin >> s.model;
    
    return s;
    
}



int main(int argc, char** argv) {
    
    Car racingCar;
    
    
    ////initializing Struct values
    racingCar.name = "Ferrari";
    racingCar.color = "Red";
    racingCar.maxSpeed = 200;
    racingCar.model = 2022;
    
    //another way of initializing Struct values
    Car vanCar  = {"Toyota" ,"Gray" ,80 ,2010};
    
//    cout << racingCar.name << endl;
//    cout << vanCar.name << endl;
    
    
    //passing struct to a function
    Car someCar = {"Mercedes" ,"Yellow" ,210 ,2021};
    //fun(someCar);
    
    //return struct type
    Car a;
    s_fun (a);
    Car b;
    b = a;
    
    cout << "================ \n" << b.color << endl;
    

    return 0;
}

