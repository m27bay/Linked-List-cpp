#include <iostream>
#include "List.hpp"
#include <string.h>

void testListInt()
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
}

void testListCString()
{
  ListCString l1;
  std::cout << "l1 : ";
  l1.print();

  ListCString l2("je");
  std::cout << "l2 : ";
  l2.print();

  ListCString l3(l2);
  std::cout << "l3 : ";
  l3.print();

  ListCString l4=l3;
  std::cout << "l4 : ";
  l4.print();

  ListCString l5;
  l5.addNodeCStringEnd("tu");
  std::cout << "l5 : ";
  l5.print();
  l5.addNodeCStringEnd("il");
  std::cout << "l5 : ";
  l5.print();
  l5.addNodeCStringFirst("nous");
  std::cout << "l5 : ";
  l5.print();

  l5.dellNodeCStringFirst();
  std::cout << "l5 : ";
  l5.print();
  l5.dellNodeCStringFirst();
  std::cout << "l5 : ";
  l5.print();

  l5.addNodeCStringFirst("je");
  std::cout << "l5 : ";
  l5.print();
  l5.addNodeCStringIndex(1, "tu");
  std::cout << "l5 : ";
  l5.print();
  l5.addNodeCStringIndex(0, "vide");
  std::cout << "l5 : ";
  l5.print();
  l5.addNodeCStringIndex(4, "error");
  std::cout << "l5 : ";
  l5.print();
  l5.addNodeCStringIndex(3, "nous");
  std::cout << "l5 : ";
  l5.print();

}

int main(int argc, char const *argv[])
{
  if (argc == 1)
  {
    testListInt();
    testListCString();
  }
  else if (!strcmp("int", argv[1]))
  {
    testListInt();
  }
  else if (!strcmp("CString", argv[1]))
  {
    testListCString();
  }
  else
  {
    std::cout << "Unknown arg" << std::endl;
  }

  return 0;
}
