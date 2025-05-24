#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node (int value) {
      data = value;
      next = NULL;
    }
};

Node* createLinkedList(int arr[], int index, int size, Node* prev)
 {
  if(index == size) {
    return prev;
  }
  Node* temp;
  temp = new Node(arr[index]);
  temp -> next = prev;
  return createLinkedList(arr, index+1, size, temp);
}

int main() {
  Node* head;
  head = NULL;
  int arr[] = { 8,9,6,5,4};
  int size = sizeof(arr) / sizeof(arr[0]);
  head = createLinkedList(arr,0,size,head);

  int x = 3;
  int value = 30;
  Node *temp;
  x--;
  while(x--) {
    temp = temp-> next;
  }
  Node *temp2 = new Node(value);
  temp2->next = temp->next;
  temp->next = temp2;

  // Node* temp = head;
  while(temp != NULL) {
    cout << temp->data<< endl;
    temp= temp->next;
  }

  return 0;
}