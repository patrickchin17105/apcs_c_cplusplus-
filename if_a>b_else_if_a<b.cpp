#include <iostream>

using namespace std;

int
main ()
{
  int a, b;
  printf ("please input a number : \n");
  scanf ("%d", &a);
  printf ("please input another number : \n");
  scanf ("%d", &b);

  if (a > b)
    {
      printf ("a > b \n");
    }

  else if (a < b)
    {
      printf ("a < b \n");
    }
  cout << "Hello World";

  return 0;
}
