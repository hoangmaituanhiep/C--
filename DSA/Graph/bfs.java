import java.util.*;

public class bfs {
    public static void BFS(List<List<Integer>> nodes, int start){
        Queue<Integer> queue = new LinkedList<>();
        boolean[] visited = new boolean[nodes.size()];

        visited[start] = true;
        queue.add(start);

        while(!queue.isEmpty()){
            int node = queue.poll();
            System.out.print(node + " ");

            for (int e:nodes.get(node)){

                if (!visited[e]){

                    visited[e] = true;
                    queue.add(e);
                }
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
        nodes.get(0).add(2);
        nodes.get(1).add(5);
        nodes.get(1).add(4);
        nodes.get(2).add(4);
        nodes.get(2).add(5);
        nodes.get(3).add(5);
        nodes.get(3).add(4);
        nodes.get(4).add(3);
        nodes.get(4).add(0);
        nodes.get(5).add(0);

        BFS(nodes, 0);
    }
}
