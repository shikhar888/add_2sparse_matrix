#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l=0,n,m;
	cout<<"enter r and c\n";
	cin>>n>>m;
	int a[n][m];
	int cnt=0;
	cout<<"enter matrix 1\n";
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]!=0)
			{
			    cnt++;
			}
		}	
    }
	int b[cnt][3];
	if(cnt>(n*m)/2)
	{
		cout<<"not a sparse matrix";
	}
	else
	{
	    cout<<"sparse matrix\n\n";
	    for(i=0;i<n;i++)
	    {
		    for(j=0;j<m;j++)
	    	{
		    	if(a[i][j]!=0 && l<cnt) 
			    {
			        k=0;
			        b[l][k]=i+1;
			        b[l][k+1]=j+1;
			        b[l][k+2]=a[i][j];
			        l++;
		        } 
		    }
	    }
        cout<<"sparse matrix 1 is:\n";
	    for(i=0;i<cnt;i++)
	    {
	    	for(j=0;j<3;j++)
		    {
			    cout<<b[i][j]<<" ";
		    }
		    cout<<"\n";
	    }
    }
	int n2,m2;
	cout<<"\nenter r and c for matrix 2\n ";
	cin>>n2>>m2;
	int d[n2][m2];
    int cnt2=0;
	cout<<"enter matrix 2\n";
	for(i=0;i<n2;i++)
	{
	    for(j=0;j<m2;j++)
		{
			cin>>d[i][j];
			if(d[i][j]!=0)
			{
			    cnt2++;
			}
		}	
    }
    int l2=0,k2;
	int c[cnt2][3];
	if(cnt2>(n*m)/2)
	{
		cout<<"not a sparse matrix";
	}
	else
	{
	    cout<<"sparse matrix\n\n";
	    for(i=0;i<n2;i++)
	    {
		    for(j=0;j<m2;j++)
		    {
			    if(d[i][j]!=0 && l2<cnt) 
			    {
			        k2=0;
			        c[l2][k2]=i+1;
			        c[l2][k2+1]=j+1;
			        c[l2][k2+2]=d[i][j];
		     	    l2++;
			    }
		    }
	    }
        cout<<"sparse matrix 1 is:\n";
	    for(i=0;i<cnt2;i++)
	    {
		    for(j=0;j<3;j++)
		    {
			    cout<<c[i][j]<<" ";
		    }
		    cout<<"\n";
	    } 
    }
    if(cnt != cnt2)
    {
    	cout<<"they cant be added as they are of different sizes";
	}
	else
	{
		int e[cnt][3];
		for(i=0;i<cnt;i++)
		{
			for(j=0;j<3;j++)
			{
				e[i][j]=b[i][j]+c[i][j];
			}
		}
		cout<<"\nadded matrix is\n";
		for(i=0;i<cnt;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<e[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}
