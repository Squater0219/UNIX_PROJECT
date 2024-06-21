#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    int age;
    char name[30];
    struct Node* next;
};
struct Node* head = NULL;

void traverseList(struct Node* header);
void insertNodeAtMiddle(int pos, int age, char* name);
void insertNodeAtFirst(int age, char* name);
void deleteMiddleNode(int pos);
void deleteFirstNode();

int main()
{
    struct Node s0, s1, s2;
    
    scanf("%d %s", &s0.age, s0.name);
    scanf("%d %s", &s1.age, s1.name);
    scanf("%d %s", &s2.age, s2.name);
    s0.next = &s1;
    s1.next = &s2;
    s2.next = NULL;
    head = &s0;
    
    insertNodeAtMiddle(2, 24, "공민중");
    printf("\n");
    traverseList(head);
    deleteMiddleNode(1);
    printf("\n");
    traverseList(head);
    
    return 0;
}

void traverseList(struct Node* header){
    struct Node* temp;
    if (header == NULL) printf("List is empty");
    else{
        temp = header;
        while(temp != NULL){
            printf("My name is %s and i'm %d years old.\n", temp->name, temp->age);
            temp = temp->next;
        }
    }
}

void insertNodeAtMiddle(int pos, int age, char* name){
    struct Node* newNode;
    struct Node* temp;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    
    if(newNode==NULL) printf("Unable to allocate memory.");
    else{
        newNode->age = age;
        strcpy(newNode->name,name);
        newNode->next = NULL;
        temp = head;
        
        for (int i=1; i<pos-1; i++){
            temp = temp->next;
            if (temp==NULL) break;
        }

        if(temp!=NULL){
            newNode->next = temp->next;
            temp->next = newNode;
            printf("Data added succesfully\n");
        }
        else printf("unable");
    }
}


void insertNodeAtFirst(int age, char* name){
    struct Node* newNode;
    struct Node* temp;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    
    if(newNode==NULL){
        printf("Unable to allocate memory.");
        return;
    }
    else{
        newNode->age = age;
        strcpy(newNode->name,name);
        newNode->next = NULL;
        temp = head;

        newNode->next = temp;
        head = newNode;
    }
}

void deleteMiddleNode(int pos){
    struct Node* toDelete, *prevNode;
    if(head==NULL)printf("List is already empty");
    else{
        toDelete = head;
        prevNode = head;

        for (int i=1; i<pos; i++){
            prevNode = toDelete;
            toDelete = toDelete->next;
            if(toDelete==NULL)break;
        }

        if(toDelete!=NULL){
            if(toDelete==head)head = head->next;
            prevNode->next = toDelete->next;
            free(toDelete);
            printf("successfully deleted");
        }
        else printf("invalid position");
    }
    
}
