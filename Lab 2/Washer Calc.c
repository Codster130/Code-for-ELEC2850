#include <stdio.h>

void main()
{
    float innerDiameter, outerDiameter, thickness, density, quantity, shipping;    // declare variables
    printf("Enter the inner diameter of the washer: ");                            // prompt user for inner diameter
    scanf("%f", &innerDiameter);                                                   // store inner diameter in variable
    printf("Enter the outer diameter of the washer: ");                            // prompt user for outer diameter
    scanf("%f", &outerDiameter);                                                   // store outer diameter in variable
    printf("Enter the thickness of the washer: ");                                 // prompt user for thickness
    scanf("%f", &thickness);                                                       // store thickness in variable
    printf("Enter the material density in grams per cubic centimeter: ");          // prompt user for density
    scanf("%f", &density);                                                         // store density in variable
    printf("Enter the quantity of washers: ");                                     // prompt user for quantity
    scanf("%f", &quantity);                                                        // store quantity in variable
    printf("Do you want expedited shipping (1 for yes, 0 for no): ");              // prompt user for shipping preference
    scanf("%f", &shipping);                                                        // store shipping preference in variable
    float outerArea = 0.25 * 3.14159 * (outerDiameter * outerDiameter);            // calculate outer area 1/4 * pi * d^2
    float innerArea = 0.25 * 3.14159 * (innerDiameter * innerDiameter);            // calculate inner area 1/4 * pi * d^2
    float weight = (outerArea - innerArea) * thickness * density;                  // calculate weight of one washer
    float shippingWeight = weight * quantity;                                      // calculate weight of washers ordered
    float shippingCost = shippingWeight * 1.15 / 20;                               // calculate shipping cost
    printf("The shipping weight of the washers is %.2f grams.\n", shippingWeight); // print user the weight of the washers shipped
    if (shipping == 1)
    {                                                                         // if user wants expedited shipping
        shippingCost += 12;                                                   // add $12 to shipping cost
        printf("The shipping cost of the washers is $%.2f.\n", shippingCost); // print user the shipping cost
        printf("Shipping Speed: Expedited\n");                                // print user the shipping speed
    }
    else
    {                                                                         // if user doesn't want expedited shipping
        printf("The shipping cost of the washers is $%.2f.\n", shippingCost); // print user the shipping cost
        printf("Shipping Speed: Standard\n");                                 // print user the shipping speed
    }
}