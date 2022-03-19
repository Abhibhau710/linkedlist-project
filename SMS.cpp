#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

class node{
public:
    int roll_no;
    string name;
    float marks,per;
    node* next;

   /* node(int data){
    this->data=data;
    next=NULL;
    }*/

};

class linkedlist{

public:
    node *head=NULL;

    void Insert(){
    int r;
    string n;
    float m;
    cout<<"\n\n Enter Roll No. :";
    cin>>r;
    cout<<"\n\n Enter Name :";
    cin>>n;
    cout<<"\n\n Enter Marks :";
    cin>>m;
    node *newnode = new node;
    newnode ->roll_no =r;
    newnode ->name=n;
    newnode->marks=m;
    newnode->per = m/100*100;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
     }
     else{
        node*ptr =head;
        while(ptr->next!=NULL)
        {
            ptr = ptr->next;
        }
        ptr->next=newnode;

      }
      cout<<"\n\n New Node inserted successfully.... ";
    }
    void Search()
    {
        if(head==NULL)
        {
            cout<<"\n\n Linkedlist is empty..";
        }else
        {
            int r,found=0;
            cout<<"\n\n Enter roll no for search :";
            cin>>r;
            node*ptr = head;
            while(ptr!= NULL)
            {
                if(r==ptr->roll_no){
                    cout<<"\n\n Roll No. :"<<ptr->roll_no;
                    cout<<"\n\n Name :"<<ptr->name;
                    cout<<"\n\n Marks :"<<ptr->marks;
                    cout<<"\n\n percentage :"<<ptr->per;
                    found++;
                }
                ptr=ptr->next;
            }
            if(found==0){
                cout<<"\n\n Search roll No. "<<r<<"can't found ";
            }

        }
    }
    void Count(){
     if(head==NULL){
        cout<<"\n\n Linkedlist is empty...";
     }
     else{
        int c=0;
        node *ptr= head;
        while(ptr!=NULL){
            ptr=ptr->next;
            c++;
        }
        cout<<"\n\n Total no. of Nodes :"<<c;
     }

    }
     void Update()
    {
        if(head==NULL)
        {
            cout<<"\n\n Linkedlist is empty..";
        }else
        {
            int r,found=0;
            cout<<"\n\n Enter roll no for updation :";
            cin>>r;
            node*ptr = head;
            while(ptr!= NULL)
            {
                if(r==ptr->roll_no){
                    cout<<"\n\n Enter New Roll No. :";
                    cin>>ptr->roll_no;
                    cout<<"\n\n Enter Name :";
                    cin>>ptr->name;
                    cout<<"\n\n Enter Marks :";
                    cin>>ptr->marks;
                    ptr->per = ptr->marks/100 * 100;
                    cout<<"\n\n Record updated successfully...";
                    found++;
                }
                ptr=ptr->next;
            }
            if(found==0){
                cout<<"\n\n updation roll No. "<<r<<"can't found ";
            }

        }
    }

    void Delete()
    {
        if(head==NULL)
        {
            cout<<"\n\n Linkedlist is empty..";
        }else
        {
            int r,found=0;
            cout<<"\n\n Enter roll no for deletion :";
            cin>>r;
           if(r==head->roll_no)
           {
               node *ptr = head;
               head= head->next;
               cout<<"\n\n Record deleted successfully...";
               found++;
               delete ptr;

           }
           else{
              node *pre = head;
              node *ptr=head->next;

              while(ptr!=NULL){
                if(r= ptr->roll_no)
                {
                    pre->next=ptr->next;
                    found++;
                    cout<<"\n\n Record deleted successfully...";
                    delete ptr;
                    break;
                }
                pre = ptr;
                ptr = ptr->next;

              }
           }
           if(found==0){
             cout<<"\n\n Deletion roll No. "<<r<<"can't found ";
           }
    }
    }
    void Show(){

        if(head==NULL)
        {
            cout<<"\n\n Linkedlist is empty..";
        }else
        {

            node*ptr = head;
            while(ptr!= NULL)
            {
                    cout<<"\n\n Roll No. :"<<ptr->roll_no;
                    cout<<"\n\n Name :"<<ptr->name;
                    cout<<"\n\n Marks :"<<ptr->marks;
                    cout<<"\n\n percentage :"<<ptr->per;

                ptr=ptr->next;
            }
        }


    }


};
int main(){
    linkedlist obj;

    int choice;
    cout<<"\n\n 1.Insert Record";
    cout<<"\n\n 2.Search Record";
    cout<<"\n\n 3.Count Nodes";
    cout<<"\n\n 4.Update Record";
    cout<<"\n\n 5.Delete Record";
    cout<<"\n\n 6.Show all Record";
    cout<<"\n\n 7.Exit";
    cout<<"\n\n\n Your Choice:";
    cin>>choice;
    switch(choice)
    {
    case 1:
        obj.Insert();
        break;


    case 2:

        obj.Search();
        break;


    case 3:

        obj.Count();
        break;


    case 4:

        obj.Update();
        break;


    case 5:

        obj.Delete();
        break;


    case 6:

        obj.Show();
        break;


    case 7:
        exit(0);


    default:
        cout<<"\n\n\n Invalid choice....Please try again...";

}
return 0;
}
