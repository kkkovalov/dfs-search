#include <iostream>

class Graph{
    public:
        void insert_edges(int from, int to){
            graph_matrix[from][to] = 1;
            graph_matrix[to][from] = 1;
        };
        int dfs_search(int source, int goal){

        };
        void display(){
            for(int i = 0; i < 20; i++){
                for(int j = 0; j < 20; j++){
                    std::cout<<graph_matrix[i][j]<<' ';
                };
                std::cout<<std::endl;
            };
        };
    private:
        int graph_matrix[20][20] = {0};
        void dfs_recursive(int source, int goal, int current){

        }
};

int main(void){
    Graph graph1;
    graph1.insert_edges(1,2);
    graph1.insert_edges(2,6);
    graph1.insert_edges(3,6);
    graph1.insert_edges(5,6);
    graph1.insert_edges(7,13);
    graph1.insert_edges(1,14);
    graph1.insert_edges(13,14);
    graph1.insert_edges(5,13);
    graph1.insert_edges(3,4);
    graph1.insert_edges(4,12);
    graph1.insert_edges(4,8);
    graph1.insert_edges(8,6);
    graph1.insert_edges(8,9);
    graph1.insert_edges(9,10);
    graph1.insert_edges(10,11);
    graph1.display();
}