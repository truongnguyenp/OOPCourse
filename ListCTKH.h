
#ifndef _ListCTKH_H
#define _ListCTKH_H
#include "LinkedList.h"
#include "CongTrinhKhoaHoc.h"
#include "BaiBao.h"
#include "Sach.h"
#include <iostream>

using namespace std;
template <typename T>
class ListCTKH
{
    T personalName;
    LinkedList<CongTrinhKhoaHoc<T>> CTKHs;
    int quantity;

public:
    ListCTKH();
    ~ListCTKH();
    void addCTKH();
    void addCTKH(int, CongTrinhKhoaHoc<T>);
    void removeCTKH(int);
    void findCTKH(int);
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
    cout << "Type of scientific research:\n 1.Book \2.Paper";
    cin >> type;
    switch (type)
    {
    case 1:
    {
        CongTrinhKhoaHoc<T> *CTKH = new Sach<T>;
        (*CTKH).input();
        (this->CTKHs).add(*CTKH);
        break;
    }
    case 2:
    {
        CongTrinhKhoaHoc<T> *CTKH = new BaiBao<T>;
        (*CTKH).input();
        (this->CTKHs).add(*CTKH);
        break;
    }
    default:
        cout << "choice does not exist";
        break;
    }
}
template <typename T>
void ListCTKH<T>::addCTKH(int k, CongTrinhKhoaHoc<T>)
{
    CongTrinhKhoaHoc<T> CTKH;
    int type;
    cout << "Type of scientific research:\n 1.Book \2.Paper";
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
    (this->CTKHs).add(k, CTKH);
}
template <typename T>
void ListCTKH<T>::removeCTKH(int ID)
{
    CongTrinhKhoaHoc<T> CTKH;
    int type;
    cout << "Type of scientific research:\n 1.Book \2.Paper";
    cin >> type;
}
template <typename T>
void ListCTKH<T>::findCTKH(int ID)
{
    ListNode<CongTrinhKhoaHoc> *current = this->CTKHs;
    int i = 0;
    while (current != NULL)
    {
        i++;
        current = current->next;
        if ((current->data).ID == ID)
        {
            break;
        }
    }
    (this->CTKHs).remove(i);
}
#endif