#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data=0){
        this->data=data;
        next=NULL;
    }
};
void insert(int arr[],Node *temp,int n){
    for (int i=0;i<n-1;i++){
        temp->data=arr[i];
        temp->next=new Node() ;
        temp=temp->next;
    }
    temp->data=arr[n-1];
    // cout <<endl;
    
    }
void display(Node *temp){
    while (temp->next!=NULL){
        cout << temp->data <<" -> ";
        temp=temp->next;
    }
    cout <<temp->data;
}
void iterative_reverse(Node *head){
    Node* temp = head;  
   
   // Initialize pointer 'prev' to NULL,
   // representing the previous node
   Node* prev = NULL;  
   
   // Traverse the list, continue till
   // 'temp' reaches the end (NULL)
   while(temp != NULL){  
       // Store the next node in
       // 'front' to preserve the reference
       Node* front = temp->next;  
       
       // Reverse the direction of the
       // current node's 'next' pointer
       // to point to 'prev'
       temp->next = prev;  
       
        // Move 'prev' to the current
        // node for the next iteration
       prev = temp;  
       
        // Move 'temp' to the 'front' node
        // advancing the traversal
       temp = front; 
   }
    cout <<"reversed linLinked list  "<<endl;
    display(prev);
    // return &Node(3); 
}
    void reverse_recursive(Node* current, Node* prev = nullptr) {
        if (current == nullptr) {
            // head = prev;
            cout <<endl<<"reversed Linked list is "<<endl;
            display(prev);
            return;
        }
        Node* next_node = current->next;
        current->next = prev;
        reverse_recursive(next_node, current);
    }
int main() {
    int arr[10]={1,4,5,6,11,7,9,10,0,7};
    Node *headPtr1=new Node();
    Node *headPtr2=new Node();
    int n =sizeof(arr) / sizeof(int); 
    insert(arr,headPtr1,n);
    insert(arr,headPtr2,n);
    cout <<"LinkedList :";
    display(headPtr1);
    cout <<endl;
    //executing the iterative reversal
    iterative_reverse(headPtr1);
    //executing the recursive reversal
    reverse_recursive(headPtr2);
    //both methods are having time complexity of O(n) but iterative has space comlexity O(1) where as recursive has O(N) space complexity 
    // recursion uses extra space over iterative because of the stack 
    return 0;
}