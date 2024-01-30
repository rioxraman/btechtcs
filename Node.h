//
// Created by user on 1/30/2024.
//

#ifndef LLCD_NODE_H
#define LLCD_NODE_H


class Node {
public:
    int data;
    Node *next;

    Node(int data){
        this ->data =data;
        next=NULL;
    }

};


#endif //LLCD_NODE_H
