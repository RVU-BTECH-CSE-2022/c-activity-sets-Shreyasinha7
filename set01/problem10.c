#include<stdio.h>
int main()
{
  int a=0,b=0;
  char str[10];
  char var[10];
  printf("Enter the 1st string:");
  scanf("%s",&str);

  printf("Enter the 2nd string:");
  scanf("%s",&var);

  printf("The length of the string str[] is :");
   for(int i=0;str[i]!='\0';i++)
    {
      a++;
    }
    printf("%d\n",a);
  
  printf("The length of the string var[] is :");
  for (int i=0;var[i]!='\0';i++)
    {
      b++;
    }
    printf("%d\n",b);
  
  if(a>b){
    printf("length of str[10] is greater than var[10]:\n");
  }
  else if(b>a)
  {
    printf("length of var[10] is greater than str[10]:\n");
 }
}
