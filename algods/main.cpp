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
int main() {
    
    //array search
    int input = 0;
    int index = NULL;
    int inc = 0;
    char arr[] = {22 ,30 ,7 ,-3 ,97 ,101 ,0};
    
    cout << "Enter a number to Search :" << endl;
    cin >> input;
    
    for ( inc = 0 ;inc < 7 ;inc++ ) {
    
        if (arr[inc] == input) {
            index = inc;
            break;
        } 
    }
    
    
    if (index != NULL) {
        cout << "Number Exists at Index : " << inc << endl;
    } else {
        cout << "Number Doesn't Exist" << endl;
    }
    //end of array search
    
    return 0;
    
}

