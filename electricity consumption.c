#include <stdio.h>
int main() {
  char customer_name[5][25]; 
  int customer_eb_number[5]; 
  float customer_units_consumed[5]; 
  float customer_bill[5]; 
  for (int l = 0; l < 5; l++) {
    printf("Enter the name of the customer: ");
    scanf("%s", customer_name[l]);
    printf("Enter the EB number of the customer: ");
    scanf("%d", &customer_eb_number[l]);
    printf("Enter the units consumed by the customer: ");
    scanf("%f", &customer_units_consumed[l]);
    customer_bill[l] = 0;
    if (customer_units_consumed[l] <= 100) {
      customer_bill[l] = customer_units_consumed[l] * 0;
    } else if (customer_units_consumed[l] <= 400) {
      customer_bill[l] = 100 * 0 + (customer_units_consumed[l] - 100) * 2.25;
    } else if (customer_units_consumed[l] <= 500) {
      customer_bill[l] = 100 * 0 + 300 * 2.25 + (customer_units_consumed[l] - 400) * 4.50;
    } else if (customer_units_consumed[l] <= 600) {
      customer_bill[l] = 100 * 0 + 300 * 2.25 + 100 * 4.50 + (customer_units_consumed[l] - 500) * 6;
    } else {
      customer_bill[l] = 100 * 0 + 300 * 2.25 + 100 * 4.50 + 100 * 6 + (customer_units_consumed[l] - 600) * 8;
    }
  }
  for (int l = 0; l < 5; l++) {
    printf("Customer name: %s\n", customer_name[l]);
    printf("EB number: %d\n", customer_eb_number[l]);
    printf("Units consumed: %.3f\n", customer_units_consumed[l]);
    printf("Bill: INR %.2f\n", customer_bill[l]);
  }
  return 0;
}