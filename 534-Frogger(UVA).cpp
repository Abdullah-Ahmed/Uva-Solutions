#include <bits/stdc++.h>
#define loop(i,s,e) for(int i = s; i < e ; i++ )
using namespace std;

typedef pair<int ,int> pairz;
typedef pair<float , pairz>doublepair;
pairz a[300];

doublepair edges[300];

double adjlist[300][300];

int n , cnt = 1 ;

float distance(int x,int y,int a, int b)
{
	return sqrt( abs(x-a)*abs(x-a) + abs(y-b)*abs(y-b) ) ;
}

float dist[300][300] ;

void floyd()
{
         loop( i , 0 , n )
             loop (  j , 0 , n )
                 loop ( k , 0 , n )
                    adjlist[j][k]=min(adjlist[j][k],max(adjlist[j][i],adjlist[i][k]));
}

int main()
{

  cin>>n;

  while( n ) {

  int x,y ;
  float mine = 1e9 ; int minidx ;

  loop( i , 0 , n )
{
	cin>>x>>y;

	a[i]=make_pair(x,y);
}

float d;

	loop( i , 0 , n ) {
	loop( j , i+1 , n) adjlist[i][j] = 1e9;
    adjlist[i][i] = 0 ;
    }

loop( i, 0 , n )
loop( j , i+1 , n )
{
   pairz x = a[i] , y = a[j] ;

   d = distance(x.first , x.second , y.first ,y.second);
   edges[i]=doublepair(d,pairz(i,j));
   ( d < mine ) ? mine = d : mine ;

   adjlist[i][j] = adjlist[j][i] = d ;
}

floyd() ;
        printf("Scenario #%d\n",cnt++);
        printf("Frog Distance = %.3lf\n\n",adjlist[0][1]);

cin >> n;

}
    return 0;
}

