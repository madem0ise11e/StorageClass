//The value of a static variable persists
//until the end of the program.
#include<stdio.h>
void display();

int main()
{
  display();
  display();
}
void display() {
  static int c = 1;
  c+= 5;
  printf("%d  ", c);
}
//During the first function call, the value of c is initialized to 1.
//Its value is increased by 5.
//Now, the value of c is 6, which is printed on the screen.
//During the second function call, c is not initialized to 1 again.
//It's because c is a static variable.
//The value c is increased by 5.
//Now, its value will be 11, which is printed on the screen
