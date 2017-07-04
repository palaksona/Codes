#include <iostream>
using namespace std()
void display((int *)G,int n,int e);
void accept((int *)G,int n,int e);
int main()
{
    int G[20][20],n,e;
    cout<<"Enter the number of edges and vertexes"<<"\n";
    cin>>e>>n;
    accept(G,n,e);
    display(G,n,e);


}
void accept((int *)G,int n,int e)
{
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
        count<<"Enter the source destination and cost";//Taking the cost and storing
        cin>>src>>dest>>cst;
        G[src][dest]=cst;//Undirected Graph
        G[dest][src]=cst;
    }
}
void display((int *)G,int n,int e)
{
    for(int i=0;i<n;i++)
    {
        cout<<"\n";
        for(int j=0;j<n;j++)
        {
            cout<<"\t"<<G[i][j];
        }
    }
}
