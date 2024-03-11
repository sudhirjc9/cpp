#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;

    node(int num){
        data = num;
        next = NULL;
    }

};

node *insertStart(node *head, int num){
    node *temp = new node(num);
    if(head == NULL){
        return temp;
    }

    temp->next = head;
    return temp;
}

node* deleteFirst_node(node *head){
    if(head == NULL)
        return NULL;

    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

int position(node *head, int key){
    int pos = 0;
    if(head->data == key)
        return 1;
    else{
        pos++;
        while(head->data !=key){
            head=head->next;
            if(head == NULL)
                return -1;
            pos++;
        }
    }
    return pos;
}

int position_recurssive(node *head, int key){
    if(head == NULL)
        return -1;
    
    if(key == (*head).data)
        return 1;
    else
        return 1+position_recurssive(head->next, key);
}

int main(){
    node *head = NULL;
    head = insertStart(head,10);
    head = insertStart(head,20);
    head = insertStart(head,30);
    head = insertStart(head,40);


    //head = deleteFirst_node(head);
    //head = deleteFirst_node(head);
    node *temp = head;
    cout<<position(head, 10)<<endl;
    cout<<position_recurssive(head, 10)<<endl;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}