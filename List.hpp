#ifndef List_HPP
#define List_HPP

class NodeInt
{
  friend class ListInt;

  private:
    /* Attributes */
    int data;
    NodeInt* next;

  public:
    /* Builders */
    NodeInt(); // Default
    NodeInt(const NodeInt&); // Copy
    NodeInt(int newData);

    /* Overloaded */
    NodeInt &operator=(const NodeInt&);

    /* Destructor */
    ~NodeInt();
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

    void addNodeIntEnd(int newData);
    void addNodeIntFirst(int newData);

    void dellNodeIntFirst();

    /* Destructor */
    ~ListInt();
};

#endif
