#pragma once
#include "libs.h"
#include "error.h"
#include "student.h"
template <typename T>
class n_list {
public:
    static int size;
    class node {
    public:
        node* next;
        node* prev;
        T info;
        cstudent key;
        node(T info) {
            this->info = info;
            next = nullptr;
            prev = nullptr;
        }
        node() {
            next = nullptr;
            prev = nullptr;
            
        }
        node& operator[](int index) {
            node* temp = head;
            int count = 0;
            while (count != index) {
                count++;
                temp = temp->next;
            }
            return temp;
        }
        node& operator=(node it) {
            next = it.next;
            prev = it.prev;
            info = it.info;
            key.fio = it.key.fio;
            key.rate = it.key.rate;
            key.id = it.key.id;
            return *this;
        }
    };
    class iterator {
    private:
        node* temp;
    public:
        iterator() {
            temp = nullptr;
        }
        iterator(node* the_node) {
            temp = the_node;
        }
        iterator& operator++() {
            try {
                if (size == 0) {
                    throw 3;
                }
            }
            catch (int i) {
                Exception ex(i);
                ex.Print();
            }
            temp = temp->next;
            return *this;
        }
        iterator& operator=(iterator it) {
            temp = it.temp;
            return *this;
        }
        bool operator == (const iterator& it) const
        {
            return (temp == it.temp);
        }
        bool operator!=(const iterator& it) const
        {
            return !(it == *this);
        }
        T& operator*() {
            return temp->info;
        }
        iterator& operator+(int info) {
            int i = 0;
            while (i < info) {
                temp = temp->next;
                i++;
            }
            return *this;
        }
    };
private:
    node* head;
    node* tail;
    iterator* head_iterator;
    iterator* tail_iterator;
public:
    n_list() {
        head = nullptr;
        tail = nullptr;
        head_iterator = nullptr;
        tail_iterator = nullptr;
    }
    int Size() {
        return size;
    }
    void add_front(T info) {
        node* temp = new node(info);
        temp->next = nullptr;
        if (head == nullptr) {
            temp->prev = nullptr;
            tail = temp;
            head = temp;
            head_iterator = new iterator(head);
        }
        else {
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
            tail_iterator = new iterator(tail);
        }
        size++;
    }
    void print() {
        try {
            if (size == 0) {
                throw 3;//empty
            }
        }
        catch (int i) {
            Exception ex(i);
            ex.Print();
            return;
        }
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->info << " " << temp->key << endl;
            temp = temp->next;
        }
    }


    void find(int id) {
        try {
            if (size == 0) {
                throw 3;
            }
        }
        catch (int i) {
            Exception ex(i);
            ex.Print();
            return;
        }
        node* temp = head;
        int fl = 0;
        while (temp != nullptr) {
            if (temp->key.id == id) {
                cout << "FIND: " << temp->info << "   key: " << temp->key;
                fl = 1;
            }
            temp = temp->next;
        }
        if (fl == 0) {
            cout << "There isn't such object in the list";
        }
    }
    node*& operator[](int index) {
        try {
            if (size == 0) {
                throw 3;
            }
        }
        catch (int i) {
            Exception ex(i);
            ex.Print();
        }
        node* temp = head;
        int count = 0;
        while (count != index) {
            count++;
            temp = temp->next;
        }
        return temp;
    }
    iterator& front() {
        try {
            if (size == 0) {
                throw 3;
            }
        }
        catch (int i) {
            Exception ex(i);
            ex.Print();
        }
        return *head_iterator;
    }

    iterator& rear() {
        try {
            if (size == 0) {
                throw 3;
            }
        }
        catch (int i) {
            Exception ex(i);
            ex.Print();
            return;
        }
        return *tail_iterator;
    }
    T remove_front()
    {

        try {
            if (size == 0) {
                throw 3;
            }
        }
        catch (int i) {
            Exception ex(i);
            ex.Print();
        }
        node* node_to_remove = head;
        T return_val = node_to_remove->info;
        head = node_to_remove->next;
        head->prev = 0;
        head_iterator = new iterator(head);

        delete node_to_remove;
        size--;
        return return_val;

    }
    void VSort(n_list<T>& list) {
        try {
            if (size == 0) {
                throw 3;
            }
        }
        catch (int i) {
            Exception ex(i);
            ex.Print();
            return;
        }
        class node* temp = new node();
        int item;
        for (int counter = 1; counter < list.Size(); counter++)
        {
            temp = list[counter];
            item = counter - 1;
            while (item >= 0 && list[item]->key.id < temp->key.id)
            {
                list[item + 1] = list[item];
                list[item] = temp;
                item--;
            }
        }
    }
};
template<typename T>
int n_list<T>::size = 0;