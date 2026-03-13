#include < iostream>
#include< vector>
#include < fstream>
#include < string>
using namespace std;
struct connguoi {
	int maso;
	string hoten;
	int tuoi;
	string diachi;

};
void addperson(vector < connguoi > P) {
	if (P.size() == 0)
		cout << " An empty list " << endl;
	else {
		cout << " person" << (i+ 1) << endl;
		cout << " \ t +Id :" << P [i].maso << endl;
		cout << " \ t + Hoten " << P[i].hoten << endl;
		cout << " \ t + Tuoi " << P[i].tuoi << endl;
		cout << " \ t + diachi" << P[i].diachia << endl;


	}
}
void Addperson(vector < connguoi >& p, int id) {
	for ( auto i = p )
}
int main() {
	vector <  connguoi > list;
	do {
		system(" cls");
		cout << " --HUMAN RESOURCE--" << endl;
		cout << " 1. view person " << endl;
		cout << " 2 . add a person " << endl;
		cout << " 3 . remove a person " << endl;
		cout << " 4. Find a peson by name  " << endl;
		cout << " 5 . Export to file " << endl;
		cout << " 6 . Import  form file " << endl;
		cout << " 0 . Exit " << endl;
		cout << " Your command";
		int cmd;
		cin >> cmd;
		cin >> cmd;
		switch (cmd) {
		case 1: {
			break;
		}
		case 2: {
			break;
		}
		case 3: {
			break;

		}
		case 4: {

			break;

		}
		case 5: {
			break;

		}
		case 6: {
			break;
		}
		case 0: {
			return 0;
		default:
			cout << " khong co chuc nang nay dau" << endl;

		}
		}
		cout << " Go enter de tiep tuc ";
		cin.ignore();
		cin.get();
	} while (true);
		return 0 ;
	}  