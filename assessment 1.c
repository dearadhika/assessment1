#include <stdio.h>

float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);

int main() {
    int choice;
    float num1, num2;

    printf("---------------------------------MENU---------------------------------\n");

    do {
    
        
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

    
        switch(choice) {
            case 1:
                printf("Enter first numbers: ");
                scanf("%f", &num1);
                
                printf("Enter second numbers: ");
                scanf("%f",&num2);
                
                printf("The Addition of  %.2f and %.2f is: %.2f\n",num1,num2,num1+num2);
                break;
            case 2:
                printf("Enter first numbers: ");
                scanf("%f", &num1);
                
                printf("Enter second numbers: ");
                scanf("%f",&num2);
            
                printf("The Substraction of %f  and %.2f is: %.2f\n",num1,num2,num1-num2);
                
                break;
            case 3:
                printf("Enter first numbers: ");
                scanf("%f", &num1);
                
                printf("Enter second numbers: ");
                scanf("%f",&num2);
            
                printf("The Multiplication of %.2f  and %.2f is: %.2f\n",num1,num2,num1*num2);
                break;
            case 4:
                printf("Enter first numbers: ");
                scanf("%f", &num1);
                
                printf("Enter second numbers: ");
                scanf("%f",&num2);
                
                if (num2 == 0) {
                    printf("Error! Division by zero\n");
                } else {
    
                     printf("The Division of %.2f  and %.2f is : %.2f\n",num1,num2,num1/num2);
                }
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please choose again.\n");
        }
    } 
	
	while(choice != 5);
}



