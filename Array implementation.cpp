#include<iostream>
using namespace std;
#define MAX_SIZE 101
class Queue{
    private:
    int A[MAX_SIZE];
    int front,rear;
    public:
    Queue(){
        front=-1;
        rear=-1;
    }
    bool IsEmpty(){
        return ((front==-1)&&(rear==-1));
    }
    bool IsFull(){
        return(rear==MAX_SIZE-1);
    }
    void Enqueue(int x){
        if(IsFull()){
            return;
        }
        else if(IsEmpty()){
            front=0;rear=0;
        }
        else{
            rear=rear+1;
        }
        A[rear]=x;
    }
    void dequeue(){
        if(IsEmpty()){
            return;
        }
        else if (front==rear){
            front=rear=-1;
        }
        else{
            front=front+1;
        }
    }
    void print(){
       
        for(int i=front;i<=rear;i++){
            cout<<A[i]<<"\t";
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.Enqueue(2);   q.print();
    q.Enqueue(3);   q.print();
    q.Enqueue(4);   q.print();
    q.dequeue();   q.print();
    q.Enqueue(6);   q.print();
    
   
}