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

        int Lenth();

        void printlist();

        T operator[](int i);

    private:
        Node<T> *head, *node, *temp, *tail;
        T _data_;
        int i;
        int lenth;
    };
} //namespace

namespace mystl {
    template<typename T>
    List<T>::List() {
        i = 0;
        lenth = 0;
        head = new Node<T>;
        node = new Node<T>;
        tail = new Node<T>;
    }

    template<typename T>
    List<T>::~List() {
        delete head;
        delete node;
        delete tail;
    }

    template <typename T>
    T List<T>::operator[](int i) {
        Node<T> *node;
        node = head->next;
        int l = 0;
        int *arr = new int[lenth];
        while(node){
            arr[l] = node->data;
            node = node->next;
            l++;
        }
        T temp = arr[i];
        delete[] arr;
        return temp;
    }

    template<typename T>
    int List<T>::Lenth() {
        return lenth;
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
                lenth--;
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
