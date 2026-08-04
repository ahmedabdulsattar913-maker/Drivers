#include "Std_Types.h"
#include "../MCAL/DIO_1/DIO_int.h"
#include "../MCAL/LCD_1/LCD_int.h"

int main(void)
{
	DIO_voidInitialization();
	LCD_voidLCDInit();
while(1)
{
LCD_voidSendData('M');
}
return 0;
}
