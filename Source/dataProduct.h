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

void searchProduct(string ID);
