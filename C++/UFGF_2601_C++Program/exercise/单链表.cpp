#include <iostream>

// ��������ڵ�ṹ
struct Node {
    int data;
    Node* next; //��C++�У����ǿ���ʹ��ָ������ʾ�ڵ�֮������ӹ�ϵ����ˣ�Ϊ�˱�ʾ��һ���ڵ㣬����ʹ����һ��ָ��ڵ��ָ�롣���ָ�������Ӧ����ڵ��������ͬ�������������ΪNode*����ʾָ��Node���͵�ָ�롣
};

// ����������
class LinkedList {
private:
    Node* head; // ����ͷ�ڵ�ָ��

public:
    LinkedList() {
        head = nullptr; // ��ʼ������Ϊ��
    }

    ~LinkedList() {
        // �������������ͷ������ڴ�
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

    // ������ĩβ�����½ڵ�
    void insert(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            // �������Ϊ�գ����½ڵ���Ϊͷ�ڵ�
            head = newNode; //����ͨ��ϣ���½ڵ��Ϊ�������ͷ�ڵ㣬�����ǲ��뵽ԭͷ�ڵ�֮��
        } else {
            // �����ҵ�����ĩβ�������½ڵ����ĩβ
            Node* current = head; //ͨ����ָ����� current ��ʼ��Ϊָ�������ͷ�ڵ� head�����ǿ���ʹ����������������ѭ���У�����ͨ�� current->next ���ʵ�ǰ�ڵ����һ���ڵ㣬���� current ָ���ƶ�����һ���ڵ㡣
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // ��ӡ�����е����нڵ�ֵ
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
    // �����������
    LinkedList list;

    // �������в���ڵ�
    list.insert(1);
    list.insert(2);
    list.insert(3);

    // ��ӡ�����еĽڵ�ֵ
    list.print();

    return 0;
}