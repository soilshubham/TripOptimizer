#include "MyForm.h"
#include "About.h"
#include <vector>
#include<string>
#include <windows.h>
#include <conio.h>
using namespace std;

using namespace System;
using namespace System::Windows::Forms;

#define V 5
#define INF INT_MAX


void ExitWhenLastWindowClosed(Object^ sender, FormClosedEventArgs^ e) {
    if (Application::OpenForms->Count == 0) Application::Exit();
    else Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(ExitWhenLastWindowClosed);
}


vector<int> in;

vector<string> cities{ "Agra", "Delhi", "Mumbai", "Jaipur", "Chennai" };

int minCost = 0;
bool visited[V] = { false };
int graph[V][V];

int minimumCostSimplePath(int u, int destination)
{
    // check if we find the destination
    // then further cost will be 0
    if (u == destination) {
        return 0;
    }

    // marking the current node as visited
    visited[u] = true;

    int ans = INF;

    // traverse through all
    // the adjacent nodes
    for (int i = 0; i < V; i++)
    {
        if (graph[u][i] != INF && !visited[i])
        {

            // cost of the further path
            int curr = minimumCostSimplePath(i,
                destination);

            // check if we have reached the destination
            if (curr < INF)
            {

                // Taking the minimum cost path
                ans = min(ans, graph[u][i] + curr);
                in.push_back(i);
            }
        }
    }

    // unmarking the current node
    // to make it available for other
    // simple paths
    visited[u] = false;

    // returning the minimum cost
    return ans;
}

[STAThreadAttribute]
int main()
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            graph[i][j] = INF;
        }
    }

    // initialising the edges;
    graph[0][1] = 400;
    graph[0][3] = 200;
    graph[1][2] = 70;
    graph[2][0] = 150;
    graph[3][2] = 650;
    graph[4][3] = 490;

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    FirstGUIApp::MyForm^ first = gcnew FirstGUIApp::MyForm();
    first->FormClosed += gcnew FormClosedEventHandler(ExitWhenLastWindowClosed);
    first->Show();
    Application::Run();

    return 0;
}



