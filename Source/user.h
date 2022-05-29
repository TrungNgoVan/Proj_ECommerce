#pragma once
#include "header.h"
using namespace std;

struct User{
    string nameUser;
    string password;
    string phoneNumber;
    void findProductByName(string name){
        for ( int i = 0; i < currentProductQuantity; i++){
            if (DataProduct[i].name == name){
                cout << i;
            }
        }
    }
    void findProductByType(string type){
        for ( int i = 0; i < currentProductQuantity; i++){
            if (DataProduct[i].type == type){
                cout << i;
            }
        }
    }
};