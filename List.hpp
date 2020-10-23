#ifndef LIST_HPP
#define LIST_HPP

class Node
{
  friend class List;

  private:
    /* Attributes */
    int data;
    Node* next;

  public:
    /* Builders */
    Node(); // Default
    Node(const Node&); // Copy
    Node(int newData);

    /* Overloaded */
    Node &operator=(const Node&);

    /* Destructor */
    ~Node();

};

class List
{
  private:
    /* Attributes */
    int size;
    Node* first;

  public:
    /* Builders */
    List(); // Default
    List(const List&); // Copy
    List(int first);

    /* Overloaded */
    List &operator=(const List&);

    List &operator+=(const List&);

    /* Methodes */
    void print() const;
    void addNodeEnd(int newData);

    /* Destructor */
    ~List();
};

#endif
