#include <iostream>
#include <vector>
#include "SparseGraph.h"
#include "DenseGraph.h"
#include "ReadGraph.h"
#include "Path.h"
#include "ShortestPath.h"


using namespace std;



int main() {
    vector<int> arr({1,2,3,4,5});
    vector<int>::iterator iter;

    for(iter = arr.begin(); iter !=arr.end(); iter ++)
        cout<<*iter<<endl;

    string filename2 = "testG1.txt";
    SparseGraph g1(13, false);
    ReadGraph<SparseGraph> readGraph1(g1, filename2);
    g1.show();


    DenseGraph g2(13, false);
    ReadGraph<DenseGraph> readGraph2(g2, filename2);
    g2.show();


    string filename = "testG2.txt";
    SparseGraph g = SparseGraph(7, false);
    ReadGraph<SparseGraph> readGraph(g, filename);
    g.show();
    cout<<endl;

    Path<SparseGraph> dfs(g, 0);
    cout<<"DFS : ";
    dfs.showPath(6);

    ShortestPath<SparseGraph> bfs(g,0);
    cout<<"BFS :";
    bfs.showPath(6);


    return 0;
}