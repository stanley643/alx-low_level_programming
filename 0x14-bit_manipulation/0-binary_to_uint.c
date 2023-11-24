#include"main.h"
#include<stdlib.h>

unsignedintbinary_to_uint(constchar*b)
{
unsignedintresult;

if(b==NULL)
return0;

result=0;

while(*b!='\0')
{
if(*b=='0'||*b=='1')
{
result=result*2+(*b-'0');
b++;

}
else
return0;
}
returnresult;
}
