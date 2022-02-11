#include <stdio.h>

int input_number()
{
  int n;
  printf("Enter any number: \n");
  scanf("%d", &n);
  return n;
}

int is_composite(int n)
{
  for (int i = 2; i <= n/2; i++)
  {
    if (n%i == 0)
    return 1;
  }
  return 0;
}

void output(int n, int isComposite)
{
  if (isComposite)
   printf("%d is a composite \n", n);
  else 
   printf("%d is not a composite number\n", n);
}

int main()
{
  int num = input_number();
  int res = is_composite(num);
  output(num, res);
  return 0;
}