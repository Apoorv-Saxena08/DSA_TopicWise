#include <iostream>
using namespace std;
int n;
void solve(int maze[][20], int i,int j,int sol[][20]){
	if(i==n-1 && j==n-1){ sol[i][j]=1; /* print sol */ sol[i][j]=0; return; }
    if(i<0||j<0||i>=n||j>=n||maze[i][j]==0||sol[i][j]==1) return;
	sol[i][j]=1;
	solve(maze,i+1,j,sol);
	solve(maze,i,j+1,sol);
	solve(maze,i-1,j,sol);
	solve(maze,i,j-1,sol);
	sol[i][j]=0;
}
int main(){ cin>>n; int maze[20][20], sol[20][20]={0}; for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>maze[i][j]; solve(maze,0,0,sol); return 0; }
