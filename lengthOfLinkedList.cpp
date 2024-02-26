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
//iterative code
// below while loop runs untill the end of linkedlist to find the size of linked list
int size_of_LinkedList_using_iteration(Node* temp){
    int sizeOfLinkedList=0;
    while (temp!=NULL){
        sizeOfLinkedList+=1;
        temp=temp->next;
    }
    return sizeOfLinkedList;
}
//recursive code
// below while loop runs untill the end of linkedlist to find the size of linked list
int size_of_LinkedList_using_recursion(Node* temp){
    if (temp==NULL){
        return 0;
    }
    else{
        return 1+size_of_LinkedList_using_recursion(temp->next);
    }
}
int main() {
    int arr[10]={1,4,5,6,11,7,9,10,0,7};
    Node *headPtr=new Node();
    Node *temp=headPtr;
    int n =sizeof(arr) / sizeof(int); 
    insert(arr,temp,n);
    cout <<"size of Linked list found using iterative code is " <<size_of_LinkedList_using_iteration(headPtr)<<endl;
    cout<<"size of Linked list found using recursive code is "<< size_of_LinkedList_using_recursion(headPtr);

    //both methods are having complexity of O(n) but iterative is optimally best,because iterative method dont use of stack in recursive method
    return 0;
}