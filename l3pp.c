#include<stdio.h>
int main()
{
    int count = 0;
    float sum = 0;
    float high,low;

    while  (1)
    {
        float temp;
        scanf("%f",&temp);
        sum = sum + temp;
        if (temp==-1)
            break;
        if(count==0)
        {
            high = temp;
            low = temp;
        }
        else
        {
            if(high<=temp)
                high = temp;
            else if (low>=temp)
                low = temp;
        }


        count++;
    }

    printf("Total Value: %d\n",count);
    printf("High = %f\n",high);
    printf("Low = %f\n",low);
    printf("Range = %f\n",high-low);
    printf("Average : %.2f\n",sum/count);



    return 0;
}
