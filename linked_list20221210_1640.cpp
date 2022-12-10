#include <iostream>
#include <cstddef>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(int d){
            data = d;
            next = NULL;
        }
};
class sorted_ll{ // sorted link list
    public:
            void insert(Node* node, int data){
        };
            void del_node(int dd){
            //Write your code here
        };
        void print(){
          //Write your code here
        }
}; //End of sorted linked list
int main() {
    sorted_ll   sll;
    Node* root = NULL;
    int t;
    int data;
    #if 0 // for unsorted linked list
        input 3 2 1 3
        output 2 1 3
        // for delete function
        input 4 2 1 4 3
              4
        output 2 1 3
    #endif
    #if 0 // for sorted linked list
        input 4 2 1 4 3
        output  1 2 3 4
    #endif
    cin >> t;
    while(t-- > 0){
        Node* node;
        cin >> data;
        node=new Node(data);
        sll.insert(node, data);
    }
    //ull.del_node(4);
    sll.print();
    return 0;
}
 
