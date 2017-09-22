// File: JuanRangelJuarezHw2_Task1
// Created by Juan Rangel Juarez on 9/21/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
/*  Structures/Constants */
struct house
{
    int streetNum;
    char streetName[30];
    double price;
};

// Function prototypes
struct house InputHouse();
void PrintHouse(int houseNum, struct house h);
int ComparePrices(struct house h1, struct house h2);

/* Main Program */
int main()
{
    cout<<"Enter info for first house\n";
    struct house firstHouse = InputHouse();
    cout<<"\nEnter info for second house\n";
    struct house secondHouse = InputHouse();

    PrintHouse(1, firstHouse);
    printf("\n\n");
    PrintHouse(2, secondHouse);
    printf("\n\n");

    int comparison = ComparePrices(firstHouse, secondHouse);
    /* Based on comparison value, use a switch
     * statement to display all posibilities:
     * 1) "the first house is cheaper"
     * 2) "the two houses are equally expensive"
     * 3) "the second house is cheaper"
     * 4) "invalid comparison value there must be a bug"
     */
    switch(comparison){
        case 1:
            cout << "the first house is cheaper" << endl;
            break;
        case 2:
            cout << "the two houses are equally expensive" << endl;
            break;
        case 3:
            cout << "the second house is cheaper" << endl;
            break;
        case 4:
            cout << "invalid comparison value there must be a bug" << endl;
            break;
    }

    return 0;
}

/* Function Defenitions */
int ComparePrices(struct house h1, struct house h2)
{
    if(h1.price < h2.price)
    {
        return 1;
    }
    else if(h1.price == h2.price)
    {
        return 2;
    }
    else if(h1.price > h2.price)
    {
        return 3;
    }
    else
    {
        return  4;
    }
}

struct house InputHouse()
{
    house h;
    cout << "Enter the street number: " << endl;
    cin >> h.streetNum;
    cout << "Enter the street name: " << endl;
    cin >> h.streetName;
    cout << "Enter the price: " << endl;
    cin >> h.price;
    return h;
}

void PrintHouse(int houseNum, struct house h)
{
    cout << houseNum << " house at " << h.streetNum << " " << h.streetName << " for " << h.price << endl;
}

