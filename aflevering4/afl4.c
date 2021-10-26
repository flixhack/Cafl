#include <stdio.h>
#include <math.h>



int main(void) {
  double root1,
         root2,
         a, b, c;

  printf("\nInput a, b & c: " );
  scanf("%lf%lf%lf\n", &a, &b, &c );

  disciminant = calculateDiscriminant(a, b, c);
    if (discriminant < 0) {
      printf("\nNo roots");
    } else if (discriminant == 0) {
        root1 = calculateRoot_1(a, b, discriminant);
    } else {
      root1 = calculateRoot_1(a, b, discriminant);
      root2 = calculateRoot_2(a, b, discriminant);
    }


  return 0;
}

double calculateDiscriminant(double a, double b, double c){
  double discriminant;
  discriminant = b * b - 4 * a * c;
  return discriminant;
}

double calculateRoot_1(double a, double b, double discriminant){
  double root1;
  if (discriminant == 0) {
    root1 = -b/(2*a);
  } else {
    root1 = (-b + sqrt(discriminant))/(2*a);
  }
  return root1;
}

double calculateRoot_2(double a, double b, double disciminant){
  double root2;
  root2 = (-b - sqrt(discriminant))/(2*a);
  return root2;
}
