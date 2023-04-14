#include<stdio.h>
#include<stdlib.h>

// C program to  creat and display a single linked list

// creating a node
struct node
{
int idata;
struct node *pnextnode;
};

//define new node type and node pointer

typedef struct node nodetype,*nodepointer;

//function to print the data  of the list  from the begining to  end

void printthelist(struct node *pnode)
{
int icountofnode=0;
while(pnode!=NULL)
{
printf("\nvalue of %d node=%d\n",++icountofnode,pnode->idata);
pnode=pnode->pnextnode;
}
}


int main()
{
// head or start pointer

nodepointer phead=NULL;

// creating four nodes

nodepointer pfirstnode=NULL;
nodepointer psecnode=NULL;
nodepointer pthirdnode=NULL;
nodepointer pfournode=NULL;

// allocating 4 nodes in heap

pfirstnode=malloc(sizeof(nodetype));

psecnode=malloc(sizeof(nodetype));

pthirdnode=malloc(sizeof(nodetype));

pfournode=malloc(sizeof(nodetype));

//assigning data and address of next node

pfirstnode->idata=5;
pfirstnode->pnextnode=psecnode;
phead=pfirstnode;		//assigning address of firstnode to head pointer

psecnode->idata=19;
psecnode->pnextnode=pthirdnode;

pthirdnode->idata=6;
pthirdnode->pnextnode=pfournode;

pfournode->idata=15;
pfournode->pnextnode=NULL;

//print the list

printthelist(phead);
return 0;

}



/*output:
value of 1 node=5

value of 2 node=19

value of 3 node=6

value of 4 node=15
*/






