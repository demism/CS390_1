#include <iostream>
#include <string>

template <class T>
struct Node {
    T data; 
    Node* next;
};

template <class T>
class LinkedList {
    private:
        Node<T>* node;
    public:
        LinkedList();
        LinkedList(T node);
        ~LinkedList();

        void addNode();
        void addNode(T node);

};

template<class T>
LinkedList<T>::LinkedList(T node) {
    this->node = new Node<T>();
    this->node->data = node.data;
}

template<class T>
LinkedList<T>::LinkedList() {

}

class Person {

private:
    std::string id;
    std::string name;

public:
    void setId(std::string id) {
        this->id = id;
    }
    void printAbout();
};

class Student : Person {
private:
    std::string avgGrade;
    int year;
public:
    void printAbout();
};

class Teacher : Person {
private:
    std::string title;
    std::string department;
public:
    void printAbout();
};

int main()
{
    std::cout<< "Hello world\n";
    return 0;
}