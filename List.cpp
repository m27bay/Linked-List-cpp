#include <iostream>
#include "List.hpp"

/* Builders */
// Default
NodeInt::NodeInt() : data(0), next(nullptr) {}
ListInt::ListInt() : size(0), first(nullptr) {}
//

// Copy
ListInt::ListInt(const ListInt& other)
{
  // Init list
  this->size = other.size;
  this->first = nullptr;

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

    // Skip to the next
    currentOther = currentOther->next;
    currentThis = currentThis->next;
  }
}
//

// With data
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
//
/* End builders */

/* Overloaded */
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
    std::cout << current->data << " }, size : " << this->size << std::endl;
  }
}

void ListInt::empty()
{
  while (this->size)
  {
    dellNodeIntFirst();
  }
}

// Add
int ListInt::addNodeIntEnd(int newData)
{
  NodeInt* newNodeInt = new NodeInt(newData);
  if (!newNodeInt)
  {
    return 0;
  }

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
  return 1;
}

int ListInt::addNodeIntFirst(int newData)
{
  NodeInt* newNodeInt = new NodeInt(newData);
  if (!newNodeInt)
  {
    return 0;
  }

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

  return 1;
}
//

// Dell
int ListInt::dellNodeIntFirst()
{
  if (!this->first)
  {
    std::cout << "ERROR : list empty";
    return 0;
  }
  else
  {
    NodeInt* tmp = this->first;
    this->first = this->first->next;
    delete tmp;
    this->size-=1;

    return 1;
  }
}

int ListInt::dellNodeIntEnd()
{
  if (!this->first)
  {
    std::cout << "ERROR : list empty";
    return 0;
  }
  else
  {
    NodeInt* current = this->first;
    while (current)
    {
      current=current->next;
    }
    delete current;

    this->size-=1;

    return 1;
  }
}
//
/* End methodes */

/* Destructor */
ListInt::~ListInt()
{
  empty();
}
/* End destructor */

// ############# //
// With CString  //
// ############# //

/* Builders */
// Default
NodeCString::NodeCString() : data(CString()), next(nullptr) {}
ListCString::ListCString() : size(0), first(nullptr) {}
//

// Copy
ListCString::ListCString(const ListCString& other)
{
  // Init list
  this->size = other.size;
  this->first = nullptr;

  // Create the first element
  NodeCString* firstNodeCString = new NodeCString(other.first->data);
  this->first = firstNodeCString;

  // Creation current
  NodeCString* currentThis = first;
  NodeCString* currentOther = other.first->next;

  // Ride in currentOther
  while (currentOther)
  {
    // Init next
    currentThis->next = currentOther;

    // Skip to the next
    currentOther = currentOther->next;
    currentThis = currentThis->next;
  }
}
//

// With data
NodeCString::NodeCString(CString newData)
{
  this->data = newData;
  this->next = nullptr;
}

ListCString::ListCString(CString newData)
{
  NodeCString* firstNodeCString = new NodeCString(newData);
  this->first = firstNodeCString;
  this->size = 1;
}
//
/* End builders */

/* Overloaded */
ListCString &ListCString::operator=(const ListCString& other)
{
  this->size = other.size;

  // Create the first element
  NodeCString* firstNodeCString = new NodeCString(other.first->data);
  this->first = firstNodeCString;

  // Creation current
  NodeCString* currentThis = first;
  NodeCString* currentOther = other.first->next;

  // Ride in currentOther
  while (currentOther)
  {
    // Init next
    currentThis->next = currentOther;

    // Skip to the next
    currentOther = currentOther->next;
    currentThis = currentThis->next;
  }

  return *this;
}

/* end overloaded */

/* Methodes */
void ListCString::print() const
{
  if (!this->first)
  {
    std::cout << "*empty*" << std::endl;
  }
  else
  {
    NodeCString* current = this->first;

    std::cout << "{ ";
    while (current->next)
    {
      std::cout << current->data << ", ";
      current = current->next;
    }
    std::cout << current->data << " }, size : " << this->size << std::endl;
  }
}

void ListCString::empty()
{
  while (this->size)
  {
    dellNodeCStringFirst();
  }
}

// Add
int ListCString::addNodeCStringEnd(CString newData)
{
  NodeCString* newNodeCString = new NodeCString(newData);
  if (!newNodeCString)
  {
    return 0;
  }

  if (!this->first)
  {
    this->first = newNodeCString;
    this->size = 1;
  }
  else
  {
    NodeCString* current = this->first;

    while (current->next)
    {
      current = current->next;
    }

    current->next = newNodeCString;
    this->size+=1;
  }
  return 1;
}

int ListCString::addNodeCStringFirst(CString newData)
{
  NodeCString* newNodeCString = new NodeCString(newData);
  if (!newNodeCString)
  {
    return 0;
  }

  if (!this->first)
  {
    this->first = newNodeCString;
    this->size = 1;
  }
  else
  {
    newNodeCString->next = this->first;
    this->first = newNodeCString;
    this->size+=1;
  }

  return 1;
}
//

// Dell
int ListCString::dellNodeCStringFirst()
{
  if (!this->first)
  {
    std::cout << "ERROR : list empty";
    return 0;
  }
  else
  {
    NodeCString* tmp = this->first;
    this->first = this->first->next;
    delete tmp;
    this->size-=1;

    return 1;
  }
}

int ListCString::dellNodeCStringEnd()
{
  if (!this->first)
  {
    std::cout << "ERROR : list empty";
    return 0;
  }
  else
  {
    NodeCString* current = this->first;
    while (current)
    {
      current=current->next;
    }
    delete current;

    this->size-=1;

    return 1;
  }
}
//
/* End methodes */

/* Destructor */
ListCString::~ListCString()
{
  empty();
}
/* End destructor */
