#include <iostream>

using namespace std;

bool isEmpty(int top) { return top == -1; }

bool isFull(int top, int size) { return top == size - 1; }

void display(int arr_cp[], int top) {
  for (int i = top; i >=0; i--) {
    cout << arr_cp[i] << " ";
  }
  
  // we need to see from top to bottom
  cout << endl;
}

int peek(int top, int arr[]) { return arr[top]; }

void push(int arr_add[], int &top_var, int value, int size) {
  if (size - 1 > top_var ) {
    top_var++; 
    arr_add[top_var] = value;
  } else {
    cout << "stack is full" << endl;
  }
}

void pop(int arr_org[], int &top_var){
    if (top_var==-1){
        cout<<"Empty stack"<<endl;
        return;
    }
    
    cout<<arr_org[top_var]<<endl;
    arr_org[top_var] = 0;
    top_var --;
}

int main() {
  int n;
  cout << "Enter the size of the stack: ";
  cin >> n;
  int stack[n];
  
  int top = -1; // top element index if empty -1
  
  push(stack, top, 10, n);
}
