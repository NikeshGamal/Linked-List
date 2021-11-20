#include<iostream>
using namespace std;

//For Creation of a node
class Node{
    private:
       int data;
       Node* next;
    public:
       void setData(int data){
         this->data=data;
       }

       void setNext(Node* ptr){
         this->next=ptr;    
       }

       void display(){
           cout<<"Data: "<<data<<endl;
       }
};

int main(){
  //For node
  //Null Pointer
  Node* nullPointer= NULL;
   //Starting node is called head

   Node* head= new Node();
   Node* first= new Node();
   Node* second= new Node();

   //User Inputs
   int headInput,secondInput,firstInput;
   cout<<"Enter data for head"<<endl;
   cin>>headInput;

   cout<<"Enter data for first"<<endl;
   cin>>firstInput;

   cout<<"Enter data for Second"<<endl;
   cin>>secondInput;


   //For Head
    head->setData(headInput);
    head->setNext(first);
    cout<<"Data of Head"<<endl;
    head->display();

  //For first
    first->setData(firstInput);
    first->setNext(nullPointer);
     cout<<"Data of First"<<endl;
    first->display();

    //For second
    second->setData(secondInput);
    second->setNext(nullPointer);
     cout<<"Data of First"<<endl;
    second->display();

  return 0;
}