/* connected components refers to graphs which might seem to be separate graphs but in the question they are given as connected so we count it as one graph*/


// while traversing in connected components the array is initially set to zero, once a particular node is visited it is marked as 1 and then it is not visited the next time

/*
vector<int> vis(n);
for(int i = 1;i < n;i++){
    if(!vis[i]){
        traversal(i);
    }
}
*/