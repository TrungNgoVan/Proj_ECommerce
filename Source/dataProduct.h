#pragma once
#include "product.h"

int currentProductQuantity = 2;
/**
 * @brief Define data
 * ID,
 * name,
 * price,
 * type (Appliances, SchoolSupplies, Cloth, ElectronicDevice)
 * weight
 * height
 * width
 */
Product DataProduct[100] = {
    Product {
        "A1",
        "Table",
        320000,
        "Appliances",
        1.2,
        1.4,
        2
    },
    Product {
        "S1",
        "Pencil",
        12000,
        "SchoolSupplies",
        0.2,
        0.3,
        0.01
    }
};
//Define method
void showProduct();
void searchProductByName();
void checkProductByID();



void showProduct(Product product){
    cout << "ID: " << product.ID << endl;
    cout << "Name: " << product.name << endl;
    cout << "Price: " << product.price << endl;
    cout << "Weight: " << product.weight << endl;
    cout << "Height: " << product.height << endl;
    cout << "Width: " << product.width << endl << endl;
}


void searchProductByName(string name){
    for (int i = 0; i < currentProductQuantity; i++){
        if (DataProduct[i].name == name ){
            showProduct(DataProduct[i]);
        }
    }
}

void filterProductByType(string type){
    for (int i = 0; i < currentProductQuantity; i++){
        if (DataProduct[i].type == type ){
            showProduct(DataProduct[i]);
        }
    }
}


void checkProductByID(string ID){
    for (int i = 0; i < currentProductQuantity; i++){
        if (DataProduct[i].ID == ID ){
            showProduct(DataProduct[i]);
        }
    }
}
