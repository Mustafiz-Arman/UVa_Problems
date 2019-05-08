
///*****************************************************///
///*...................................................*///
///*.............MD MUSTAFIZUR RAHMAN ARMAN............*///
///*.........................KUET......................*///
///*...................................................*///
///*****************************************************///

#include<bits/stdc++.h>
typedef long long ll;
#define pb           push_back
#define ff           first
#define ss           second
#define gcd(a, b)    __gcd(a, b)
#define lcm(a, b)    ((a)*((b)/gcd(a,b)))
#define D(x)   	     cerr << __LINE__ << ": " << #x << " = " << (x) << '\n'
#define all(v)       (v.begin(),v.end())
#define intlim       2147483648
#define Pi           2*acos(0.0)
#define mem(a,b)     memset(a, b, sizeof(a))
#define fill_(a,b)   fill(a,a+n,b);
#define MOD          1000000007
#define fast_cin     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    fast_cin;
    int t, cas=1;
    cin>>t;
    while(t--)
    {
        double R1,R2,R3,a,b,c,area, angle1,angle2,angle3, s;
        cin>>R1>>R2>>R3;

        a=R2+R3;
        b=R1+R3;
        c=R2+R1;

        s=(a+b+c)/2;

        area=sqrt(s*(s-a)*(s-b)*(s-c));

       // cout<<area<<endl;

        angle3=acos((a*a+b*b-c*c)/(2.0*a*b));

        angle2=acos((a*a+c*c-b*b)/(2.0*a*c));

        angle1=acos((c*c+b*b-a*a)/(2.0*c*b));

       // cout<<angle3<<" "<<angle2<<" "<<angle1<<endl;

        double total_area=(0.5*R2*R2*angle2)+(0.5*R1*R1*angle1)+((0.5*R3*R3*angle3));

        double ans=area-total_area;

        cout<<setprecision(6)<<fixed<<ans<<endl;

    }


    return 0;
}


