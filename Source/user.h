#pragma once
#include "header.h"
#include "dataProduct.h"
using namespace std;

struct User{
    string nameUser;
    string password;
    string phoneNumber;
    string address;
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

void showMenu(){
    int option;
	do {
		cout << "------------------------------MENU----------------------------------\n";
		cout << "| 1. Search product                                                |\n";
		cout << "| 2. Filter product                                                |\n";
		cout << "| 3. Show product detail                                           |\n";
		cout << "| 4. Quit                                                          |\n";
		cout << "--------------------------------------------------------------------\n";
		cout << "Your choice is: ";
		cin >> option;
		cout << "--------------------------------------------------------------------\n";
		switch (option) {
			case 1:{
                string name;
                cout << "Enter the product name you want to search: ";
                cin >> name;
                searchProductByName(name);
				break;
			}
			case 2: {
                string type;
                cout << "Enter the product type you want to filter: ";
                cin >> type;
                filterProductByType(type);
				break;
			}
			case 3: {
				string ID;
                cout << "Enter the product ID you want to see: ";
                cin >> ID;
                checkProductByID(ID);
				break;
			}
		}
	} while (option != 4);
}