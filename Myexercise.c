#include <stdio.h>
int main(){
    int withdrawal;
    int accountBalance = 50000;
    printf("Enter Amount that You want to withdrawal");
    scanf("%d", &withdrawal);
    int accountBalance = accountBalance - withdrawal;
    printf("Your Account Balance is: UGX %d", accountBalance);
     return 0;
}
