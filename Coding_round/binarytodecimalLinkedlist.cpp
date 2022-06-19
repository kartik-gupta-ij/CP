#include<stdlib.h>
#include <stdio.h>
#include <cmath>

void create();
void display(int n);
void insert_end();

 
struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;
int main()     
{
  int n;
  scanf("%d",&n);
   for (int i = 0; i < n; ++i)
  {
    insert_end();
  }
  display(n-1);
  return 0;
      
}

void display(int n)
{       int deci=0;
        int count=n;
        struct node *ptr;
        if(start==NULL)
        {
                printf("0");
                return;
        }
        else
        {
                ptr=start;
                
                while(ptr!=NULL)
                {
                        deci=deci+ptr->info*pow(2, count);
                        // printf("\n pp%d ",count );
                        count=count-1;
                        ptr=ptr->next ;
                }
        printf("%d",deci);
            
        }
        
}

void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("nOut of Memory Space:n");
                return;
        }
        scanf("%d",&temp->info );
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
}
