#include<bits/stdc++.h>

using namespace std;

class Queues{
    int *arr;
    int currsize;
    int start;
    int end;

    public:
      Queues(int n){
        start = -1;
        end =-1;
        currsize = 0;
        arr = new int[10];
      }
    void push(int x){
        
        if(currsize == 10){
            cout << "Queue Overflow" << endl;
            return;
        }
        if(currsize==0){
            start = 0;
            end = 0;
        }
        else
     
        end = (end + 1) % 10;
        arr[end] = x;
        currsize++;
            
     }
    
   int pop(){
    if (currsize == 0){
        cout << "Queue Underflow" << endl;
        return -1;
    }
    int x = arr[start];
    if(currsize == 1){
        start = -1;
        end = -1;
    }
    start = (start + 1) % 10;
    currsize--;
    
    return x;

   }
    int top() {
    if (start == -1) {
      cout << "Queue is Empty" << endl;
      exit(1);
    }
    return arr[start];
  }
  int size() {
    return currsize;
  }

};

int main(){

 Queues q(6);
  q.push(4);
  q.push(14);
  q.push(24);
  q.push(34);
  cout << "The peek of the queue before deleting any element " << q.top() << endl;
  cout << "The size of the queue before deletion " << q.size() << endl;
  cout << "The first element to be deleted " << q.pop() << endl;
  cout << "The peek of the queue after deleting an element " << q.top() << endl;
  cout << "The size of the queue after deleting an element " << q.size() << endl;

  return 0;

}