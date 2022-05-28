#include <iostream>
#include <cstring>

using namespace std;

const int CurrenProduct = 2;

struct Parameter{
    double weight;
    double height;
    double width;
};


struct Product{
    string name;
    double price;
    string type;
    Parameter info;
    void show(){
    cout << "Name";
    }
};

Product DataProduct[CurrenProduct] = {
    {
        "Table",
        320000,
        "Appliances",
        1.2,
        1.4,
        2
    },
    {
        "Chair",
        200000,
        "Appliances",
        1.3,
        1.3,
        1
    }
};


struct User{
    string nameUser;
    string password;
    string phoneNumber;
    void findProductByName(string name){
        for ( int i = 0; i < CurrenProduct; i++){
            if (DataProduct[i].name == name){
                cout << i;
            }
        }
    }
    void findProductByType(string type){
        for ( int i = 0; i < CurrenProduct; i++){
            if (DataProduct[i].type == type){
                cout << i;
            }
        }
    }
};




int main(){
    User A1 = {
        "Trung",
        "TrungDepTrai",
        "0946129294"
    };
    A1.findProductByName("Chair");
    return 0;
}

// Data 

