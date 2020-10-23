#include <iostream>
#include "List.hpp"

/* Builders */
NodeInt::NodeInt() : data(0), next(nullptr) {}
ListInt::ListInt() : size(0), first(nullptr) {}

NodeInt::NodeInt(const NodeInt& other)
{
  this->data = other.data;
  this->next = other.next;
}

ListInt::ListInt(const ListInt& other)
{
  this->size = other.size;

  // Create the first element
  NodeInt* firstNodeInt = new NodeInt(other.first->data);
  this->first = firstNodeInt;

  // Creation current
  NodeInt* currentThis = first;
  NodeInt* currentOther = other.first->next;

  // Ride in currentOther
  while (currentOther)
  {
    // Init next
    currentThis->next = currentOther;
    // currentThis->next = new NodeInt(currentOther->data);

    // Skip to the next
    currentOther = currentOther->next;
    currentThis = currentThis->next;
  }
}

NodeInt::NodeInt(int newData)
{
  this->data = newData;
  this->next = nullptr;
}

ListInt::ListInt(int newData)
{
  NodeInt* firstNodeInt = new NodeInt(newData);
  this->first = firstNodeInt;
  this->size = 1;
}
/* End builders */

/* Overloaded */
NodeInt &NodeInt::operator=(const NodeInt& other)
{
  if (this != &other)
  {
    this->data = other.data;
    delete this->next;
    this->next = other.next;
  }

  return *this;
}

ListInt &ListInt::operator=(const ListInt& other)
{
  this->size = other.size;

  // Create the first element
  NodeInt* firstNodeInt = new NodeInt(other.first->data);
  this->first = firstNodeInt;

  // Creation current
  NodeInt* currentThis = first;
  NodeInt* currentOther = other.first->next;

  // Ride in currentOther
  while (currentOther)
  {
    // Init next
    currentThis->next = currentOther;
    // currentThis->next = new NodeInt(currentOther->data);

    // Skip to the next
    currentOther = currentOther->next;
    currentThis = currentThis->next;
  }

  return *this;
}

/* end overloaded */

/* Methodes */
void ListInt::print() const
{
  if (!this->first)
  {
    std::cout << "*empty*" << std::endl;
  }
  else
  {
    NodeInt* current = this->first;

    std::cout << "{ ";
    while (current->next)
    {
      std::cout << current->data << ", ";
      current = current->next;
    }
    std::cout << current->data << " }" << std::endl;
  }
}

void ListInt::addNodeIntEnd(int newData)
{
  NodeInt* newNodeInt = new NodeInt(newData);

  if (!this->first)
  {
    this->first = newNodeInt;
    this->size = 1;
  }
  else
  {
    NodeInt* current = this->first;

    while (current->next)
    {
      current = current->next;
    }

    current->next = newNodeInt;
    this->size+=1;
  }
}

void ListInt::addNodeIntFirst(int newData)
{
  NodeInt* newNodeInt = new NodeInt(newData);

  if (!this->first)
  {
    this->first = newNodeInt;
    this->size = 1;
  }
  else
  {
    newNodeInt->next = this->first;
    this->first = newNodeInt;
    this->size+=1;
  }
}

void ListInt::dellNodeIntFirst()
{
  if (!this->first)
  {
    std::cout << "ERROR : list empty";
    return;
  }
  else
  {
    this->first = this->first->next;
    this->size-=1;
  }
}
/* End methodes */

/* Destructor */
ListInt::~ListInt()
{
  NodeInt* current = this->first;
  NodeInt* tmp;

  while (current)
  {
    tmp = current;
    current = current->next;
    delete tmp;
  }
}

NodeInt::~NodeInt() {}
/* End destructor */
