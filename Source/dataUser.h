#pragma once
#include "user.h"

using namespace std;

int currentUserQuantity = 2;
/** Define User Information
 *  User name
 *  Password
 *  Phone Number
 */
User DataUser[100] = {
    {
        "Trung",
        "TrungDepTrai",
        "0946129294",
        "Dak Lak"
    },
    {
        "Duong",
        "Duong0907",
        "0946129294",
        "Long An"
    }
};

bool loginUser(){
    string nameUser, password;
    cout << "Your user name: ";
    cin >> nameUser;
    cout << "Enter password: ";
    cin >> password;
    for (int i = 0; i < currentUserQuantity; i++){
        if (DataUser[i].nameUser == nameUser && DataUser[i].password == password){
            return true;
        }
    }
    return false;
}

void registerAccount(){
    string nameUser, password, numberPhone, address;
    cout << "Enter your user name: ";
    cin >> nameUser;
    cout << "Enter your password: ";
    cin >> password;
    cout << "Enter your number phone: ";
    cin >> numberPhone;
    cout << "Enter your address: ";
    cin >> address;
    User newUser = {
        nameUser,
        password,
        numberPhone,
        address
    };
    currentUserQuantity++;
    DataUser[currentUserQuantity - 1] = newUser;
}