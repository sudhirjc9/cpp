#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node * next;
    node(int x):data(x), next(NULL){

    }
};

node* insert(node *tail, int num){
    node* temp = new node(num);

    if(tail == NULL){
        temp->next = temp;
        return temp;
    }else{
        temp->next = tail->next;
        tail->next=temp;
        tail = temp;
    }
    return tail;
}

void print(node *tail){
    node *temp = tail->next;
    while(temp !=tail){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
}

int main(){
    node *tail = NULL;
    tail = insert(tail, 10);
    tail = insert(tail, 20);
    tail = insert(tail, 30);
    tail = insert(tail, 40);

    print(tail);
}