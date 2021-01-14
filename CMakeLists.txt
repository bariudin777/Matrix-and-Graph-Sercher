cmake_minimum_required(VERSION 3.13)
project(ex4)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_FLAGS -pthread)

add_executable(ex4 main.cpp Server.h CacheManager.h MatrixFileCacheManager.cpp MatrixFileCacheManager.h
        ClientHandler.h MySerialServer.cpp MySerialServer.h MyClientHandler.h
        StringReverser.h Solver.h State.h Position.h Matrix.cpp Matrix.h Searchable.h SearchSolution.cpp SearchSolution.h
        BFS.h DFS.h BestFirstSearch.cpp BestFirstSearch.h Searcher.h Problem.h CostComparator.h
        MyTestClientHandler.h FileCacheManager.cpp FileCacheManager.h BaseCacheManager.h
        MyParallelServer.cpp MyParallelServer.h Heuristic.h ManhattanDistance.h AStar.h)