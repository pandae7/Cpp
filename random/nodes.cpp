#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
} ;

// struct node* head ;

void insert(node** head, int x)
{
    node* temp;
    temp = new node();
    temp->data = x;
    temp->next = *head;
    *head = temp;
}
void print(node* head)
{
    // node* temp;
    cout << "list is: ";
    while(head != NULL){
        cout << head->data;
        head = head->next;
        cout << " ";
    }
    

}

int main(){
    node* head = NULL;
    cout << "Enter 5 numbers: " ;
    int x ;
    for (int i = 0; i < 5;i++){
        cin >> x;
        insert(&head,x); 
    }
    print(head);
    
}

