#include <iostream>
#include "List.hpp"

/* Builders */
Node::Node() : data(0), next(nullptr) {}
List::List() : size(0), first(nullptr) {}

Node::Node(const Node& other)
{
  this->data = other.data;
  this->next = other.next;
}

List::List(const List& other)
{
  this->size = other.size;

  // Create the first element
  Node* firstNode = new Node(other.first->data);
  this->first = firstNode;

  // Creation current
  Node* currentThis = first;
  Node* currentOther = other.first->next;

  // Ride in currentOther
  while (currentOther)
  {
    // Init next
    currentThis->next = currentOther;
    // currentThis->next = new Node(currentOther->data);

    // Skip to the next
    currentOther = currentOther->next;
    currentThis = currentThis->next;
  }
}

Node::Node(int newData)
{
  this->data = newData;
  this->next = nullptr;
}

List::List(int newData)
{
  Node* firstNode = new Node(newData);
  this->first = firstNode;
  this->size = 1;
}
/* End builders */

/* Overloaded */
Node &Node::operator=(const Node& other)
{
  if (this != &other)
  {
    this->data = other.data;
    delete this->next;

    if (!other.next)
    {
      this->next = nullptr;
    }
    else
    {
      this->next = other.next;
      // this->next = new Node();
    }
  }

  return *this;
}

List &List::operator=(const List& other)
{
  this->size = other.size;

  // Create the first element
  Node* firstNode = new Node(other.first->data);
  this->first = firstNode;

  // Creation current
  Node* currentThis = first;
  Node* currentOther = other.first->next;

  // Ride in currentOther
  while (currentOther)
  {
    // Init next
    currentThis->next = currentOther;
    // currentThis->next = new Node(currentOther->data);

    // Skip to the next
    currentOther = currentOther->next;
    currentThis = currentThis->next;
  }

  return *this;
}

// List &List::operator+=(const List& other)
// {
//   this->size += other.size;

// }

List &List::operator+=(const Node& other)
{

}
/* end overloaded */

/* Methodes */
void List::print() const
{
  if (!this->first)
  {
    std::cout << "*empty*" << std::endl;
  }
  else
  {
    Node* current = this->first;

    std::cout << "{ ";
    while (current->next)
    {
      std::cout << current->data << ", ";
      current = current->next;
    }
    std::cout << current->data << " }" << std::endl;
  }
}
/* End methodes */

/* Destructor */
List::~List()
{
  Node* current = this->first;
  Node* tmp;

  while (current)
  {
    tmp = current;
    current = current->next;
    delete tmp;
  }
}

Node::~Node()
{
  if (this->next)
  {
    delete this->next;
  }
}
/* End destructor */
