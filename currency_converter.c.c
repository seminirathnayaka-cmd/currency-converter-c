#include <stdio.h>

/*
This is a Currency Converter program.
Conversion rates are assumed for educational purposes only.
*/

// Function to show currency menu
void ShowMenu()
{
    printf("\n Choose only one Currency : \n");

    printf("1.USD\n"); // US dollars
    printf("2.EUR\n"); // EUROS
    printf("3.INR\n"); // INDIA Rupees
    printf("4.KRW\n"); // KOREAN Won
}

// Function to Convert currency using IF-ELSE
float ConvertCurrency(float LKRamount , int choice)
{
    float result;
    if (choice == 1)
    {
        result = LKRamount/300; // USD

    }else if (choice == 2)
    {
        result = LKRamount/330; // EUR

    }else if (choice == 3)
    {
        result = LKRamount/3.6; // INDIAN Rupees

    }else if (choice == 4)
    {
        result = LKRamount/0.23; // KOREAN Won
    }else
    {
        result = 0; // invalid option .
    } return result ;
}



int main()
{
    // Variables
    float LKR;               // Stores amount in Sri Lankan Rupees
    float convertedAmount;   // Stores converted currency amount
    int option;              // Stores currency choice
    char again;              // Stores repeat choice

    // INTRO message for USER
    printf("=== This is a Currency Converter ===\n");
    printf("This program converts Sri Lankan Rupees (LKR) into USD, EUR, INR, and Korean Won.\n");
    printf("Conversion rates are assumed only for this project.\n\n");

    do
    {
        // Ask user to enter the amount
        printf("Enter the amount (LKR): ");
        scanf("%f", &LKR);

        ShowMenu(); // Display the currency menu

        // Ask user to choose currency
        printf("Enter your choice: ");
        scanf("%d", &option);

        // Call function to convert currency
        convertedAmount = ConvertCurrency(LKR, option);

        // Display result
        if (convertedAmount != 0)
        {
            printf("Converted amount:RS. %.2f\n", convertedAmount);
        }
        else
        {
            printf("Invalid choice!\n");
        }

        // Ask user whether to repeat the program
        printf("\nDo you want to convert again? (y/n): ");
        scanf(" %c", &again); // Space before %c avoids input issues

    } while (again == 'y' || again == 'Y'); // user can use simple or capital letter

    return 0;


    
}



