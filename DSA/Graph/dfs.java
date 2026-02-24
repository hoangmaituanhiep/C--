import java.util.*;

public class dfs{
    public static void DFS(int node, boolean[] visited, List<List<Integer>> nodes){
        visited[node] = true;
        System.out.print(node + " ");

        for (int i:nodes.get(node)){
            if (!visited[i]){
                DFS(i, visited, nodes);
            }
        }
    }
    public static void main(String[] args){
        int n = 6;
        List<List<Integer>> nodes = new ArrayList<>();

        for (int i=0; i<n; i++){
            nodes.add(new ArrayList<>());
        }

        nodes.get(0).add(1);
        nodes.get(1).add(2);
        nodes.get(1).add(0);
        nodes.get(2).add(3);
        nodes.get(2).add(4);
        nodes.get(3).add(4);
        nodes.get(4).add(5);
        nodes.get(4).add(0);
        nodes.get(4).add(3);
        nodes.get(5).add(2);
        nodes.get(5).add(1);

        boolean[] visited = new boolean[n];

        DFS(0, visited, nodes);
    }
}