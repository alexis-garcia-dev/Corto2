 #include <stdio.h>


int fibonacci(int n)
{
  if (n>2)
    return fibonacci(n-1) + fibonacci(n-2);
  else if (n==2)
    return 1;
  else if (n==1)       
    return 1;
  else if (n==0)
    return 0;
}

int main()
{
    int num;
    int i;
printf("\nIngrese Numero\n");
scanf("%d",&num);

    for (i=0; i<=num; i++)
    {
      printf("%d\n", fibonacci(i));
    }
 
    
  return 0;
  
}
