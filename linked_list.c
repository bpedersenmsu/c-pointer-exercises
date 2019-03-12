//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

static struct Node {
    int id;
    struct Node* nextNode;
};

struct Node headNode = {1, NULL};
struct Node tailNode = {1, NULL};

void run_linked_list() {
    printf("Running linked list\n");
    if(headNode.nextNode == NULL)
        headNode.nextNode = &tailNode;

    struct Node newNode = {1};
}

void insertNode(struct Node* node){
    struct Node* current = &headNode;
    while (current->nextNode != NULL){
        current == current->nextNode;
    }
    current->nextNode = node;
    current->nextNode->nextNode = NULL;
}