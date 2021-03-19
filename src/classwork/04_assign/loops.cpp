//cpp
int factorial(int num)
{
    int fact = 1;
    for(int i = 2; i <= num; i++)
    {
        fact = fact * i; 
    }

    return fact;
}