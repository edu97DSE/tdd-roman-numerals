/*!
 * @file
 * @brief Generates Roman Numerals from
 */

#include <stdio.h>
#include "RomanNumeral.h"

static char * Append(char *output, const char *toAppend)
{
   return output + sprintf(output, "%s", toAppend);
}
void RomanNumeral_Convert(unsigned input, char *output)
{
   int i, hundreds, tens, units;
   i = 0;
   hundreds = (input / 100) % 10;
   tens = (input - (hundreds*100)) / 10;
   units = (input - (hundreds*100 + tens*10));
   for(i = 0; i <=100; i++)
      {
         output[i] = '\0';
      }
   switch (hundreds)
      {
      case 1: 
         *output = 'C';
         output++;
         break;
      default: 
         break;
      }

   switch (tens)
      {
         case 1:
            *output = 'X';
            output++;
            break;
         case 2:
            *output = 'X';
            output++;
            *output = 'X';
            output++;
            break;
         case 3:
            *output = 'X';
            output++;
            *output = 'X';
            output++;
            *output = 'X';
            output++;
            break;
         case 4:
            *output = 'X';
            output++;
            *output = 'L';
            output++;
            break;
         case 5: printf ("L"); 
            *output = 'L';
            output++;
            break;
         case 6: 
            *output = 'L';
            output++;
            *output = 'X';
            output++;
            break;
         case 7:
            *output = 'L';
            output++;
            *output = 'X';
            output++;
            *output = 'X';
            output++;
            break;
         case 8:
            *output = 'L';
            output++;
            *output = 'X';
            output++;
            *output = 'X';
            output++;
            *output = 'X';
            output++;
            break;
         case 9:
            *output = 'X';
            output++;
            *output = 'C';
            output++;
            break;

         default: 
            break; 
      }

   switch (units) 
      {
         case 1:
            *output = 'I';
            break;
         case 2:
            *output = 'I';
            output++;
            *output = 'I';
            break;
         case 3:
            *output = 'I';
            output++;
            *output = 'I';
            output++;
            *output = 'I';
            break;
         case 4: 
            *output = 'I';
            output++;
            *output = 'V';
            break;
         case 5:
            *output = 'V';
            break;
         case 6:
            *output = 'V';
            output++;
            *output = 'I';
            break;
         case 7:
            *output = 'V';
            output++;
            *output = 'I';
            output++;
            *output = 'I';
            break;
         case 8:
            *output = 'V';
            output++;
            *output = 'I';
            output++;
            *output = 'I';
            output++;
            *output = 'I';
            break;
         case 9:
            *output = 'I';
            output++;
            *output = 'X';
            break;
         default: 
            break;
      }
}
