#include<iostream>
using namespace std;
class QNode{
  
  
 
  public:
   int data;
   QNode* next;
   QNode(int d){
   data=d;
   next=NULL;
   }
  };
  
class Queue{
	private:
		QNode* front;
		QNode* rear;
	public:
		Queue(){
			rear=front=NULL;
		}
		~Queue(){
		QNode* temp=front;
		QNode* ptr;
		while(temp){
		ptr=temp;
		delete ptr;
		temp=temp->next;
			}
		front=NULL;
		rear=NULL;
		cout<<"done";
		}
		void enqueue(int d);
		int dequeue();
		bool isEmpty(); //1 when empty,0 when queue not empty.
		void traverse();
  };
  
  void Queue:: enqueue(int d){
  				QNode* ins=new QNode(d);
  				if(rear==NULL){
  			     	rear=ins;
  					front=ins;
  				 }
  				 rear=ins;
  				 }
  int Queue:: dequeue(){
  			if(front){
  				QNode* ptr=front;
  				front=ptr->next;
  				int k=ptr->data;
  				delete ptr;
  			    return k;
  			    }
  			cout<<"empty";
  			return -1;
  			}
  bool Queue::  isEmpty(){
  				if(front==NULL&&rear==NULL)
					return true;
				return false;
				  }
  void Queue:: traverse(){
  				QNode* ptr=front;
  				while(ptr){
  					cout<<ptr->data;
  					ptr=ptr->next;
  					}
  				}
  
  
  
  
 int main(){
 
 Queue q;
 q.enqueue(8);
 q.enqueue(90);
 q.traverse();
 q.dequeue();
 q.traverse();
 //cout<<q.isEmpty();
 return 0;
 }

