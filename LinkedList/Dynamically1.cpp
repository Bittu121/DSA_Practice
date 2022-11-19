/*
*/
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
void print(Node*head){
    
}
int main()
{
    //Dynamically
    Node*n1=new Node(10);
    Node*n2=new Node(20);
    Node*n3=new Node(30);
    Node*n4=new Node(40);
    Node*n5=new Node(50);
    Node*head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;
    //cout<<n1->data<<"->"<<n2->data<<"->"<<n3->data<<"->"<<n4->data<<"->"<<n5->data<<"->"<<"NULL"<<endl;
    print(head);
    cout<<head->data;
    head=head->next;
    cout<<"->"<<head->data;
    head=head->next;
    cout<<"->"<<head->data;
    head=head->next;
    cout<<"->"<<head->data;
    head=head->next;
    cout<<"->"<<head->data;
    cout<<"->"<<"NULL"<<endl;
}
