#include<stdio.h>
void display();

int n = 5; //global variable

int main()
{
  ++n;
  display();
  return 0;
}

void display()
{
  ++n;
  printf("n = %d", n);
}
//Suppose, a global variable is declared in file1.
//If you try to use that variable in a different file file2,
//the compiler will complain. To solve this problem,
//keyword extern is used in file2 to indicate that
//the external variable is declared in another file
