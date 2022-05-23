#include <stdio.h>

main () 
 
{
  
int a, rate, total;
  
printf
    ("\nMENU CARD \nSelect your Food Item \n1.Pizza \n2.Burger \n3.Pasta \n4.French Fries \n5.Sandwich\n");
  
scanf ("%d", &a);
  
switch (a)
    
    {
    
case 1:
    printf ("\nFood Item : Pizza");
    rate = 239;
    total = rate;
    printf ("\nPrice : Rs %d", total);
    break;
    
case 2:
    printf ("\nFood Item : Burger");
    rate = 129;
    total = rate;
    printf ("\nPrice : Rs %d", total);
    break;
    
case 3:
    printf ("\nFood Item : Pasta");
    rate = 179;
    total = rate;
    printf ("\nPrice : Rs %d", total);
    break;
    
case 4:
    printf ("\nFood Item : French Fries");
    rate = 99;
    total = rate;
    printf ("\nPrice : Rs %d", total);
    break;
    
case 5:
    printf ("\nFood Item : Sandwich");
    rate = 149;
    total = rate;
    printf ("\nPrice : Rs %d", total);
    break;
    
default:
    printf ("\nSorry Unavailable...", a);
    break;
    
}
  
return 0;

}

