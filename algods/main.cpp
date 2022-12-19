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
#include <string>

using namespace std;

/*
 * 
 */


int sum (int x ,int y) {
    
    
    cout << "Enter First Number:";
    cin >> x;
    
    cout << "Enter Second Number:";
    cin >> y;

    return (x + y);

}


int main(int argc, char** argv) {
    
    int x , y;
    
    cout << sum(x ,y) << endl;
    
            

    return 0;
}

