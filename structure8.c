#include<stdio.h>
struct demo
{
    int data;
  struct hello
  {
    int no;
    float f;
  }hobj;
 
    
    
};

int main()
{
  
struct demo dobj;
dobj.data = 11;
dobj.hobj.no = 21;
dobj.hobj.f = 90.99;
printf("%d\n",dobj.data);
printf("%d\n",sizeof(dobj.data));



    return 0;
}