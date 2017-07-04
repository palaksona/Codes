#include <iostream>
using namespace std;
class graph
{
	public:
		int G[20][20],n,e;
		int prims();
		int display();
		int accept();
};
int graph::accept()
{
	cout<<"Enter the number of edges and vertices"<<"\n";
    cin>>e>>n;
   for (int i=0;i<n;i++)//Initializing the value
    {
        for(int j=0;j<n;j++)
        {
            G[i][j]=0;
        }
    }
    int src,dest,cst;
    for(int i=0;i<e;i++)
    {
        cout<<"Enter the source destination and cost\n";//Taking the cost and storing
        cin>>src>>dest>>cst;
        G[src-1][dest-1]=cst;//Undirected Graph
        G[dest-1][src-1]=cst;
    }
    return 0;
}
int graph::display()
{
    for(int i=0;i<n;i++)
    {
        cout<<"\n";
        for(int j=0;j<n;j++)
        {
            cout<<"\t"<<G[i][j];
        }
    }
    return 0;
}
int graph::prims()
{
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if (G[i][j]==0)
			{
				G[i][j]=9999;
			}			
		}
	}
	int visited[20];
	int src,total,dest;
	total=0;
	cout<<"\nEnter the source from where to start";
	cin>>src;
	visited[src-1]=1;
	int ee=0;
	while(ee<n-1)
	{
		int min=9999;
		for(int i=0;i<n;i++)
		{
			if(visited[i]==1)
			{
				for(int j=0;j<n;j++)
				{
					if (visited[j]!=1)
					{
						if(min>G[i][j])
						{
							min=G[i][j];
							src=i;
							dest=j;
						}
					}
				}	
			}
		}
	total=total+G[src][dest];//cost of minimum spanning tree
	visited[dest]=1;
	ee++;
	cout<<"\nEdge="<<src+1<<"------>"<<dest+1<<"cost="<<min;
	}
	cout<<"\nTotal cost of spanning tree="<<total;
	return 0;
}
int main()
{
	graph g;
    g.accept();
    g.display();
    g.prims();

}

