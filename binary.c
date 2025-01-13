#include <stdio.h>
void fun(int n)
{
  if (n == 0)
    return;

  printf("%d", n % 2);
  fun(n / 2);
}
int main() {    
    fun(35)  ;
    return 0;
}

/*
110001
*/
