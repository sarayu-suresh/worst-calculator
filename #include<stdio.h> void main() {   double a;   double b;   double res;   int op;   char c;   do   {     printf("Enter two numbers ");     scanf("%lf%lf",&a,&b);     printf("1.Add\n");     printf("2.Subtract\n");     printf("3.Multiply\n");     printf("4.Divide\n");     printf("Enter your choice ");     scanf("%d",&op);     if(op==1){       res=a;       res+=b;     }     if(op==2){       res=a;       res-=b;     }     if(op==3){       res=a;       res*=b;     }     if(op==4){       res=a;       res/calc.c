#include<stdio.h>
void main()
{
  double a;
  double b;
  double res;
  int op;
  char c;
  do
  {
    printf("Enter two numbers ");
    scanf("%lf%lf",&a,&b);
    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    printf("Enter your choice ");
    scanf("%d",&op);
    if(op==1){
      res=a;
      res+=b;
    }
    if(op==2){
      res=a;
      res-=b;
    }
    if(op==3){
      res=a;
      res*=b;
    }
    if(op==4){
      res=a;
      res/=b;
    }
    if(op!=1 && op!=2 && op!=3 && op!=4){
      printf("invalid");
    }
    if(op==1){
      printf("%lf is sum",res);
    }
    if(op==2){
      printf("%lf is difference",res);
    }
    if(op==3){
      printf("%lf is product",res);
    }
    if(op==4){
      printf("%lf is quotient",res);
    }
    printf("\nDo you want to continue? ");
    scanf(" %c",&c);
  } while (c=='y'||c=='Y');
  
}
