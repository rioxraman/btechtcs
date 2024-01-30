#include <iostream>
using namespace std;
#include "Node.h"

int main()
{
//statically
////
Node n1(1) ;
Node *head = &n1;
Node n2(2);
n1.next = &n2;
cout<< n1.data<<" "<<n2.data<<endl;
Node *n3 =new Node(10);
head = n3;
Node *n4 = new Node (20);
    n3 -> next =n4;
cout << n4;}
