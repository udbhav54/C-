#include<bits/stdc++.h>
using namespace std;

// how to create linked List 

class Node {
  public: // easy to access
  int data;
  Node *next;

  Node(int value) {
    data = value; // insertion
    next = NULL;
  }
};

// Insertion of element at end by the help of recursion

Node* CreateLinkedList(int arr[], int index, int size) {
  if(index == size) 
    return NULL;
  
  Node *temp;
  temp = new Node(arr[index]);
  temp ->next = CreateLinkedList(arr,index+1, size);
  return temp;
}

int main() {
  Node *head;
  head = NULL;

  int arr[] = { 7, 8, 9, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  head = CreateLinkedList(arr, 0, size);
  // int arr1[] = {3,9,5,4};
  // int arr[] = {1,2,3,4,5};
  // Node *head;
  // head = new Node(4);

  // cout<< head -> data << endl;
  // cout<<head->next;

  // Insert the Node at beginning

//   Node *head;
//   head = NULL;
//   for(int i =0; i < sizeof(arr); i++) {

//   if(head == NULL) {
//     head = new Node(arr[i]);
//   } else {
//     Node *temp;
//     temp = new Node(arr[i]);
//     temp->next = head;
//     head = temp;
//   }
// }

//  int n = sizeof(arr) / sizeof(arr[0]);

// Insert at end

// Node *head;
// head = NULL;
// Node *tail;
// tail = NULL;

// for(int i = 0; i < 4; i++) {
//   if(head == NULL) {
//     head = new Node(arr1[i]);
//     tail = head;
//   } else {
//     tail -> next = new Node(arr1[i]);
//     tail = tail-> next;
//   }
// }
Node *temp = head ;
while(temp != NULL) {
  cout<< temp-> data << endl;
  temp = temp -> next;
}
  return 0;
}

