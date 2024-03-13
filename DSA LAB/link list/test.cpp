#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void addlast(node* &head, int val){
    node* n=new node (val);
    if (head==NULL)
    {
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void addfirst(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
    
    }
    void deletehead(node* &head){
        node* todelete=head;
        head=head->next;
        delete todelete;

    }
    void deleteation(node* &head,int val){
        node* temp=head;
        while(temp->next->data!=val){
            temp=temp->next;
        }
        node* todelete=temp->next;
        temp->next=temp->next->next;
        delete todelete;
    }


void display(node* head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
bool search(node* head, int key){
    node* temp=head;
    while (temp!=NULL)
    {
        if (temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
    
}

int main()
{
    node* head=NULL;
    addlast(head,1);
    addlast(head,2);
    addlast(head,3);
    addfirst(head,5);
    addfirst(head,9);
    deleteation(head,2);
    display(head);
    cout<<search(head,9)<<endl;
  return 0;
}