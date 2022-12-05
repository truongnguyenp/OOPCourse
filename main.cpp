#include "LinkedList.h"
#include "CongTrinhKhoaHoc.h"
#include "ListCTKH.h"
#include <iostream>
using namespace std;
int main()
{
	LinkedList<int> n;
	n.add(1);
	n.add(2);
	n.add(3);
	std::cout << n.get(2);
	ListCTKH<string> list;
	list.addCTKH();
	return 0;
}