#include <iostream>

using namespace std;

void enqueue(int qu[], int &top, int n, int value, int &front) {
  if (top < n - 1) {  // Check if there is space in the queue
    if (front == -1) {  // If it's the first element being added
        front = 0;
    }
    qu[++top] = value;  // Increment top first and then insert value
  } else {
    cout << "Queue is full" << endl;
  }
}


void dequeue(int qu[], int &front, int &top){
    if (front!=-1 && front<=top){
        cout<<qu[front]<<endl; // first print front value
        qu[front] = 0;
        front++;
        
        if (front>top){
            front = -1;
            top = -1;
        }
    }else{
        cout<<"Qeue is empty"<<endl;
    }
}

void peek(int qu[], int front){
    if (front==-1) return;
    cout<< qu[front]<<endl;
}

void display(int qu[], int front, int top){
    for (int i = front; i<=top; i++){
        cout<<qu[i]<<" ";
    }cout<<endl;
}


int main() {
  int n;
  cout << "Enter the size of the queue: ";
  cin >> n;

  int queue[n];
  int front = -1; // stores the index of first position
  int top = -1; // the index of current top position shoulda named top instead
}
