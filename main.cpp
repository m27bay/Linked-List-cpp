#include <iostream>
#include "List.hpp"

int main(int argc, char const *argv[])
{
  List l1;
  std::cout << "l1 : ";
  l1.print();

  List l2(4);
  std::cout << "l2 : ";
  l2.print();

  List l3(l2);
  std::cout << "l3 : ";
  l3.print();

  List l4=l3;
  std::cout << "l4 : ";
  l4.print();
  return 0;
}
