#include <stdio.h>

void enqueue(int qu[], int *front, int *end, int value, int n) {
  if ((*end + 1) % n == *front) {
    printf("Queue is full \n");
    return;
  }

  if (*front == -1) {
    *front = *end = 0;
  } else {
    *end = (*end + 1) % n;
  }

  /*
  think (*end + 1) % n ki hm jha insert krne vale the agr vo circle mei hai to
  uski nayi position kya hogi aur vo front ke barabr nhi honi chaiye kuki front
  ki value tabhi increase ho rhi hai jb hm age se elements delete kr rhe hai
  */

  qu[*end] = value;
}

void dequeue(int qu[], int *front, int *end, int n) {
  if (*front == -1 && *end == -1) {
    printf("No the queue is empty");
    return;
  }

  printf("%d\n", qu[*front]);
  qu[*front] = 0;

  if (*front == *end) { // it is when front == end queue is empty again because
                        // in front position we deleted element and end
                        // signifies the last element of the queue
    *front = -1;
    *end = -1;
  } else {
    *front =
        (*front + 1) %
        n; // for circular increment if front is end then it will shift to 0
  }
}

void display(int qu[], int front, int end, int n) {
  if (front == -1) { // Queue is empty
    printf("Queue is empty\n");
    return;
  }
  int tmp = front;
  while (tmp != end) { // while (tmp != (end+1)%n) { coulda used this
    printf("%d ", qu[tmp]);
    tmp = (tmp + 1) % n; // circular increment if the front is last then it will
                         // make it 0 and then 1 and then 2 like this
  }

  printf("%d\n", qu[tmp]);
}

int main() {
  int n;
  scanf("Enter the size of queue %d", &n);

  int queue[n];
  int front = -1;
  int end = -1;
}
