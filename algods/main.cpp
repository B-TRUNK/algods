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
 Copy Constructor 
 */

class Copy {

    
    int a1 ,a2 ,a3 ,a4 ,a5 ,a6 ,a7 ,a8 ,a9;
    
public:
    
    //Empty Constructor
    Copy () {}
    
    //Parameterized Constructor
    Copy (int aa1 ,int aa2 ,int aa3 ,int aa4 ,int aa5 ,int aa6 ,int aa7 ,int aa8 ,int aa9) {
    
        a1 = aa1;
        a2 = aa2;
        a3 = aa3;
        a4 = aa4;
        a5 = aa5;
        a6 = aa6;
        a7 = aa7;
        a8 = aa8;
        a9 = aa9;
        
    }
    
    //Copy Constructor
    Copy (const Copy&obj) {
    
        a1 = obj.a1;
        a2 = obj.a2;
        a3 = obj.a3;
        a4 = obj.a4;
        a5 = obj.a5;
        a6 = obj.a6;
        a7 = obj.a7;
        a8 = obj.a8;
        a9 = obj.a9;
    
    }
    
    void print () {
        
        cout << a1 << " " << a2 << " " << a3 << " " << a4 << " "
                << a5 << " "
                << a6 << " "
                << a7 << " "
                << a8 << " "
                << a9 << " "<< endl;
        
    }
    

};
int main() {
    
    Copy ob(1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9);
    
    ob.print();
    
    Copy h(ob);
    h.print();
    
    return 0;

}

