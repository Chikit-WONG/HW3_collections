#include <iostream>

// 定义链表节点结构
struct Node {
    int data;
    Node* next; //在C++中，我们可以使用指针来表示节点之间的连接关系。因此，为了表示下一个节点，我们使用了一个指向节点的指针。这个指针的类型应该与节点的类型相同，因此它被声明为Node*，表示指向Node类型的指针。
};

// 定义链表类
class LinkedList {
private:
    Node* head; // 链表头节点指针

public:
    LinkedList() {
        head = nullptr; // 初始化链表为空
    }

    ~LinkedList() {
        // 在析构函数中释放链表内存
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

    // 在链表末尾插入新节点
    void insert(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            // 如果链表为空，将新节点设为头节点
            head = newNode; //我们通常希望新节点成为链表的新头节点，而不是插入到原头节点之后。
        } else {
            // 否则找到链表末尾，并将新节点插入末尾
            Node* current = head; //通过将指针变量 current 初始化为指向链表的头节点 head，我们可以使用它来遍历链表。在循环中，我们通过 current->next 访问当前节点的下一个节点，并将 current 指针移动到下一个节点。
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // 打印链表中的所有节点值
    void print() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    // 创建链表对象
    LinkedList list;

    // 在链表中插入节点
    list.insert(1);
    list.insert(2);
    list.insert(3);

    // 打印链表中的节点值
    list.print();

    return 0;
}