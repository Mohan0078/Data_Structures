// This program illustrates the graph representation of the adjacency list

#include<iostream>
#include<vector>
using namespace std;

vector <int> adj[10];

int main()
{
	int x,y,nodes,edges;
	cout<<"enter number of nodes and edges \n\n";
	cin>>nodes>>edges;
	
	for(int i=0;i<edges;i++)
	{ 
	    cout<<"Enter an edge \n";
		cin>>x>>y;
		
		//for undirected graph
		
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	cout<<"\n\n printing the adjacency list \n";
	
	for(int i=1;i<=nodes;i++)
	{
		cout<<"Adjacency List of node "<<i<<": ";
		
		for(int j=0;j<adj[i].size();++j)
		{
			if(j==adj[i].size()-1)
			cout<<adj[i][j]<<"\n";
			else
			cout<<adj[i][j]<<" -->";
		}
	}
	
	
	return 0;
}
