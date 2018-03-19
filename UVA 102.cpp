#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b[9];

    while (scanf("%d%d%d%d%d%d%d%d%d", &b[0], &b[1], &b[2], &b[3], &b[4], &b[5], &b[6], &b[7], &b[8]) == 9)
    {

        int sum[6];

        // BCG
        sum[0] = b[3]+ b[6]+ b[1] + b[4]+ b[2]+ b[8];
        // BGC
        sum[1] = b[3]+ b[6]+ b[1] + b[7]+ b[2]+ b[5];


        // CBG
        sum[2] = b[5]+ b[8]+ b[0]+ b[6]+ b[1] + b[4];
        // CGB
        sum[3] = b[5]+ b[8]+ b[1] + b[7]+ b[0]+ b[3];


        // GBC
        sum[4] = b[4]+ b[7]+ b[0] + b[6]+ b[2]+ b[5];
        // GCB
        sum[5] = b[4]+ b[7]+ b[2] + b[8]+ b[0]+ b[3];


        //
        int mini = sum[0];
        int ind = 0;

        for (int i=1; i<6; i++)
        {
            if (sum[i] < mini)
            {
                mini= sum[i];
                ind = i;
            }
        }

        switch(ind)
        {
        case 0:
            printf("BCG ");
            break;

        case 1:
            printf("BGC ");
            break;

        case 2:
            printf("CBG ");
            break;

        case 3:
            printf("CGB ");
            break;

        case 4:
            printf("GBC ");
            break;

        case 5:
            printf("GCB ");
            break;
        }

        printf("%d\n", mini);
    }

    return 0;

}
