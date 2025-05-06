#include<bits/stdc++.h>

using namespace std;

class Stack{
    int top;
    int *arr;
    int size;

    public:
      Stack(int n){
        top = -1;
        size = n;
        arr = new int[n];
      }
    void push(int x){
        if(top == size - 1){
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;   
    }
   int pop(){
    int x = top;
    top--;
    return x;
   }
   int Top(){
    return arr[top];
   }
   int Size(){
    return top + 1;
   }

};

int main(){

Stack s(5);
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
  
cout << "Top of stack is before deleting any element " << s.Top() << endl;
  cout << "Size of stack before deleting any element " << s.Size() << endl;
  cout << "The element deleted is " << s.pop() << endl;
  cout << "Size of stack after deleting an element " << s.Size() << endl;
  cout << "Top of stack after deleting an element " << s.Top() << endl;
return 0;

}