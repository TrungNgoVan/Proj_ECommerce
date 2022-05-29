#pragma once 
struct Admin{
    string nameAdmin;
    string password;
};

Admin admin = {
    "CuongDola123",
    "NhaSieuGiau"
};

bool loginAdmin(){
    string nameAdmin, password;
    cout << "Your Admin name: "; 
    cin >> nameAdmin;
    cout << "Enter password: ";
    cin >> password;
    if (nameAdmin == admin.nameAdmin && password==admin.nameAdmin){
        return true;
    }
    return false;
}


void addProduct(Product newProduct)
{
    currentProductQuantity++;
    DataProduct[currentProductQuantity - 1] = newProduct;
}

void checkProduct(Product product)
{
    cout << "Name: " << product.name << endl;
    cout << "Price: " << product.price << endl;
    cout << "Width: " << product.width << endl;
    cout << "Weight: " << product.weight << endl;
    cout << "Height: " << product.height << endl;
}

void editProduct(Product product);

void deleteProduct(Product product);

void addUser(User newUser);