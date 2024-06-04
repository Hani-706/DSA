#include<iostream>
using namespace std;
#define MAX_SIZE 5
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
        return((rear+1)%MAX_SIZE==front);
    }
    void Enqueue(int x){
        if(IsFull()){
            return;
        }
        else if(IsEmpty()){
            front=0;rear=0;
        }
        else{
            rear=(rear+1)%MAX_SIZE;
        }
        A[rear]=x;
    }
    void Dequeue(){
        if(IsEmpty()){
            return;
        }
        else if (front==rear){
            front=rear=-1;
        }
        else{
            front=(front+1)%MAX_SIZE;
        }
    }
    void Print(){
       int count=(rear+MAX_SIZE-front)%MAX_SIZE+1;
        for(int i=0;i<count;i++){
            int index=(front+i)%MAX_SIZE;
            cout<<A[index]<<"\t";
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
     cout << "Enqueue 1, 2, 3" << endl;
    q.Enqueue(1);   q.Print();
    q.Enqueue(2);   q.Print();
    q.Enqueue(3);   q.Print();

    cout << "Dequeue" << endl;
    q.Dequeue();    q.Print();

    cout << "Enqueue 4, 5" << endl;
    q.Enqueue(4);   q.Print();
    q.Enqueue(5);   q.Print();
    q.Enqueue(6);   q.Print();

    cout << "Enqueue 6 (should fail, queue is full)" << endl;
    q.Enqueue(6);   q.Print();

    cout << "Dequeue" << endl;
    q.Dequeue();    q.Print();
    
    cout << "Enqueue 6 (should succeed, wrap-around)" << endl;
    q.Enqueue(6);   q.Print();

    cout << "Dequeue all" << endl;
    q.Dequeue();    q.Print();
    q.Dequeue();    q.Print();
    q.Dequeue();    q.Print();
    q.Dequeue();    q.Print();

    cout << "Enqueue 7, 8, 9, 10, 11 (should fill queue completely)" << endl;
    q.Enqueue(7);   q.Print();
    q.Enqueue(8);   q.Print();
    q.Enqueue(9);   q.Print();
    q.Enqueue(10);  q.Print();
    q.Enqueue(11);  q.Print();

    cout << "Enqueue 12 (should fail, queue is full)" << endl;
    q.Enqueue(12);  q.Print();

    return 0;
   
}