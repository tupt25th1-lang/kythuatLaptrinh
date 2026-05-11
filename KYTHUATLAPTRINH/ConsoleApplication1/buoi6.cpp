#include <iostream>
using namespace std;
#define MAX 100 ;
struct Bokk {
    int id;
    char name{ 50 };
    double price;
};
int main() {
    int nBokks = 0;
    Bokk BOOksMAX;
    do {
        system(" cls");
        cout << " ------------- Book MANAGEMENT-----------" << endl;
        cout << " 1. Add a book" << endl;
        cout << " 2. Show bokks" << endl;
        cout << " 3. sort bokks" << endl;
        cout << " 4. Find a bokks" << endl;
        cout << " 0 . Exit " << endl;
        cout << " --------------------------------------- " << endl;
        cout << " Chosse";
        int choose;
        cin >> choose;
        switch (choose) {
        case 1: {
            break;
        }
        case 2: {
            break;
        }
        case 3 : {
                  break;
        }

        case 4: {
            break;
        }
              case 0;
                  return
              default: {
                      cout << " Invalid command" << endl;
                      break;
                  }
        }
        system(" pause");
        cout << " press enter to contiune...  " << endl;
       

    } while (true);
}                   