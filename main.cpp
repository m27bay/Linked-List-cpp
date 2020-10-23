#include <iostream>
#include "List.hpp"

int main(int argc, char const *argv[])
{
  ListInt l1;
  std::cout << "l1 : ";
  l1.print();

  ListInt l2(4);
  std::cout << "l2 : ";
  l2.print();

  ListInt l3(l2);
  std::cout << "l3 : ";
  l3.print();

  ListInt l4=l3;
  std::cout << "l4 : ";
  l4.print();

  ListInt l5;
  l5.addNodeIntEnd(10);
  std::cout << "l5 : ";
  l5.print();
  l5.addNodeIntEnd(100);
  std::cout << "l5 : ";
  l5.print();
  l5.addNodeIntFirst(1);
  std::cout << "l5 : ";
  l5.print();

  l5.dellNodeIntFirst();
  std::cout << "l5 : ";
  l5.print();

  return 0;
}
