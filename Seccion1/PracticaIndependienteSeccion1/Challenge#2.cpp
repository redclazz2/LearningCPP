/*Write a program that asks the user for the length and width of their room. Define a constant that represents the
price of carpeting per meter. Compute the price and display the cost of putting a carpet in the room. */
#include <iostream>
using namespace std;
int main()
{
    float length,width,pricePerSquareMeter=0.56,totalPrice;
    
    cout <<"Enter the width of the room: ";
    cin >>width;
    cout <<"Enter the length of the room: ";
    cin >>length;

    totalPrice = (width*length)*pricePerSquareMeter;
    cout<<"The total price is: "<<totalPrice<<" $"<<endl;


    return 0;
}