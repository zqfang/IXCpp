//
// Created by 方卓清 on 2018/11/15.
//

#ifndef GRAPHTHEORY_COMPONET_H
#define GRAPHTHEORY_COMPONET_H

#include <iostream>
#include <cassert>
using namespace std;


template <typename Graph>
class Component{
private:
    Graph &G;
    bool* visited;
    int ccount;
    int* id;

    void dfs(int v){
        visited[v] = true;
        id[v] = ccount;
        typename Graph::adjIterator adj(G,v); // adjIterator 是Graph的一个类型还是成员变量？为了确定是类型，加typename
        for(int i = adj.begin(); !adj.end(); i = adj.next()){
            if(!visited[i])
                dfs(i);
        }
    }

public:
    Component(Graph &graph): G(graph){
        visited = new bool[G.V()];
        ccount = 0;
        id = new int[G.V()];

        for(int i=0; i<G.V(); i++) {
            visited[i] = false;
            id[i] = -1;
        }
        for(int i=0; i< G.V(); i++) {
            if (!visited[i]){
                dfs(i);
                ccount ++;
            }
        }
    }
    ~Component(){
        delete[] visited;
        delete[] id;
    }
    int count(){
        return ccount;
    }

    bool isConnected(int v, int w){
        assert(v>=0 && v <G.V())
        assert(w>=0 && w <G.V())
        return id[v] == id[w];
    }


};




#endif //GRAPHTHEORY_COMPONET_H
