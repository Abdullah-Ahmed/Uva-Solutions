#include <iostream>
#include <stdio.h>
#define loop(i,s,e) for(int i=s;i<=e;i++)
#define space " "
using namespace std;
//my own solution
unsigned long long int a[1000001];
void solve(int n)
{
    long long prev=2,nxt=1,incr=0;
    long long tmp=1;
    a[3]=0,a[4]=1;
    loop(x,5,n)
    {
        a[x]=(a[x-1]+(prev*nxt)),incr++,nxt++;
        if(incr==2) prev=nxt,nxt=prev-1,incr=0;
    }
//cout<<tmp<<endl; tmp=1;
}

int main()
{
    solve(1000001);
    int n;
    scanf("%d",&n);
    while(n>=3)
    {
        printf("%llu\n",a[n]);
        scanf("%d",&n);
    }

    return 0;
}

//another solution
/*
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 1000001
unsigned long long int dp[N];
unsigned long long int sum(int n)
{
    return  (unsigned long long int)n*(n+1)/2;
}
int main()
{
    int i,n;
    for(i=0;i<N;i++)
        dp[i]=0;
    dp[4]=1;
    for(i=5;i<N;i++)
    {
        n = i/2 -1;
        dp[i]=dp[i-1]+2*sum(n)-((!(i&1))*n);
    }
    scanf("%d",&n);
    while(n>=3)
    {
        printf("%llu\n",dp[n]);
        scanf("%d",&n);
    }
    return 0;
}
*/
// my ans in order of n but time limit
// some edit to accept
/*
#include <iostream>
#define loop(i,s,e) for(int i=s;i<=e;i++)
#define space " "
using namespace std;
void solve(int n)
{
   long long prev=2,nxt=1,incr=0;
   long long tmp=1;
   loop(x,5,n){
   tmp+=(prev*nxt),incr++,nxt++;
   if(incr==2) prev=nxt,nxt=prev-1,incr=0;
}
cout<<tmp<<endl; tmp=1;
}

int main()
{
  int n;
  cin>>n;
  while(n){
  if(n<4) cout<<0<<endl;
  else solve(n);
  cin>>n;}
}

*/
/*
#include <iostream>
#include <math.h>
#include <stdio.h>
#define loop(i,start,end) for(int i=start;i<end;i++)
using namespace std;
unsigned long long int addes[1000000],hashz[1000001];
int idx=0;
double temp;
int main()
{
	 int n;
  hashz[0]=hashz[1]=hashz[2]=hashz[3]=0;
   hashz[4]=1;
   loop(i,5,1000001)
   {
   	  n=i/2-1;
      hashz[i]=hashz[i-1]+(2*(n*(n+1)/2))-(!(i%2)*n);
   }

 scanf("%d",&n);
while(n){
cout<<hashz[n]<<"\n";
	scanf("%d",&n);
}
    return 0;
}*/

/*int cnt=0,n;
cin>>n;
while(n){
for(int i=n;i>=3;i--)
	for(int j=i-1;j>=1;j--)
		for(int z=j-1;z>=1;z--)
			if(z+j>i)
				cnt++;//cout<<i<<" "<<j<<" "<<z<<"\n";
cout<<n<<" "<<cnt<<"\n";
cnt=0;cin>>n;
}*/
/*
int prev=1,next=2;
 //loop(i,1,10000000)
 for(long long i=1;i<9000000;i++)
 {
    temp=sqrt(i);
 	if(int(temp)==temp) addes[idx++]=i;//cout<<i<<"---\n";
 	else if(!(i%prev)&&!(i%next)) addes[idx++]=i,prev++,next++;//cout<<i<<" "<<prev++<<" "<<next++<<"****\n";
 }
hashz[0]=hashz[1]=hashz[2]=hashz[3]=0;
 int fz=0,k=1,kz=4;
 loop(i,4,1000000)
 hashz[i]=hashz[i-1]+addes[fz++];//cout<<i<<" "<<hashz[i]<<" "<<addes[i]<<"\n";

 int cnt=0,n;
cin>>n;
while(n){
cout<<hashz[n]<<"\n";
cin>>n;
}
*/
/*
 loop(i,1,1000000)
 {
    temp=sqrt(i);
 	if(int(temp)==temp) addes[idx++]=i;//,cout<<i<<"---\n";
 	else if(!(i%2)&&!(i%3)) addes[idx++]=i;//,cout<<i<<"****\n";
 }
 hashz[0]=hashz[1]=hashz[2]=hashz[3]=0;
 int fz=0,k=1,kz=4;
 loop(i,4,101)
 hashz[i]=hashz[i-1]+k,k+=(kz-2)/2,kz+=2,cout<<i<<" "<<hashz[i]<<"\n";
*/

//calculation idea
/*
int cnt=0,n;
cin>>n;
while(n){
for(int i=n;i>=3;i--)
	for(int j=i-1;j>=1;j--)
		for(int z=j-1;z>=1;z--)
			if(z+j>i)
				cnt++;//cout<<i<<" "<<j<<" "<<z<<"\n";
cout<<n<<" "<<cnt<<"\n";
cnt=0;cin>>n;
}*/


/*
//greedy idea
/*
#include <iostream>
#define loop(i,s,e) for(int i=s;i<=e;i++)
#define space " "
using namespace std;

int main()
{
  int n,cnt=0;
  cin>>n;
  while(n){
{
   int prev=2,nxt=1,incr=0,a[1000];
   long long tmp=1;
   a[4]=1;
   loop(x,5,n){
   tmp+=(prev*nxt),incr++,nxt++;//a[x]=(a[x-1]+(prev*nxt)),
   if(incr==2) prev=nxt,nxt=prev-1,incr=0;
}
cout<<tmp<<endl; tmp=1;
  // cout<<a[n]<<"****\n";

}

  loop(i,1,n)
  loop(j,i+1,n)
  loop(k,j+1,n)
  if(i<k&&j<k&&((i+j)>k)) cnt++;  //cout<<i<<space<<j<<space<<k<<endl,
     cout<<cnt<<endl; cnt=0;
     cin>>n;
     }
    return 0;
}
*/
