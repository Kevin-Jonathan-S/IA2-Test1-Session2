#include<stdio.h>
#include<math.h>

void input(float *b, float *h)
{
  printf("Enter the base of the triangle\n");
  scanf("%f", b);
  printf("Enter the height of the triangle\n");
  scanf("%f", h);
}

void find_area(float b, float h, float *area)
{
  *area= (b*h)/2;
}

void output(float b, float h, float area)
{
  printf(" The area of triangle with base %f and height %f is %f\n",b,h,area);
}

int main()
{
  float b,h,area;
  input(&b,&h);
  find_area(b,h,&area);
  output(b,h,area);
  return 0;
}