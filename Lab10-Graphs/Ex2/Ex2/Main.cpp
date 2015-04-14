#include <iostream>
#include "GraphToolkit.h"

using namespace std;

char main() {
	GraphToolkit<char> gt;
	vector<GraphNode<char>*> graph;
	GraphNode<char> *a = new GraphNode<char>('A');
	GraphNode<char> *b = new GraphNode<char>('B');
	GraphNode<char> *c = new GraphNode<char>('C');
	GraphNode<char> *d = new GraphNode<char>('D');
	GraphNode<char> *e = new GraphNode<char>('E');
	GraphNode<char> *f = new GraphNode<char>('F');
	GraphNode<char> *g = new GraphNode<char>('G');
	GraphNode<char> *h = new GraphNode<char>('H');

	gt.addEdge(a, b, 4);
	gt.addEdge(a, d, 7);
	gt.addEdge(b, d, 2);
	gt.addEdge(b, c, 1);
	gt.addEdge(b, e, 7);
	gt.addEdge(c, g, 9);
	gt.addEdge(c, e, 6);
	gt.addEdge(e, f, 2);
	gt.addEdge(f, e, 1);
	gt.addEdge(h, e, 4);

	graph.push_back(a);
	graph.push_back(b);
	graph.push_back(c);
	graph.push_back(d);
	graph.push_back(e);
	graph.push_back(f);
	graph.push_back(g);
	graph.push_back(h);

	gt.dumpGraph(graph);

	gt.alco(graph);
}