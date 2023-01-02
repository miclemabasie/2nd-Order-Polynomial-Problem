#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    
    
    //    Print some help information about the program
    //    =============================================
    printf("=======================================================================================================\n");
    printf("Help:\n");
    printf("------\n");
    printf("This program is designed to give the solution to a 2nd order Polynomial of the form aX^2 + bX + c = 0\n");
    printf("=======================================================================================================\n");
    double a, b, c, x1, x2;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("\n%lf", &b);
    printf("Enter c: ");
    scanf("\n%lf", &c);

    // Calculate the discriminant
    double discr = (b * b) - (4*a*c);

    // Calculate square root of discr
    discr = sqrt(discr);

    printf("A = %.2lf, B = %.2lf, and C = %.2lf. Discr = %.2lf\n", a, b, c, discr);

    if(discr < 0)
    {
        printf("\n===========================");
        printf("\nThere are no real roots.");
        printf("\n===========================");

    }

    else if(discr > 0)
    {
        printf("\n===========================");
        printf("\nThere are two possible x value.");
        x1 = ((-1 * b) - discr)/(2*a);
        
        x2 = ((-1 * b) + discr) / (2 * a);

        printf("The value for x1: %.3lf\n", x1);
        printf("The value for x2: %.3lf\n", x2);
        printf("\n===========================");

    }
    else if(discr == 0)
    {   
        printf("\n===========================");
        printf("\nOne possible value of x.");
        x1 = (-1 * b) / (2 * a);
        printf("\nThe value of X is %.3lf", x1);
        printf("\n===========================");
    }
    else{
        printf("\n===========================");
        printf("\nThere are no real roots.");
        printf("\n===========================");

    }

   
    return 0;
}
