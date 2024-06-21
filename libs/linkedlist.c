#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linkedlist.h"

static Node* _head = NULL;
static Node* _tail = NULL;
static Node* _cur_node = NULL;

bool empty(){
   return _head == NULL;
}

size_t size() {
    size_t count = 0;
    Node* current = _head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

void print(){
    Node* current = _head;
    printf("LinkedList [ ");
    while (current != NULL) {
        printf("%s ", current->data);
        current = current->next;
    }
    printf("]\n");
}

void print_file(FILE* stream){
    Node* current = _head;
    while (current != NULL) {
        fprintf(stream, "%s\n", current->data);
        current = current->next;
    }
}

void clear(){
    Node* current = _head;
    while (current != NULL) {
        Node* next = current->next;
        free(current->data);
        free(current);
        current = next;
    }
    _head = NULL;
    _tail = NULL;
    _cur_node = NULL;
}

Node* append_left(size_t n, char new_data[]){
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = strdup(new_data);
    new_node->next = NULL;
    if (_head == NULL) {
        _head = new_node;
        _tail = new_node;
    } else {
        new_node->next = _head;
        _head = new_node;
    }
    return new_node;
}

Node* append(size_t n, char new_data[]){
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = strdup(new_data);
    new_node->next = NULL;
    if (_head == NULL) {
        _head = new_node;
        _tail = new_node;
    } else {
        _tail->next = new_node;
        _tail = new_node;
    }
    return new_node;
}

Node* _insert_after(Node* cur_node, size_t n, char new_data[]){
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = strdup(new_data);
    new_node->next = NULL;
    if (cur_node == NULL) {
        return append_left(n, new_data);
    } else {
        new_node->next = cur_node->next;
        cur_node->next = new_node;
        if (cur_node == _tail) {
            _tail = new_node;
        }
    }
    return new_node;
}

Node* insert_after(Node* cur_node, Node* new_node){
    if (cur_node == NULL) {
        new_node->next = _head;
        _head = new_node;
        if (_tail == NULL) {
            _tail = new_node;
        }
    } else {
        new_node->next = cur_node->next;
        cur_node->next = new_node;
        if (cur_node == _tail) {
            _tail = new_node;
        }
    }
    return new_node;
}

Node* pop_left(){
    if (_head == NULL) {
        return NULL;
    }
    Node* node = _head;
    _head = _head->next;
    if (_head == NULL) {
        _tail = NULL;
    }
    node->next = NULL;
    return node;
}

Node* pop(){
    if (_head == NULL) {
        return NULL;
    }
    if (_head == _tail) {
        Node* node = _head;
        _head = NULL;
        _tail = NULL;
        return node;
    }
    Node* current = _head;
    while (current->next != _tail) {
        current = current->next;
    }
    Node* node = _tail;
    _tail = current;
    _tail->next = NULL;
    return node;
}

Node* delete_node(Node* cur_node){
    if (cur_node == NULL || _head == NULL) {
        return NULL;
    }
    if (cur_node == _head) {
        return pop_left();
    }
    Node* current = _head;
    while (current->next != NULL && current->next != cur_node) {
        current = current->next;
    }
    if (current->next == NULL) {
        return NULL;
    }
    current->next = cur_node->next;
    if (cur_node == _tail) {
        _tail = current;
    }
    cur_node->next = NULL;
    return cur_node;
}

Node* delete_by_data(char* data){
    if (_head == NULL) {
        return NULL;
    }
    if (strcmp(_head->data, data) == 0) {
        return pop_left();
    }
    Node* current = _head;
    while (current->next != NULL && strcmp(current->next->data, data) != 0) {
        current = current->next;
    }
    if (current->next == NULL) {
        return NULL;
    }
    Node* node = current->next;
    current->next = node->next;
    if (node == _tail) {
        _tail = current;
    }
    node->next = NULL;
    return node;
}

Node* next(){
    if (_cur_node != NULL && _cur_node->next != NULL) {
        _cur_node = _cur_node->next;
    }
    return _cur_node;
}

Node* prev(){
    if (_cur_node == NULL || _cur_node == _head) {
        return _cur_node;
    }
    Node* current = _head;
    while (current != NULL && current->next != _cur_node) {
        current = current->next;
    }
    _cur_node = current;
    return _cur_node;
}

Node* first_node(){
    _cur_node = _head;
    return _cur_node;
}

Node* last_node(){
    _cur_node = _tail;
    return _cur_node;
}

Node* get_node(size_t index){
    Node* current = _head;
    size_t count = 0;
    while (current != NULL) {
        if (count == index) {
            return current;
        }
        count++;
        current = current->next;
    }
    return NULL;
}

