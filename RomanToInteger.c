#include <stdio.h>
#include <string.h>

int romanToInt(char* s);

int main() {
    char roman[100];
    printf("Enter a Roman numeral: ");
    scanf("%s", roman);
    for(int i = 0; roman[i]; i++) {
        roman[i] = toupper(roman[i]);
    }
    int result = romanToInt(roman);
    printf("The integer value is: %d\n", result);
    return 0;
}

int romanToInt(char* s)
{
    int total = 0; // Initialize total to store the final integer value
    int prev_value = 0; // Initialize prev_value to store the value of the previous Roman numeral
    
    while (*s) // Loop through each character in the string
    {    
        int value = 0; // Initialize value to store the integer value of the current Roman numeral
        
        // Determine the integer value of the current Roman numeral
        switch (*s) 
        {
            case 'I': value = 1; 
            break;
            
            case 'V': value = 5; 
            break;
            
            case 'X': value = 10; 
            break;
            
            case 'L': value = 50; 
            break;
            
            case 'C': value = 100; 
            break;
            
            case 'D': value = 500; 
            break;
            
            case 'M': value = 1000; 
            break;
        }
        
        // If the current value is greater than the previous value, it means we have encountered a subtractive combination
        if (value > prev_value) 
        {
            // Subtract twice the previous value and add the current value to the total
            total += value - 2 * prev_value;
        } 
        else 
        {
            // Otherwise, simply add the current value to the total
            total += value;
        }

        // Update prev_value to the current value for the next iteration
        prev_value = value;
        // Move to the next character in the string
        s++;
    }
    // Return the final total value
    return total;
}

int check(char* s) 
{
    // Check for invalid characters
    while (*s) 
    {
        switch (*s) 
        {
            case 'I': case 'V': case 'X': case 'L': case 'C': case 'D': case 'M':
                s++;
                break;
            default:
                return 0; // Invalid character found
        }
    }
    
    // Check for invalid sequences
    if (strstr(s, "IIII") || strstr(s, "VV") || strstr(s, "XXXX") || 
        strstr(s, "LL") || strstr(s, "CCCC") || strstr(s, "DD") || strstr(s, "MMMM"))
        
        return 0;// Invalid sequence found
    
    // Check for invalid subtractive combinations
    if (strstr(s, "IL") || strstr(s, "IC") || strstr(s, "ID") || strstr(s, "IM") ||
        strstr(s, "VX") || strstr(s, "VL") || strstr(s, "VC") || strstr(s, "VD") || strstr(s, "VM") ||
        strstr(s, "XD") || strstr(s, "XM") ||
        strstr(s, "LC") || strstr(s, "LD") || strstr(s, "LM") ||
        strstr(s, "DM")) 
        
        return 0; // Invalid subtractive combination found
    
    return 1; // All characters and sequences are valid
}