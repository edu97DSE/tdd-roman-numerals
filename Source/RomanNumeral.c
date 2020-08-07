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
   char *CharactersArray []= {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
   unsigned DecimalArray []= {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
   unsigned tableSize;

   for(unsigned i = 0; i <= 999; i++)
      {
         output[i] = 0;
      }

   tableSize = sizeof(CharactersArray) / sizeof(char *);
   for(unsigned arrayAddress = 0; arrayAddress < tableSize; arrayAddress++)
      {
         while(input >= DecimalArray[arrayAddress])
            {
               output = Append(output, CharactersArray[arrayAddress]);
               input = (input - DecimalArray[arrayAddress]);
            }  
      }
   
}
