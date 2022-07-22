void main() // inicio do código em c++
{
     TRISA = 0b00000110; // RA1 e RA2 entrada 
     TRISB = 0b00000000; // todos pinos como saida 
     CMCON = 7; // desligando comparadores 
     
while(1) //loop
  {
   if(PORTA.B1 == 0) // se o RA1 for igual a 0 
   {
   PORTB.B0 = 1; // liga o RB0 (led)
   }
   if(PORTA.B2 == 0) // se o RA2 for igual a 0 
   {
   PORTB.B0 = 0; // desliga o RB0 (led)
   }
  }
}