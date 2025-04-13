class vertex :
    def__init__(self, data) :
       self.data = data
       self.adjacent = []

class Graph :
  def__init__(self) :
    self.vertices = []

    def add_vertex(self, vertex_data):
        vertex = Vertex(vertex_data)
        self.vertices.append(vertex)
        return vertex

    def add_vertex(self, src, dest) :
    src = self.find_vertex(src)
    dest = self.find_vertex(dest)
    src.adjacent.append(dest)

    def topological_sort(self) :
    indegress = { var: 0 for v in self.vertices }

    for vertex in self.vertices :
        for neigbor in vertex.adjacent :
            indegrees[neigbor] += 1

            sorted_vertices = []

            for vertex in self.vertices :
                if indegrees[vertex] == 0 :
                    self.topological_sort_util(vertex, sorted_vertices)

                    return sorted_vertices

                    def topological_sort_util(self, vertex, sorted_vertices) :
                    for neighbor in vertex.adjacent :
                        indegrees[neighbor] -= 1
                        if indegrees[neighbor] == 0 :
                            self.topological_sort_util(neighbor, sorted_vertices) :
                            sorted_vertices.append(vertex)

                            def find_path(self, start, end)
                            visited = set()
                            path = []

                            def dfs(vertex) :
                            visited.add(vertex)
                            if vertex == end :
                                return True

                                for neighbor in vertex.adjacent :
                                    if neighbor not in visited :
                                        if dfs(neighbor) :
                                            path.append(vertex.data)
                                            return True
                                return False
                            dfs(start)
                            return path is path else None