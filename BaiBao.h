#ifndef _BAIBAO_H
#define _BAIBAO_H
#include "CongTrinhKhoaHoc.h"
#include <iostream>
using namespace std;
template <typename T = string>
class BaiBao : public CongTrinhKhoaHoc<T>
{
    T name;
    int noA;

public:
    BaiBao();
    BaiBao(T, int);
    ~BaiBao();
    void input();
    void output();
    T getName();
    int getNoA();
    void setName(T);
    void setNoA(int);
};
template <class T>
BaiBao<T>::BaiBao(){};
template <class T>
BaiBao<T>::BaiBao(T type, int noA)
{
    this->type = type;
    this->noA = noA;
}
template <class T>
BaiBao<T>::~BaiBao(){

};
template <class T>
void BaiBao<T>::input()
{
    CongTrinhKhoaHoc<T>::input();
    cout << "Type of Paper: ";
    cin >> this->name;
    cout << "Number of Author: ";
    cin >> this->noA;
};
template <class T>
void BaiBao<T>::output()
{
    cout << "ok";

    CongTrinhKhoaHoc<T>::output();
    cout << "Type of Book: ";
    cout << this->name;
    cout << "Number of Author: ";
    cout << this->noA;
}
template <class T>
T BaiBao<T>::getName()
{
    return this->name;
}
template <class T>
int BaiBao<T>::getNoA()
{
    return this->getNoA();
}
template <class T>
void BaiBao<T>::setName(T name)
{
    this->name = name;
}
template <class T>
void BaiBao<T>::setNoA(int NoA)
{
    this->setNoA(NoA);
}
#endif