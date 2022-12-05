#ifndef _CONGTRINHKHOAHOC_H
#define _CONGTRINHKHOAHOC_H
#include <iostream>

using namespace std;
template <typename T>
class CongTrinhKhoaHoc
{
    T ID;
    int yoB;
    bool aoB;

public:
    CongTrinhKhoaHoc();
    CongTrinhKhoaHoc(T, int, bool);
    virtual ~CongTrinhKhoaHoc();
    virtual void input();
    virtual void output();
    T getID();
    int getYoB();
    bool getAoB();
    void setID(T);
    void setYoB(int);
    void setAoB(bool);
};
template <typename T>
CongTrinhKhoaHoc<T>::CongTrinhKhoaHoc()
{
}
template <typename T>
CongTrinhKhoaHoc<T>::CongTrinhKhoaHoc(T ID, int yoB, bool aoB)
{
    this->ID = ID;
    this->yoB = yoB;
    this->aoB = aoB;
}
template <typename T>
CongTrinhKhoaHoc<T>::~CongTrinhKhoaHoc()
{
}
template <typename T>
void CongTrinhKhoaHoc<T>::setAoB(bool aoB)
{
    this->aoB = aoB;
}
template <typename T>
void CongTrinhKhoaHoc<T>::setID(T ID)
{
    this->ID = ID;
}
template <typename T>
void CongTrinhKhoaHoc<T>::setYoB(int year)
{
    this->yoB = year;
}
template <typename T>
void CongTrinhKhoaHoc<T>::output()
{

    cout << "ID: " << this->ID << "\n";
    cout << "Year of Published: " << this->yoB<<"\n";
    cout << "Area of published: " << (this->aoB ? "In country" : "Abroad") << "\n";
}
template <typename T>
void CongTrinhKhoaHoc<T>::input()
{
    cout << "ID: ";
    cin >> this->ID;
    cout << "Year of Published: ";
    cin >> this->yoB;
    cout << "Area of published: 1.In country : 2.Abroad\n";
    int choice;
    cin >> (choice);
    if (choice == 1)
        this->setAoB(true);
    else if (choice == 2)
        this->setAoB(false);
}
template <typename T>
T CongTrinhKhoaHoc<T>::getID() {
    return this->getID;
}
template <typename T>
int CongTrinhKhoaHoc<T>::getYoB() {
    return this->yoB;
}
template <typename T>
bool CongTrinhKhoaHoc<T>::getAoB() {
    return this->aoB;
}
#endif