#include <stdio.h>
int main()
{
    double loan_amount,interest_rate,number_of_years,total_amount,monthly_amount;
    printf ("Enter the loan_amount: ");
    scanf ("%lf", &loan_amount);
    printf ("Enter the interest_rate: ");
    scanf ("%lf", &interest_rate);
    printf ("Enter the number_of_years: ");
    scanf ("%lf", &number_of_years);
    total_amount = loan_amount + loan_amount * interest_rate * number_of_years / 100;
    monthly_amount = total_amount / (number_of_years * 12);

    printf ("Total_amount = %0.2lf\n", total_amount);
    printf ("Monthly_amount = %0.2lf\n", monthly_amount);
    return 0;


}
