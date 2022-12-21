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


int main() {
    
    Car car;
    
    car.setName("Audi" ,5);
    car.setColor("Red" ,5);
    car.setMaxSpeed(280);
    car.setModel(2021);
    
    car.print();
    

    return 0;
}

