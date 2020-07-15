
#include<stdio.h>
int main()
{

    int date,total_expense,income_excluding_bills=100; ///total taka/days
    printf("  What's The Date Today? \n");
    scanf("%d",&date);
    printf("  Remember Total Expense Until Now ? \n \n");
    scanf("%d",&total_expense);
    int ans=(date*income_excluding_bills)-total_expense;
    printf("  Today, Your Total Target is %d Taka \n",ans);
}
