//
// Created by airy on 2020/11/20.
//

#ifndef PROJECTDEMO_LIST_H
#define PROJECTDEMO_LIST_H
#include <iostream>

namespace mystl {
    template<typename T>
    struct Node {
        Node *next;
        T data;
    };

    template<typename T>
    class List {
    public:
        explicit List();

        ~List();

        void push_back(T _data_);

        void pop(int i);

        void printlist();

        T& operator[](int i);

    private:
        Node<T> *head, *node, *temp, *tail;
        T _data_;
        int i;
        int lenth;
        int *arr;
    };
} //namespace

namespace mystl {
    template<typename T>
    List<T>::List() {
        i = 0;
        head = new Node<T>;
        node = new Node<T>;
        tail = new Node<T>;
        arr = new int[lenth];
    }

    template<typename T>
    List<T>::~List() {
        delete head;
        delete node;
        delete tail;
        delete[] arr;
    }

    template <typename T>
    T& List<T>::operator[](int i) {
        Node<T> *node;
        node = head->next;
        int l = 0;
        while(node){
            arr[l] = node->data;
            node = node->next;
            l++;
        }
        return arr[i];
    }

    template<typename T>
    void List<T>::push_back(T data) {
        _data_ = data;

        temp = new Node<T>;
        temp->data = _data_;
        if (++i == 1) {
            head->next = temp;
        }
        node->next = temp;
        node = temp;
        node->next = tail;
        tail->next = nullptr;
        lenth++;
    }

    template<typename T>
    void List<T>::pop(int i) {
        int l = 0;
        Node<T> *n;
        n = head;
        while (n) {
            if (l == i) {
                Node<T> *pNode;
                pNode = n->next;
                n->next = n->next->next;
                delete pNode;
            }
            n = n->next;
            l++;
        }
    }


    template<typename T>
    void List<T>::printlist() {
        Node<T> *n;
        n = head->next;
        while (n) {
            std::cout << n->data << " ";
            n = n->next;
            if(n->next == nullptr)break;
        }
    }
} //namespace

#endif //PROJECTDEMO_LIST_H
