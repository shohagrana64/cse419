// https://vjudge.net/problem/UVA-11917

#include <iostream>
using namespace std;

int main()
{
    int t,a[1000],day,ex,i,j,k,flag;
    string sub[1000],subject;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        flag=0;
        scanf("%d",&ex);
        for(j=0;j<ex;j++){
            cin>>sub[j];
            cin>>a[j];
        }
            cin>>day>>subject;
            printf("Case %d: ",i);
            for(j=0;j<ex;j++)
            {
                if(subject==sub[j])
                {
                    if(a[j]<=day)
                        printf("Yesss\n");
                    else if(a[j]<=day+5)
                        printf("Late\n");
                    else printf("Do your own homework!\n");
                    flag=1;
                    break;
                }
            }
            if(flag==0)printf("Do your own homework!\n");
    }
    return 0;
}