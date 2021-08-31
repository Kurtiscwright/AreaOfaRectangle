#include <stdio.h>

int main() {
    int l, w, ar, pr, fin;

    printf("Enter the length of the rectangle: "); 
    scanf("%d" ,&l); // take input from the user  

    printf("Enter the width of the rectangle: ");  
    scanf("%d" ,&w);   

    ar = l * w; // calculate the area of rectangle.

    pr = 2 * (l + w); // calculate the perimeter of rectangle.  

    printf("\n Area of Rectangle is: %d", ar);  
    
    printf("\n Perimeter of Rectangle is: %d", pr);

    printf("\n enter the number 0 to close the program: ");
    scanf("%d" ,&fin);

    return 0;
}