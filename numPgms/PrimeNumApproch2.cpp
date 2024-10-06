//pgm_no:02
//title:prime number( approch 1)
/*
 (num/2) iteration
*/
#include<iostream>
using namespace std;
int main()
{
    int num=7,i;
 for (i = 2; i <=( num/2); i++)
    {
        if (num % i == 0)
        {
            break;
        }
    }

    if (i == (num/2)+1)
    {
        std::cout<<num<<" is a prime number"<<endl;
    }
    else
    {
         std::cout<<num<<" is a prime number"<<endl;
    }

return 0;
}