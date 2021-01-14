


#include "Server.h"
#include "Problem.h"
#include "Searchable.h"
#include "StringReverser.h"
#include "FileCacheManager.h"
#include "MyTestClientHandler.h"
#include "MySerialServer.h"
#include "MyParallelServer.h"
#include <iostream>
#include <chrono>
#include "MyClientHandler.h"
#include "BestFirstSearch.h"
#include "AStar.h"
#include "ManhattanDistance.h"
#include "BFS.h"
#include "DFS.h"

#define FILENAME "fileCacheManager.txt"

using namespace std;



using namespace server_side;

int main(int argc, char **argv) {
    int port = stoi(argv[1]);
    Server *serv = new MyParallelServer();
    Searcher<Position> *searcher = new DFS<Position>();
    string fileName = FILENAME;
    auto *fcm = new FileCacheManager<string, string>(fileName);
    auto *s = new MyClientHandler<Position>(searcher, fcm);
    serv->open(port, s);
    serv->stop(port);

    delete serv;
    delete searcher;
    delete fcm;
    delete s;


    return 0;
}


