#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    // node*left;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertAtHead(node*&head)
{
    cout<<"inserat at head "<<endl;
    int d;
    cout<<"enter the data "<<endl;
    cin>>d;
    if(head==NULL)
    {
        node*temp=new node(d);
    // cout<<"inside temp class size of node is "<<sizeof(temp->data)<<endl;
    // cout<<"inside temp class size of node is "<<sizeof(temp->next)<<endl;
        head=temp;
    }
    else{
        // node*temp=head;
        node*temp=new node(d);
        temp->next=head;
    head=temp;
        // while()
    }
    // cout<<"insertionaton successfull";
}
void insertatpos(node*&head)
{
    int d,pos,cnt=1;
    node *temp=head;
    cout<<"enter the position wheere uw ant to position the ekement  "<<endl;
    cin>>pos;
    if(pos==1)
    {
        insertAtHead(head);
    }
    else{
        cout<<" ente the data "<<endl;
    cin>>d;
while(cnt<pos-1)
    {
        temp=temp->next;
        cnt++;
    }
    node*newnode=new node(d);
    newnode->next=temp->next;
    temp->next=newnode;
    }
    

}
void insertATtail(node*head)
{
    // cout<<""
    if(head==NULL)
    {
        insertAtHead(head);
    }
    cout<<"inserat at tail "<<endl;
    int d;
    cout<<"enetert the value "<<endl;
    cin>>d;
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    node*newnode=new node(d);
    temp->next=newnode;


}
void print(node*&head)
{
node*temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
int main()
{
node*head=NULL;
// cout<<" size of given class  "<<sizeof(node)<<endl;
insertAtHead(head);
insertATtail(head);
insertAtHead(head);
// insertAtHead(head);
insertatpos(head);
// insertAtHead(head);
// insertAtHead(head);
// insertatpos(head);
insertATtail(head);
insertatpos(head);
// insertAtHead(head);
print(head);
// insertAtlast(head);
}