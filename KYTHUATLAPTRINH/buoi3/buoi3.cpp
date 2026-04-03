#include <iostream>
#include<string>
#include <iostream>
#include <string>
using namespace std;
struct Person {
    int id;
    string name;
    friend ostream& operator <<(ostream& os, const Person& p) {
        os << "\t+ Id:" << p.id << endl;
        os << "\t+ Name:" << p.name << endl;
        return os;
    }
    friend istream& operator >>(istream& in, Person& p) {
        cout << "Input person information:" << endl;
        cout << "\t+ Id:";
        in >> p.id;
        cout << "\t+ Name:";
        in.ignore();
        getline(in, p.name);
        return in;

    }
};
struct Node {
    Person data;
    Node* next;
    Node(Person x) : data(x), next(nullptr) {}
};
struct LinkedList {
    Node* head;
    void Show() {
        if (head == NULL) {
            cout << "Emty list" << endl;
            return;
        }
        Node* item = head;
        while (item != NULL) {
            cout << item->data;
            item = item->next;
        }
    }
    void Add(Person x) {
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
    }
    bool Remove(int x) {
        if (head == NULL) {
            return false;
        }
        Node* item = head;
        if (item->data.id == x) {
            head = item->next;
            delete item;
            return true;
        }
        while (item->next != NULL) {
            if (item->next->data.id == x) {
                Node* temp = item->next;
                item->next = temp->next;
                return true;
            }
            item = item->next;
        }
    }
};
int main()
{
    LinkedList list = { NULL };
    do {
        system("cls");
        cout << "--HUMAN RESOURCE--" << endl;
        cout << "1.View person list" << endl;
        cout << "2.Add a person" << endl;
        cout << "3. Remove a person " << endl;
        cout << "4.Find a peson by name" << endl;
        cout << "5.Export to file" << endl;
        cout << "6.Import from file" << endl;
        cout << "0.Exit" << endl;
        cout << "--------------------------" << endl;
        cout << "Your command:";
        int cmd;
        cin >> cmd;
        switch (cmd) {
        case 1: {
            list.Show();
            break;
        }
        case 2: {
            Person a;
            cin >> a;
            list.Add(a);
            cout << "Aad a person successfully" << endl;
            break;
        }
        case 3: {
            int id;
            cout << "Input ID to remove: ";
            cin >> id;
            bool res = list.Remove(id);
            break;
        }
        case 4: {
            string name;
            cout << "Import Name to find:";
            cin.ignore();
            getline(cin, name);
            bool res = false;
            if (res) {
                cout << "Found person with name" << name << endl;

            }
            else
                cout << "Person isn't existed" << endl;

            break;
        }
        case 5: {
            cout << "Export successfully" << endl;
            break;
        }
        case 6: {
            cout << "Import successfully" << endl;
            break;
        }
        case 0: {
            return 0;
        default:
            cout << "Khong co chuc nang nay!!" << endl;
        }
        }
        cout << "Go enter de tiep tuc...";
        cin.ignore();
        cin.get();
    } while (true);
    return 0;

}


