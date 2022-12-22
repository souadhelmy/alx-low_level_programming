<<<<<<< HEAD
#include "main.h"                                                                                                                     
                                                                                                                                      
/**                                                                                                                                   
 * cap_string - Capitalizes all words of a string.                                                                                    
 * @str: The string to be capitalized.                                                                                                
 *                                                                                                                                    
 * Return: A pointer to the changed string.                                                                                           
 */                                                                                                                                   
char *cap_string(char *str)                                                                                                           
{                                                                                                                                     
        int index = 0;                                                                                                                
                                                                                                                                      
        while (str[index])                                                                                                            
        {                                                                                                                             
                while (!(str[index] >= 'a' && str[index] <= 'z'))                                                                     
                        index++;                                                                                                      
                                                                                                                                      
                if (str[index - 1] == ' ' ||                                                                                          
                    str[index - 1] == '\t' ||                                                                                         
                    str[index - 1] == '\n' ||                                                                                         
                    str[index - 1] == ',' ||                                                                                          
                    str[index - 1] == ';' ||                                                                                          
                    str[index - 1] == '.' ||                                                                                          
                    str[index - 1] == '!' ||                                                                                          
                    str[index - 1] == '?' ||                                                                                          
                    str[index - 1] == '"' ||                                                                                          
                    str[index - 1] == '(' ||                                                                                          
                    str[index - 1] == ')' ||                                                                                          
                    str[index - 1] == '{' ||                                                                                          
                    str[index - 1] == '}' ||                                                                                          
                    index == 0)                                                                                                       
                        str[index] -= 32;                                                                                             
                                                                                                                                      
                index++;                                                                                                              
        }                                                                                                                             
                                                                                                                                      
        return (str);                                                                                                                 
=======
#include "main.h"

/**
 * cap_string - capitalizes every first letter of a word in a string
 * separators of words are: space, tabulation
 * new line
 * @s: POinter to string
 * Return: Pointer to s
 */
char *cap_string(char *s)
{
	int count;
	count = 0;
  while (s[count] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[count] == ' ' || s[count] == '\t' || s[count] == '\n'
		    || s[count] == ',' || s[count] == ';' || s[count] == '.'
		    || s[count] == '.' || s[count] == '!' || s[count] == '?'
		    || s[count] == '"' || s[count] == '(' || s[count] == ')'
		    || s[count] == '{' || s[count] == '}')
		{
			if (s[count + 1] >= 97 && s[count + 1] <= 122)
			{
				s[count + 1] = s[count + 1] - 32;
			}
		}
		count++;
	}
	return (s);
>>>>>>> aa64f3eddc4502770a735e4d7d8e9172f49a6a39
}
