#include <bits/stdc++.h>
using namespace std;
//first we create node data type
struct Node{
    int data;
    Node* next;
};
//seconde we create list class
class List{
    private:
        Node *head, *tail;
        int size;
    public:
        List(){
            head = NULL;
            tail = NULL;
            size = 0;
        }
        int getSize(){
            return size;
        }
        void insert_end(int value){
            Node *temp = new Node();
            temp->data = value;
            temp->next = NULL;
            if(head == NULL){
                head = temp;
                tail = temp;
                temp = NULL;
            }
            else{
                tail->next = temp;
                tail = temp;
            }
            size++;
        }
        void display(){
            Node *temp = head;
            while(temp!=NULL){
                cout << temp->data << "\t";
                temp = temp->next;
            }
            cout << endl;
        }
        void inster_start(int value){
            Node* temp = new Node();
            temp->data = value;
            temp->next = head;
            head = temp;
            size++;
        }
        void insert_position(int value, int pos){
            if(pos > size){
                cout << "Error\n";
                return;
            }
            Node *temp = new Node();
            Node *pre, *cur;
            cur = head;
            for (int i = 1; i < pos; i++)
            {
                pre = cur;
                cur = cur->next;
            }
            temp->data = value;
            temp->next = cur;
            pre->next = temp;
            size++;
        }
        void delete_first(){
            if(size == 0){
                cout << "Error\n";
                return;
            }
            Node *temp = head;
            head = head->next;
            delete(temp);
            size--;
        }
        void delete_last(){
            if(size == 0){
                cout << "Error\n";
                return;
            }
            Node *pre = head;
            while(pre->next != tail){
                pre = pre->next;
            }
            pre->next = NULL;
            delete(tail);
            tail = pre;
            size--;
        }
        int search(int value){
            Node *temp = head;
            int pos = 1;
            while(temp != NULL){
                if(temp->data == value){
                    return pos;
                }
                else{
                    pos++;
                    temp = temp->next;
                }
            }
            return -1;
        }
};

int main(){
    List mylist;
    mylist.insert_end(1);
    mylist.insert_end(2);
    mylist.insert_end(3);
    mylist.insert_end(4);
    mylist.display();
    // int n, t;
    // cout << "insert at position: ";
    // cin >> n;
    // cout << " and the value is: ";
    // cin >> t;
    // mylist.insert_position(n, t);
    // mylist.display();
    // cout << "delete first node " << endl;;
    // mylist.delete_first();
    // mylist.display();
    // cout << "Delete the last node" << endl;
    // mylist.delete_last();
    // mylist.display();
    cout << "Search about 3 " << mylist.search(3) << endl;;
    cout << mylist.getSize() << endl;
}
