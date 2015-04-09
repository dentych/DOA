#include "GraphToolkit.h"


int main()
{

	// Define graph nodes
	GraphToolkit<char>::Graph graph;
	GraphNode<char>* a = new GraphNode<char>('a');
	GraphNode<char>* b = new GraphNode<char>('b');
	GraphNode<char>* c = new GraphNode<char>('c');
	GraphNode<char>* d = new GraphNode<char>('d');
	GraphNode<char>* e = new GraphNode<char>('e');
	GraphNode<char>* f = new GraphNode<char>('f');
	GraphNode<char>* g = new GraphNode<char>('g');
	GraphNode<char>* h = new GraphNode<char>('h');

	// Connect the nodes with edges
	GraphToolkit<char>::addEdge(a, b, 3);
	GraphToolkit<char>::addEdge(a, d, 1);

	GraphToolkit<char>::addEdge(b, c, 4);
	GraphToolkit<char>::addEdge(b, d, 2);
	GraphToolkit<char>::addEdge(b, e, 3);

	GraphToolkit<char>::addEdge(c, e, 6);
	GraphToolkit<char>::addEdge(c, f, 1);
	GraphToolkit<char>::addEdge(c, g, 2);

	GraphToolkit<char>::addEdge(d, e, 11);

	GraphToolkit<char>::addEdge(e, f, 2);
	GraphToolkit<char>::addEdge(e, h, 1);

	// Add the nodes to a Graph object
	graph.push_back(a);
	graph.push_back(b);
	graph.push_back(c);
	graph.push_back(d);
	graph.push_back(e);
	graph.push_back(f);
	graph.push_back(g);
	graph.push_back(h);

	// Dump the graph
	GraphToolkit<char>::dumpGraph(graph);

	return 0;
}