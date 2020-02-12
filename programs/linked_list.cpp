#include<iostream>
using namespace std;

//Node Structure
struct node
{
   int data;  //For storing actual element
   struct node *next; //Pointer for holding next node
}

int main()
{
  struct node *temp, *mover, *start;
  int n, element;
  
   cout<<"Enter Number of Elements in Linked List : ";
   cin>>n;

   cout<<"Enter First Element : ";
   cin>>element;

   //creating pointer for holding single node
   temp = (struct node*)malloc(sizeof(struct node));
   temp->data = element; 
   temp->next = NULL;
   p = temp;
   start = temp;

   for(int i=1; i<n; i++)
   {
     cin>>element;
     
     temp = (struct node*)malloc(sizeof(struct node));
     temp->data = element; 
     temp->next = NULL;
     p = temp;
     p = p->next;
   }

  return 0;	
}
