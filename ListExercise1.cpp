#include <iostream>
#include <list>

using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = nullptr;
    }
};

class MyList
{
private:
    Node *head;
    Node *tail;
    int length;

public:
    MyList() {}
    /*
        FUNCTION CONSTRUCTOR MyList(value):
    CREATE a new Node with the given value
    SET head to point to the new Node
    SET tail to point to the new Node
    INITIALIZE length to 1
    END FUNCTION
    */
    MyList(int value)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }

    /*
    FUNCTION Destructor:
    SET temp to point to head
    WHILE head is not NULL:
        MOVE head to the next node
        DELETE temp
        SET temp to head
    END WHILE
    END FUNCTION
    */
    ~MyList()
    {
        Node *temp = head;
        while (head)
        {
            head = head->next;
            delete temp;
            temp = head;
        }
    }

    /*
    FUNCTION append(value):
    CREATE a new Node with the given value

    IF head is NULL THEN:
        SET head to the new Node
        SET tail to the new Node
    ELSE:
        SET tail's next pointer to the new Node
        UPDATE tail to point to the new Node
    END IF

    INCREMENT length by 1
    END FUNCTION
    */
    void append(int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }

    void Print()
    {
        Node *next = head;
        while (next)
        {
            cout << "Value: " << next->value << endl;
            next = next->next;
        }
    }
};

int main()
{
    MyList list;
    list.append(4);
    list.append(2);

    list.Print();

    return 0;
}