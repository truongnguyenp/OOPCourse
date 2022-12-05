#include "LinkedList.h"
#include "CongTrinhKhoaHoc.h"
#include "ListCTKH.h"
#include <iostream>
using namespace std;

void showMenu() {
    cout << "SCIENTIFIC RESEARCH MANAGEMENT" << endl;
    cout << "1. Add scientific research" << endl;
    cout << "2. Remove scientific research at last" << endl;
    cout << "3. Remove scientific research by Year" << endl;
    cout << "4. Search scientific research by Year" << endl;
    cout << "5. Sort scientific research list by Year ascending" << endl;
    cout << "6. Sort scientific research list by Year descending" << endl;
    cout << "7. Display scientific research list" << endl;
    cout << "8. Clear all scientific research list" << endl;
    cout << "Other. Exit \n\n";
    
}
int main()
{
    ListCTKH<string> list;
    showMenu();
    int choice;
    while (true) {
        try {
            cout << "Input choice: ";
            
            if (cin >> choice) {

                switch (choice) {
                case 1: {
                    list.addCTKH();
                    break;
                }
                case 2: {
                    if(list.getQuantity() >= 1)
                    list.removeCTKH();
                    cout << "Removed succefully\n";
                    break;
                }
                case 3: {
                    cout << "Input year to remove: ";
                    int year;
                    cin >> year;
                    try {
                        if(list.findCTKH(year).getAoB())
                        list.removeCTKH(year);

                    }
                    catch (...) {
                        cout << "Invalid remove";
                    }
                    break;
                }
                case 4: {
                    cout << "Input year to find: ";
                    int year;
                    cin >> year;
                    try {
                        if (list.findCTKH(year).getYoB() == year)
                            list.findCTKH(year).output();
                        else cout << "Scientific research in year " << year << " does not exist\n";
                    }
                    catch (...) {
                        cout << "Invalid remove";
                    }
                    break;
                }
                case 5: {
                    list.sortCTKH(1);
                    break;
                }
                case 6: {
                    list.sortCTKH(-1);
                    break;
                }
                case 7: {
                    list.displayCTKH();
                    if (list.getQuantity() >= 1) list.displayCTKH();
                    else cout << "list is empty\n";
                    break;
                }
                case 8: {
                    list.clearCTKH();
                    cout << "CLear all succefully\n";
                }
                default: {
                    break;
                }
                }
            }
            else throw("error input");
        }
        catch (...)
        {
            cout << "invalid choice" << endl;
            break;
        }
    }
	list.displayCTKH();
	return 0;
}