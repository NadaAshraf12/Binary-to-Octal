#include <stdio.h>
#include <math.h>

// function prototype
int convert(long long);

int main() {
  long long n;
  printf("Enter a oct number: ");
  scanf("%lld", &n);
  printf("%lld in oct = %d in decimal", n, convert(n));
  return 0;
}

// function definition
int convert(long long n) {
  int dec= 0, i= 0, rem;

  while (n!=0)
    {
    rem = n % 8;
    n /= 8;
    dec += rem * pow(8, i);
    ++i;
    }

  return dec;
}
