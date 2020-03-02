
#include <iostream> 
#include <set> 
#include<tuple>
#include<math.h>
#include<vector>
# define M_PI           3.14159265358979323846  
#define vi vector < int >
#define pii pair < int , int >
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define foreach(it,v) for( __typeof((v).begin())it = (v).begin() ; it != (v).end() ; it++ )
#define ll long long
#define llu unsigned long long
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define all(x) x.begin(),x.end()
#define mset(x,v) memset(x, v, sizeof(x))
#define sz(x) (int)x.size()
#define BLK 340
using namespace std;
float slope(float x1,float y1,float x2,float y2)
{
    return ((float)(y2-y1))/(x2-x1);
}
double degree(float radian)
{
    return ((float)radian * 180)/M_PI;
}
 int main()
 {
     double r1,r2,d,tempn1,tempn2;
     int n1,n2;
     double temp1,temp2;
     tuple <int,int> circ1,circ2,B,C,A; 
     cin>>r1;cin>>r2;
     cin>>d;cin>>n1;
     cin>>n2;
     double dist,q,w;
     q=n1;w=n2;
     if(n1==0)
     n1=1;
     if(n2==0)
     n2=1;
    temp1=(((float)(2*M_PI*r1))/4)*n1;
    temp2=(((float)(2*M_PI*r2))/4)*n2;
    // cout<<temp1<<" "<<temp2<<endl;
    double startx1=0.0,starty1=0.0;
    double endx1=0.0,endy1=0.0;
    double startx2=0.0,starty2=0.0;
    double endx2=0.0,endy2=0.0;
    if(q==0)
    n1=0;
    if(w==0)
    n2=0;
    tempn1=n1%4;
    tempn2=n2%4;
    endx1=startx1+temp1;
    endx2=startx2+temp2;
    circ1=make_tuple(endx1,0);
    circ2=make_tuple(endx2,0);
    if(tempn1==1){
    circ1=make_tuple(get<0>(circ1)-r1,r1);
    }
    else if(tempn1==2)
    circ1=make_tuple(get<0>(circ1),2*r1);
    else if (tempn1==3)
    circ1=make_tuple(get<0>(circ1)+r1,r1);
    C=make_tuple(get<0>(circ2),2*r2);
    B=make_tuple(get<0>(circ2),0);
    if(tempn1==1)
    {
        B=make_tuple(get<0>(circ2)-r2,r2);
        C=make_tuple(get<0>(circ2)+r2,r2);
    }
    else if(tempn2==2)
    {
        B=make_tuple(get<0>(circ2),2*r2);
        C=make_tuple(get<0>(circ2),0);
    }
    else if(tempn2==3)
    {
        B=make_tuple(get<0>(circ2)+r2,r2);
        C=make_tuple(get<0>(circ2)-r2,r2);
    }
    A=circ1;
    double m1,m2,value,angle;
    if(get<0>(B)-get<0>(A)!=0&&get<0>(C)-get<0>(A)!=0)
        {
            m1=slope(get<0>(A),get<1>(A),get<0>(B),get<1>(B));
            m2=slope(get<0>(A),get<1>(A),get<0>(C),get<1>(C));
        }
    else
    {
        m1=slope(get<0>(B),get<1>(B),get<0>(A),get<1>(A));
        m2=slope(get<0>(C),get<1>(C),get<0>(A),get<1>(A));
    }
    value=abs(((float)(m2-m1))/(1+m1*m2));
    angle=degree(atan(value));
    printf("%.6f",angle);


     return 0;
 }