#ifndef _SACH_H
#define _SACH_H
#include "CongTrinhKhoaHoc.h"
#include "string"
#include "iostream"

using namespace std;
template <typename T = string>
class Sach : public CongTrinhKhoaHoc<T>
{
    T type;
    int noA; // Number of author
public:
    Sach();
    Sach(T, int);
    ~Sach();
    void input();
    void output();
    T getType();
    int getNoA();
    void setType(T);
    void setNoA(int);
};
template <class T>
Sach<T>::Sach(){};
template <class T>
Sach<T>::Sach(T type, int noA)
{
    this->type = type;
    this->noA = noA;
}
template <class T>
Sach<T>::~Sach(){

};
template <class T>
void Sach<T>::input()
{
    CongTrinhKhoaHoc<T>::input();
    cout << "Type of Book: ";
    cin >> this->type;
    cout << "Number of Author: ";
    cin >> this->noA;
};
template <class T>
void Sach<T>::output()
{
    CongTrinhKhoaHoc<T>::output();
    cout << "Type of Book: ";
    cout << this->type;
    cout << "Number of Author: ";
    cout << this->noA;
}
template <class T>
T Sach<T>::getType()
{
    return this->type;
}
template <class T>
int Sach<T>::getNoA()
{
    return this->getNoA();
}
template <class T>
void Sach<T>::setType(T type)
{
    this->setType(type);
}
template <class T>
void Sach<T>::setNoA(int NoA)
{
    this->setNoA(NoA);
}
#endif