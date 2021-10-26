// Felix Benjamin Nykjær Mathiassen
// fbnm21@student.aau.dk
// Gruppe B214
// Software

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double run_calculater();
double do_next_op(double, char, double);
void get_op_and_number(char *, double *);

int main(void){
  double tal;
  tal = run_calculater();
  printf("%lf\n", tal );


  return 0;
}

double run_calculater(void){
  double result = 0.0;
  char operator;
  double optno = 0.0;
  get_op_and_number(&operator, &optno);
  printf("%c\n", operator );
  result = do_next_op(result, operator, optno);
  return(result);
}

void get_op_and_number(char *opr, double *opt){
  double holdingnumber;
  char holdingchar;
  printf("\nEnter an operator and a number: ");
  scanf("%c%lf", &holdingchar, &holdingnumber);
  *opr = holdingchar;
  *opt = holdingnumber;
}


double do_next_op(double akk, char op, double optno){
  double holdingnumber;
  switch (op) {
    case '+':
      holdingnumber = akk + optno;
      break;
    case '-':
      holdingnumber = akk - optno;
      break;
    case '*':
      holdingnumber = akk * optno;
      break;
    case '/':
      holdingnumber = akk / optno;
      break;
    case '^':
      holdingnumber = pow(akk, optno);
    break;

  }
  return (holdingnumber);
}
