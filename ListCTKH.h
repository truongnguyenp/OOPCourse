
#ifndef _ListCTKH_H
#define _ListCTKH_H
#include "LinkedList.h"
#include "CongTrinhKhoaHoc.h"
#include "BaiBao.h"
#include "Sach.h"
#include <iostream>

using namespace std;
template <typename T>
int cmp(T& a, T& b) {
    if (a.getYoB() > b.getYoB()) return -1;
    return 1;
}
template <typename T>
int cmpR(T& a, T& b) {
    if (a.getYoB() < b.getYoB()) return -1;
    return 1;
}
template <typename T>
class ListCTKH
{
    T personalName;

    int quantity;
protected :
    LinkedList<CongTrinhKhoaHoc<T>> CTKHs;

public:
    ListCTKH();
    ~ListCTKH();
    void addCTKH();
    void addCTKH(int, CongTrinhKhoaHoc<T>);
    void removeCTKH(int);
    void removeCTKH();
    CongTrinhKhoaHoc<T> findCTKH(int);
    void displayCTKH();
    void sortCTKH(int );
    void clearCTKH();
    int getQuantity();
};
template <typename T>
ListCTKH<T>::ListCTKH()
{
}
template <typename T>
ListCTKH<T>::~ListCTKH()
{
    (this->CTKHs).clear();
}
template <typename T>
void ListCTKH<T>::addCTKH()
{

    int type;
    CongTrinhKhoaHoc<T>* CTKH;
    cout << "Type of scientific research:\n 1.Book \n 2.Paper";
    try {
        cin >> type;
        switch (type)
        {
        case 1:
        {
            CTKH = new Sach<T>;
            (*CTKH).input();
            (this->CTKHs).add(*CTKH);
            break;
        }
        case 2:
        {
            CTKH = new BaiBao<T>;
            (*CTKH).input();
            (this->CTKHs).add(*CTKH);
            break;
        }
        default:
            cout << "choice does not exist";
            break;
        }
        
    }
    catch (...) {
        cout << "Invalid choice\n";
        this->addCTKH();
        
    }
}
template <typename T>
void ListCTKH<T>::addCTKH(int k, CongTrinhKhoaHoc<T>)
{
    CongTrinhKhoaHoc<T> CTKH;
    int type;
    cout << "Type of scientific research:\n 1.Book \n2.Paper\n";
    try {
        cin >> type;
        switch (type)
        {
        case 1:
        {
            CTKH = new Sach<T>;
            break;
        }
        case 2:
        {
            CTKH = new BaiBao<T>;
            break;
        }
        default:
            cout << "choice does not exist";
            break;
        }
        CTKH.input();
        this->add(CTKH);
    }
    catch (...) {
        cout<<"Invalid choice\n";
    }
}
template <typename T>
void ListCTKH<T>::removeCTKH()
{
    (this->CTKHs).pop();
    this->quantity = (this->CTKHs).size();

}
template <typename T>
void ListCTKH<T>::removeCTKH(int year)
{
    for (int i = 0; i < ((this->CTKHs).size());i++) {
        CongTrinhKhoaHoc<T> current = ((this->CTKHs)).get(i);
        if (current.getYoB() == year)  ((this->CTKHs)).remove(i);
    }
    this->quantity = (this->CTKHs).size();

}
template <typename T>
CongTrinhKhoaHoc<T> ListCTKH<T>::findCTKH(int year)
{
    CongTrinhKhoaHoc<T> target;
    for (int i = 0; i < ((this->CTKHs).size());i++) {
        CongTrinhKhoaHoc<T> current = ((this->CTKHs)).get(i);
        if (current.getYoB() == year) {
            target= current;
            target.output();
            break;
        }
    }
    return target;
}
template <typename T>
void ListCTKH<T>::displayCTKH()
{
    for (int i = 0; i < ((this->CTKHs).size());i++) {
        ((this->CTKHs).get(i)).output();
    }
}
template <typename T>
void ListCTKH<T>::sortCTKH(int order)
{
    if (order == 1) (this->CTKHs).sort(cmp);
    else (this->CTKHs).sort(cmpR);
}
template <typename T>
void ListCTKH<T>::clearCTKH()
{
    (this->CTKHs).clear();
}
template <typename T>

int ListCTKH<T>::getQuantity() {
    return this->quantity;
}

#endif