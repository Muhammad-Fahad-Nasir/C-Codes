#include <stdio.h>
#include <math.h>

int main()
{
    float celsius=0;
    float fehrenhiet=0;
    
    printf("Enter temperature in fehrenhiet :");
    scanf("%f",& fehrenhiet);
    
   celsius = (fehrenhiet-32)*5/9;
    printf("%.1f of fehrenhiet is equal to :%.1f celsius",fehrenhiet,celsius);
    
 
    return 0;
}
 
