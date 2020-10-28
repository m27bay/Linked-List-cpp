#ifndef List_HPP
#define List_HPP

#include "CString.hpp"

class NodeInt
{
  friend class ListInt;

  private:
    /* Attributes */
    int data;
    NodeInt* next;

    /* Builders */
    NodeInt(); // Default
    NodeInt(int newData);
};

class ListInt
{
  private:
    /* Attributes */
    int size;
    NodeInt* first;

  public:
    /* Builders */
    ListInt(); // Default
    ListInt(const ListInt&); // Copy
    ListInt(int first);

    /* Overloaded */
    ListInt &operator=(const ListInt&);

    /* Methodes */
    void print() const;
    void empty();

    int addNodeIntEnd(int newData);
    int addNodeIntFirst(int newData);

    int dellNodeIntFirst();
    int dellNodeIntEnd();

    /* Destructor */
    ~ListInt();
};

class NodeCString
{
  friend class ListCString;

  private:
    /* Attributes */
    CString data;
    NodeCString* next;

    /* Builders */
    NodeCString(); // Default
    NodeCString(CString newData);
};

class ListCString
{
  private:
    /* Attributes */
    int size;
    NodeCString* first;

  public:
    /* Builders */
    ListCString(); // Default
    ListCString(const ListCString&); // Copy
    ListCString(CString newData);

    /* Overloaded */
    ListCString &operator=(const ListCString&);

    /* Methodes */
    void print() const;
    void empty();

    int addNodeCStringEnd(CString newData);
    int addNodeCStringFirst(CString newData);
    int addNodeCStringIndex(int index, CString newData);

    int dellNodeCStringFirst();
    int dellNodeCStringEnd();

    /* Destructor */
    ~ListCString();
};

#endif
