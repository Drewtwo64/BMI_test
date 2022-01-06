//This program takes the integers representing weight in kilograms and height in meters to determine the user's Body Mass Index (BMI) Results.
//This program uses a formula to calculate said results.
//Author: Drew Cameron Wates
//CS 102-03: BMI Calculator
//Last updated: 09/15/2018
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    //Integers for program
    float age = 0.0; //Must be older than 18 and younger than 64 to use the calculator.
    float weight = 0.0; //In kilograms
    float height = 0.0;//In meters
    float BMI = 0.0;
    //This will prompt the user to enter their age.
    printf("Enter your age here.\n");
    scanf("%f", &age);
    //If their age is younger than 18 or older than 64, the user will not be able to progress any further and the program will be terminated.
    if (age < 18 || age > 64)
    {
        printf("BMI value is not appropriate for your age.\n",
        age);
        exit(0);
    }
//This will prompt the user to put in their weight in kilograms and height in meters if their age is between 18 and 64.
    if (age > 18 && age < 64);
    {   
        printf("Enter your weight in kilograms here.\n");
        scanf("%f", &weight);
        printf("Enter your height in meters here.\n");
        scanf("%f", &height);
//The formula that is used to determine the user's BMI results.
        (BMI) = weight / (height * height);
//If else statements that provide the user's BMI based on weight and height.
//This also tells the user that they are underweight, ideal, overweight, or obese based on the results.
        if (BMI <= 18.5)
            printf("Your BMI is %f: Underweight.\n",
            BMI);
        else if (BMI <= 24.9)
            printf("Your BMI is %f: Ideal.\n", BMI);
        else if (BMI <= 29.9)
            printf("Your BMI is %f: Overweight.\n", BMI);
        else
            printf("Your BMI is %f: Obese.\n", BMI);
        return 0;
    }
}