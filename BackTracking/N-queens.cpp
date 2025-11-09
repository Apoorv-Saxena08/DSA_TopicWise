#include <iostream>
using namespace std;
bool safe(int board[][10], int r, int c, int n){
	for(int i=0;i<c;i++) if(board[r][i]) return false;
	for(int i=r,j=c;i>=0 && j>=0;i--,j--) if(board[i][j]) return false;
	for(int i=r,j=c;i<n && j>=0;i++,j--) if(board[i][j]) return false;
	return true;
}
bool solveNQ(int board[][10], int c, int n){
	if(c==n) return true;
	for(int i=0;i<n;i++){
    	if(safe(board,i,c,n)){
        	board[i][c]=1;
        	if(solveNQ(board,c+1,n)) return true;
        	board[i][c]=0;
    	}
	}
	return false;
}
