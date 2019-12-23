#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;

};
node* head = NULL;
node* head2 = NULL;


void printlist(node* n)
{
    while(n != NULL){
        cout << n->data << " "; 
        n = n->next;
    }
}

void attachnode(node** head,int dat)
{   
    node* temp = NULL;
    temp = new node();
    temp->data = dat;
    temp->next = *head;
    *head = temp;
   
}

void appendnode(node** n, int dat)
{
    node* temp = NULL;
    node *temp1 = *n;
    temp = new node();
    temp->data = dat;
    temp->next = NULL;
    if(*n == NULL){
        *n =  temp;
        return;
    }
    while(temp1->next != NULL){
        temp1 = temp1->next;
    }
    // temp = temp->next;
    temp1->next = temp;
    return;
    
}


void insert(node* n,int dat)
{
    node* temp = new node();
    temp->data = dat;
    temp->next = n->next;
    n->next = temp;

}

void deletenode(node* n,int dat)
{
    while(n->next != NULL){
        if(n->next->data == dat){
            node* temp = NULL;
            temp = n->next;
            free(temp);
            n->next = n->next->next;
            // free(n->next->next);
            return;

        }
    n = n->next;
    }

}


int main()
{   
    
    node* second = NULL;
    node* third = NULL;
    node*  temp1 , temp2 = NULL;

    int naya = 1;
    int picheka = 4;
    // head = new node();
    second = new node();
    third = new node();

    // head->data = 1;
    second->data = 2;
    second->next = third;
    head = second;

    third->data = 3;
    third->next = NULL;

    printlist(head);
    cout << "\n";
    attachnode(&head,naya);
    printlist(head);
    appendnode(&head,picheka);
    cout << "\n";
    printlist(head);
    cout << "\n";
    insert(head->next->next,5);
    printlist(head);
    deletenode(head,2);
    cout << "\n";
    printlist(head);

    
}