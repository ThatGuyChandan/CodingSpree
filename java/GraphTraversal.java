import java.util.*;
public class GraphTraversal {
 // BFS function
 public static void bfs(List<List<Integer>> graph, int start) {
 int numNodes = graph.size();
 boolean[] visited = new boolean[numNodes];
 Queue<Integer> queue = new LinkedList<>();
 visited[start] = true;
 queue.add(start);
 while (!queue.isEmpty()) {
 int currentNode = queue.poll();
 System.out.print(currentNode + " ");
 for (int neighbor : graph.get(currentNode)) {
 if (!visited[neighbor]) {
 visited[neighbor] = true;
 queue.add(neighbor);
 }
 }
 }
 }
 // DFS function
 public static void dfs(List<List<Integer>> graph, int start) {
 int numNodes = graph.size();
 boolean[] visited = new boolean[numNodes];
 dfsRecursive(graph, start, visited);
 }
 private static void dfsRecursive(List<List<Integer>> graph, int currentNode, boolean[] visited) {
 visited[currentNode] = true;
 System.out.print(currentNode + " ");
 for (int neighbor : graph.get(currentNode)) {
 if (!visited[neighbor]) {
 dfsRecursive(graph, neighbor, visited);
 }
 }
 }
 public static void main(String[] args) {
 // Example graph represented as an adjacency list
 List<List<Integer>> graph = new ArrayList<>();
 graph.add(Arrays.asList(1, 3)); // Node 0 is connected to nodes 1 and 3
 graph.add(Arrays.asList(0, 2)); // Node 1 is connected to nodes 0 and 2
 graph.add(Arrays.asList(1, 3)); // Node 2 is connected to nodes 1 and 3
 graph.add(Arrays.asList(0, 2)); // Node 3 is connected to nodes 0 and 2
 int startNode = 2; // Starting node for both BFS and DFS
 System.out.println("BFS Traversal:");
 bfs(graph, startNode);
 System.out.println();
 System.out.println("DFS Traversal:");
 dfs(graph, startNode);
 System.out.println();
 }
}
