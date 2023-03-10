#include <stdio.h>
#include <math.h>

 int main()
 {
     double loan_amount,interest_rate,years;
     printf("Enter Loan Amount= ");
     scanf("%lf",&loan_amount);
     printf("Enter interest rate= ");
     scanf("%lf",&interest_rate);
     printf("Enter Year= ");
     scanf("%lf",&years);
     double interest=interest_rate/100;
     double total_amount=loan_amount*pow((1+interest),years);
     double monthly_amount=total_amount/(years*12);
     double yearly_amount=total_amount/years;
     double compound_interest=total_amount-loan_amount;
     printf("Total Amount=%.2lf\n",total_amount);
     printf("Monthly Amount=%.2lf\n",monthly_amount);
     printf("Yearly Amount=%.2lf\n",yearly_amount);
     printf("Compound Interest=%.2lf",compound_interest);


     return 0;
 }
