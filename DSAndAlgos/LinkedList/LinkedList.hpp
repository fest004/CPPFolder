#pragma once

// #include "Node.hpp"

class LinkedList
{

  private:
  struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
  };

  Node* head;
  Node* tail;

  public:
  LinkedList() : head(nullptr), tail(nullptr) {}

  void insertFront(int value)
  {
    Node* newNode = new Node(value);

    newNode->next = head;

    head = newNode;
  }

  void insertBack(int value)
  {
    Node* newNode = new Node(value);


    for (const auto node : this)
    {
      if (node->next == nullptr)
        node->next = newNode;
    }
    newNode->next = nullptr;
  }


};
