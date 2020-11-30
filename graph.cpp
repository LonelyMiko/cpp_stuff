// Program C++ pentru a determina arbore parțial de pondere minimă utilizând algoritmul Kruskal

#include<bits/stdc++.h>
using namespace std;

// Se creează o comandă rapidă pentru o pereche întreagă
typedef  pair<int, int> iPair;

// Structură pentru a reprezenta un grafic
struct Graph
{
    int V, E;
    vector< pair<int, iPair> > edges;

    // Constructor
    Graph(int V, int E)
    {
        this->V = V;
        this->E = E;
    }

    // Funcția pentru a adăuga o margine
    void addEdge(int u, int v, int w)
    {
        edges.push_back({w, {u, v}});
    }

    // Funcția de a găsi arbore parțial de pondere minimă
    // folosind Kruskal
    int kruskalMST();
};

// Pentru a reprezenta seturi disjuncte
struct DisjointSets
{
    int *parent, *rnk;
    int n;

    // Constructor.
    DisjointSets(int n)
    {
        // Allocate memory
        this->n = n;
        parent = new int[n+1];
        rnk = new int[n+1];

        // Inițial, toate vârfurile sunt în seturi diferite și au rangul 0
        for (int i = 0; i <= n; i++)
        {
            rnk[i] = 0;

            //fiecare element este părinte
            parent[i] = i;
        }
    }

    //Găsim părintele unui nod „u”
    int find(int u)
    {
        /* Facem parintele nodului din calea
        de la u --> parrent[u] la parent[u]*/
        if (u != parent[u])
            parent[u] = find(parent[u]);
        return parent[u];
    }

    // Unire după rang
    void merge(int x, int y)
    {
        x = find(x), y = find(y);

        /* Facem din copac cu înălțime mai mică
        un subarborel al celuilalt copac  */
        if (rnk[x] > rnk[y])
            parent[y] = x;
        else //  Daca rnk[x] <= rnk[y]
            parent[x] = y;

        if (rnk[x] == rnk[y])
            rnk[y]++;
    }
};

 /* Functia ne returneaza costul arbului*/

int Graph::kruskalMST()
{
    int mst_wt = 0; // Rezultatul initial

    // Sortam marginile în ordine crescătoare pe baza costului
    sort(edges.begin(), edges.end());

    // Create disjoint sets
    DisjointSets ds(V);

    // Iterează prin toate marginile sortate
    vector< pair<int, iPair> >::iterator it;
    for (it=edges.begin(); it!=edges.end(); it++)
    {
        int u = it->second.first;
        int v = it->second.second;

        int set_u = ds.find(u);
        int set_v = ds.find(v);

        // Verificam dacă marginea selectată
        //creează sau nu un ciclu
        //(Ciclul este creat dacă u și v aparțin aceluiași set)
        if (set_u != set_v)
        {
            // Current edge will be in the MST
            // so print it
            cout << u << " , " << v << endl;

            // Update MST weight
            mst_wt += it->first;

            // Merge two sets
            ds.merge(set_u, set_v);
        }
    }

    return mst_wt;
}


int main()
{
    /* V - varfuri, E - margini*/
    int V = 10, E = 29;
    Graph g(V, E);

    //  construim graful
    g.addEdge(0, 1, 1);
    g.addEdge(0, 2, 2);
    g.addEdge(1, 0, 1);
    g.addEdge(1, 2, 3);
    g.addEdge(1, 4, 4);
    g.addEdge(2, 0, 2);
    g.addEdge(2, 1, 3);
    g.addEdge(2, 3, 10);
    g.addEdge(2, 4, 5);
    g.addEdge(2, 5, 6);
    g.addEdge(3, 2, 10);
    g.addEdge(3, 5, 1);
    g.addEdge(4, 1, 4);
    g.addEdge(4, 2, 5);
    g.addEdge(4, 5, 20);
    g.addEdge(4, 6, 5);
    g.addEdge(5, 2, 6);
    g.addEdge(5, 3, 1);
    g.addEdge(5, 4, 20);
    g.addEdge(5, 6, 6);
    g.addEdge(6, 4, 5);
    g.addEdge(6, 5, 6);
    g.addEdge(6, 7, 2);
    g.addEdge(6, 9, 2);
    g.addEdge(7, 6, 2);
    g.addEdge(7, 9, 20);
    g.addEdge(8, 6, 2);
    g.addEdge(9, 6, 5);

    cout << "Marginile arborului parțial de pondere minimă: " << endl;
    int mst_wt = g.kruskalMST();

    //costul arborelui este dat de suma costurilor muchiilor ce formează arborele.
    cout << "\nCostul arborelui:  " << mst_wt;

    return 0;
}
