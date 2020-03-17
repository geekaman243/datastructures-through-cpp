#include<iostream>
using namespace std;
struct stackN{//stack ADT
	int data;
	stackN* next;
	public:
	  stackN(int val){
	      data = val;
	      next = NULL;
	  }
	};
	
	

 class stack{
 	private:
 		//stackN* node;
 		stackN* top;//holds the address of last node 
 	public:
 	    stack(){
 	       top = NULL;
 	    }
 	    ~stack(){
 	    stackN* temp=top;
 	    stackN*ptr;
 	    while(temp){
 	    ptr=temp;
 	    delete ptr;
 	    temp=temp->next;
 	    }
 	    cout<<"done";
 	  }
 		/*stack(int d){
 			stackN* ins=new stackN(d);
 			//ins->data=d;
 			//ins->next=NULL;
 			node=ins;
 			top=ins;
 		
 		}*/
 		void push(int d);
 		int pop();
 		void traverse();
 		int  isempty();
 		};
 void stack:: push(int d){
               // cout<<"!";
 				stackN* ins=new stackN(d);
 				//ins->data=d;
 				//ins->next=NULL;
 				ins->next = top;
 				top = ins;
 				//top->next=ins;
 				//top=ins;
 				
 			}
 
 int stack::  pop(){ 
           if(top){          
           stackN* ptr = top;
           top=ptr->next;
           int k=ptr->data;
           ptr->data=0;
           delete ptr;
           ptr=NULL;
           return k;
           }
           cout<<"stack is empty";
           return 100000;
 
} 
 int stack:: isempty(){
 			if(top==NULL)
 			  return 1;
 			return 0;
 			}		
 
 void stack:: traverse(){//traverse the stack.
 			stackN* ptr=top;
 			while(ptr){
 			cout<<ptr->data;
 			ptr=ptr->next;
 			}
 }
 
 
 
 int main(){
 stack s;
 s.push(10);
 s.push(3);
 //s.push(2);
 //s.traverse();
 //cout<<s.pop()<<"\n";
 s.traverse();
 }
