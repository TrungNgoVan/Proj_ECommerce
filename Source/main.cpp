#include "header.h"
#include "dataProduct.h"
#include "dataUser.h"

using namespace std;


int main(){
    int option;
	do {
		cout << "------------------------------MENU----------------------------------\n";
		cout << "| 1. Login as user                                                 |\n";
		cout << "| 2. Login as admin                                                |\n";
		cout << "| 3. Register new account                                          |\n";
		cout << "| 4. Quit.                                                         |\n";
		cout << "--------------------------------------------------------------------\n";
		cout << "Your choice is: ";
		cin >> option;
		cout << "--------------------------------------------------------------------\n";
		switch (option) {
			case 1:{
                bool check = loginUser();
                check ? (cout << "Oke" << endl) : (cout << "No" << endl); 
				break;
			}
			case 2: {
                bool check = loginAdmin();
                check ? (cout << "Oke" << endl) : (cout << "No" << endl); 
				break;
			}
			case 3: {
				registerAccount();
				break;
			}
		}
	} while (option != 4);
    return 0;


}

// Data 

