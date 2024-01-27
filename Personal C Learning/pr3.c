#include <stdio.h>
                                       //to use ‘textcolor()’
#include <conio.h>

int main()

{
clrscr();
                                       // set the color of text
textcolor(GREEN);
                                       // message
printf(“\t\t\t“);
cprintf(“\n\n This is GREEN color“);

// set blinking color
textcolor(RED+BLINK);
                                      // message
printf(“\n\n\n\t\t\t“);
cprintf(“\n\ This is BLINKING text“);

getch();

return 0;
}
