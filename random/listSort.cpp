#include <stdlib.h>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;


// Definition for singly-linked list.
struct node {
    int val;
    node *next;
    node(int x) : val(x), next(NULL) {}
};

node* insertionSortList(node* A) {
    if(!A || !A->next)
        return A;
    node *sorted = NULL;
    node *list = A;
    
    while(list)
    {
        node* curr = list;
        list = list->next;
        
        if(!sorted || sorted->val >= curr->val)
        {
            curr->next = sorted;
            sorted = curr;
        }
        else
        {
            node* temp = sorted;
            while (temp)
            {
                node* s = temp;
                temp = temp->next;
                
                if (!s->next || s->next->val > curr->val)
                {
                    curr->next = s->next;
                    s->next = curr;
                    break;
                }
            }
        }
    }
    return sorted;
}


