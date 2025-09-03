# DFS stands for Depth first Search, in a graph if there is the

def dfs_iterative(graph, start):
    visited = set()          # keeps track of visited nodes
    stack = [start]          # start node goes in stack first

    while stack:             # loop until stack is empty
        node = stack.pop()   # take the last element (LIFO)

        if node not in visited:
            print(node, end=" ")   # process the node
            visited.add(node)

            # push neighbors to stack
            # reversed() is used to match recursive DFS order
            stack.extend(reversed(graph[node]))


# Example usage

graph = {
    'A': ['B', 'C'],
    'C': ['F'],
    'D': [],
    'E': ['F'],
    'F': []
}

print("DFS traversal (using stack):")
dfs_iterative(graph, 'A')
