#include<iostream>
using namespace std;

struct Node{
    int val;
    struct Node* next;
};
int size = 0;
Node* getNode(int val){
    Node* newNode = new Node();
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}
void insertpos(Node** current, int pos, int val){
    if(pos < 1 || pos > size+1){
        cout<<"Position is invalid!!!" << endl;
    }
    else{
        while(pos--){
            if(pos == 0){
                Node* temp = getNode(val);
                temp->next = *current;
                *current = temp;
            }
            else{
                current = &(*current)->next;
            }
        }
        size++;
    }
}
void printlist(struct Node* head){
    while(head!=NULL){
        cout<<""<<head->val;
        head=head->next;
    }
    cout<<endl;
}
int main(){
    Node* head = NULL;
    head = getNode(3);
    head->next = getNode(5);
    head->next->next = getNode(7);
    head->next->next->next = getNode(9);
    size = 4;
    cout<<"Linked List before insertion: "<< endl;
    printlist(head);
    int val = 11, pos = 3;
    insertpos(&head, pos, val);
    cout<<"Linked list after inserting 11 at pos 3: ";
    printlist(head);
    val = 1, pos = 1;
    insertpos(&head, pos, val);
    cout<<"Linked list after inserting 1 at pos 1: ";
    printlist(head);
    val = 13, pos = 6;
    insertpos(&head, pos, val);
    cout<<"Linked list after inserting 13 at pos 7: ";
    printlist(head);
    return 0;
}