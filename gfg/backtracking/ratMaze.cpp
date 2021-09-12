/*
bool maze[N][N] , sol[N][N]={0};

bool isSafe(int i , int j){
    return (i<N && j<N && maze[i][j]==1);
}
bool solveMaze(){
    if(maze(0,0) == false)
        return false;
    else{
        printMat(sol);
        return true;
    }
}
bool Maze(int i , int j){
    if(i==N-1 && j == N-1){
        sol[i][j] = 1;
        return true;
    }
    if(isSafe(i,j)==true){
        sol[i][j] = 1;
        if(Maze(i+1,j) == true)
            return true;
        else if(Maze(i,j+1)==true)
            return true;
        sol[i][j] = 0
    }
    return false;
}

*/
