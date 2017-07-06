#include <iostream>

using namespace std;


int main()
{int n, a[201][201], s, i, j, z;
    cin>>n>>z;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
        s=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((z==1)&&(i<j)&&(j+i<n+1)){
                s=s+a[i][j];
            }
            if((z==2)&&(i<j)&&(j+i>n+1)){
                s=s+a[i][j];
            }
            if((z==3)&&(i>j)&&(j+i>n+1)){
                s=s+a[i][j];
            }
            if((z==4)&&(i>j)&&(j+i<n+1)){
                s=s+a[i][j];
            }
        }
    }
    cout<<s;

     return 0;
}
