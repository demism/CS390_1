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

class Person {

private:
    std::string id;
    std::string name;

public:
    std::string GetId() const {
        return id;
    }

    void SetId(std::string id) {
        id = id;
    }

    std::string GetName() const {
        return name;
    }

    void SetName(std::string name) {
        name = name;
    }
    void printAbout();
};

class Student : Person {
private:
    std::string avgGrade;
    int year;
    
   
public:
     std::string GetAvgGrade() const {
        return avgGrade;
    }

    void SetAvgGrade(std::string avgGrade) {
        avgGrade = avgGrade;
    }

    int GetYear() const {
        return year;
    }

    void SetYear(int year) {
        year = year;
    }

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