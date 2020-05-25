#include<iostream>

using namespace std;

bool A[10][10];

void initialize()
{
	for(int i=0;i<10;i++)
    {
    	for(int j=0;j<10;j++)
    	A[i][j] = false;
	}
}

int main()
{
	int x,y,nodes,edges;
	initialize();
	cin>>nodes;
	cin>>edges;
	
	for(int i=0;i<edges;i++)
	{
		cin>>x>>y;
		
		// for undirected graph
		A[x][y] = true;
		A[y][x] = true;
	}
 
 
 while(1)
 {
 	cout<<"To stop this process enter -1 -1 \n\n";
 	cout<<"=====================================\n\n";
     cout<<"Enter a edge to check \n";
	 
	 cin>>x>>y;
	 
	 if(x==-1&&y==-1)
	 break;
	 if(A[x][y]==true)
	 cout<<"Edge present in the graph \n";
	 else
	 cout<<"Edge not present \n";	
 }

}
