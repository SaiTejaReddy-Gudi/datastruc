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
    for (int i=0;i<n;i++){
        temp->data=arr[i];
        temp->next=new Node() ;
        temp=temp->next;
    }
    cout <<endl;
    
    }
void display(Node *temp){
    while (temp->next!=NULL){
        cout << temp->data <<" -> ";
        temp=temp->next;
    }
    cout <<temp->data;
}
//iterative search
void iterative_Search_LinkedList(Node *temp,int key){
    bool flag=false;
    // below while loop runs untill search value found or reaches the end,if searching value is found then sets flag=True else it will remain False
    while (temp!=NULL){
        if (temp->data ==key){
            flag=true;
            break;
        }
        temp=temp->next;
    }
    cout <<"result of iterative code" <<endl;
    if (flag){
        cout<<"searching value exists in the linked list";
    }
    else{
        cout<<"searching value not found";
    }
}

//recursive search
//below function accepts key and Linked list ,if the current Node value matches the key returns else if goes to next node recursively
void recursive_Search_LinkedList(Node *temp,int key){
    if (temp==NULL){
        cout<<"searching value not found";
        return ;
    }
    if (temp->data==key){
        cout<<"searching value exists in the linked list";
        return ;
    }
    recursive_Search_LinkedList(temp->next,key);
}
// typedef Node* nodePtr;
int main() {
    int arr[10]={1,4,5,6,11,7,9,10,0,7};
    Node *headPtr=new Node();
    Node *temp=headPtr;
    int n =sizeof(arr) / sizeof(int); 
    insert(arr,temp,n);
    cout <<"searching in LinkedList ";
    // executing the function which is used to display the values of linked list
    display(temp);
    cout<<endl;
    int searchingValue=10;
    cout << "searchingValue " <<searchingValue<<endl;
    //executing iterative search
    iterative_Search_LinkedList(headPtr,4);
    cout <<endl;
    cout <<"result of recursive code"<<endl;
    //executing and checking the result of recursive search
    recursive_Search_LinkedList(headPtr,4);

    // both methods can be used to search for an element in a linked list,
    // but recursion may lead to stack overflow errors if the list is too long. 
    // Iteration is generally preferred for efficiency and simplicity,both methods having complexity of O(n)
  return 0;
}