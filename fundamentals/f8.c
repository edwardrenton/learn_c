#include <stdio.h>

int main(void)
{
  float loanAmount, interestRate, mthlyPayment;

  printf("Enter amount of loan: ");
  scanf("%f", &loanAmount);

  printf("Enter interest rate: ");
  scanf("%f", &interestRate);

  printf("Enter monthly repayment: ");
  scanf("%f", &mthlyPayment);

  float mthlyInterestRate = interestRate / 12.0f / 100.0f;

  float bal1Mth, bal2Mth, bal3Mth;

  bal1Mth = loanAmount * (1 + mthlyInterestRate) - mthlyPayment;
  bal2Mth = bal1Mth * (1 + mthlyInterestRate) - mthlyPayment;
  bal3Mth = bal2Mth * (1 + mthlyInterestRate) - mthlyPayment;

  printf("Balance remaining after 1 payment: %.2f\n", bal1Mth);
  printf("Balance remaining after 2 payments: %.2f\n", bal2Mth);
  printf("Balance remaining after 3 payments: %.2f\n", bal3Mth);
}