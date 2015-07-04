//
//  main.c
//  MyFirstCProgram
//
//  Created by NP ECE BME Centre on 4/7/15.
//  Copyright (c) 2015 NP ECE BME Centre. All rights reserved.
//

#include <stdio.h>

// Declaration of Function
//void calculateTaxAmount(double income);
void calculateTaxAmount(char *name, double income);

// Main Function
int main(int argc, const char * argv[]) {
    // insert code here...
    /*
    double  alanIncome      =   120000;
    double  vajraIncome     =   130000;
    double  yanbinIncome    =   500000;
    double  roshanIncome    =   20000;
    double  sanatIncome     =   32000;
    
    calculateTaxAmount(alanIncome);
    calculateTaxAmount(vajraIncome);
    calculateTaxAmount(yanbinIncome);
    calculateTaxAmount(roshanIncome);
    calculateTaxAmount(sanatIncome);
     */
    char *name[] = {"Alan", "Vajra", "YanBin", "Roshan", "Sanat"};
    double income[] = {120000, 130000, 500000, 20000, 32000};
    
    for (int index = 0; index < 5; index++){
        calculateTaxAmount(name[index],income[index]);
    }
    
    return 0;
}

// Implementation of Function
/*
void calculateTaxAmount(double income){
    
    float   taxRate     =   0.09;
    
    float   taxAmount   =   income * taxRate;
    
    printf("Tax amount to be paid is %.2f.\n", taxAmount);
    
}
 */

void calculateTaxAmount(char *name, double income){
    
    float   taxRate     =   0.09;
    
    float   taxAmount   =   income * taxRate;
    
    printf("%s's tax amount to be paid is %.2f.\n", name, taxAmount);
    
}
