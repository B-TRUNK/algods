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
class Car {

private:
    
    char name[15];
    char color[10];
    int  maxSpeed;
    int  model;
 
public:
    
    //setters
    void setName(char arr[],int s) {
    
        strcpy(name  ,arr);
    
    }
    
    void setColor(char arr[],int s) {
    
        strcpy(color ,arr);
    
    }
    
    void setMaxSpeed(int s) {
    
        maxSpeed = s;
    
    }
    
    void setModel(int s) {
    
        model = s;
    
    }
    
    //getters
    
    char* getName() {
        
        return name;
        
    }
    
    char* getColor() {
        
        return color;
        
    }
    
    int getMaxSpeed() {
        
        return maxSpeed;
        
    }
    
    int getModel() {
        
        return model;
        
    }
    
    void print () {
    
        cout << "Car Name: " << name << "\n" 
              << "Color: " << color << "\n"
                << "Max Speed: " << maxSpeed << "\n"
                << "Model: " << model << "\n"     
        ;
    
    }
    
    
    
    
};
*/

class Triangle {

private:
    
    int base;
    int height;
    
public:
    
    //Empty Constructor
    Triangle () {
        cout << "Print from Empty Constructor!" << endl;
        base = 0;
        height = 0;
    }
    
    //Parameterized Constructor
    Triangle (int a ,int b) {
        base = a;
        height = b;
        cout << "This result is from the P Constructor! = " << endl;
    }
    
    
    void setBase_Height (int a, int b) {
        base = a;
        height = b;
    }
    
    int getTriangleArea() {
    
        return 0.5 * base * height;
    
    }
    
};

int main() {
    
    /*
    Car car;
    
    car.setName("Audi" ,5);
    car.setColor("Red" ,5);
    car.setMaxSpeed(280);
    car.setModel(2021);
    
    car.print();
    */     
    //int a = 5 ; int b = 10;
    Triangle t(5 ,9);
    //t.setBase_Height(a ,b);
    cout << "Triangle Area = " << t.getTriangleArea() << " cm^2" << endl ;

    return 0;
}

