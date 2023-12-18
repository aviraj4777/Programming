def dfs_traversal(graph, start):
    vis = set()
    stack = [start]

    while stack:
        vertex = stack.pop()
        if vertex not in vis:
            vis.add(vertex)
            print(vertex, end=" ")

        #dfs traversal
        for neighbor in reversed(graph[vertex]):
            if neighbor not in vis:
                stack.append(neighbor)
#adjaency list
graph = {
    1: [2, 5],
    2: [1, 3, 5],
    3: [2, 4],
    4: [3, 5,6],
    5: [1,2,4],
    6: [4]
}

# Start DFS from node 1
start_node = 6
print("DFS Traversal:")
dfs_traversal(graph, start_node)