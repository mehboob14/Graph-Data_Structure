#include<iostream>
#include<list>
using namespace std;

void addeddge(list<int> list[],int u, int v){
    list[u].push_back(v);
    list[v].push_back(u);

}
void displaylist(list<int> list1[],int v){
         for(int i = 0;i<v;i++){
            cout<<i<<" -> ";
            list<int> :: iterator itr;
            for(itr = list1[i].begin(); itr != list1[i].end(); ++itr)
            {
                cout<<*itr<<",";
            }
            cout<<endl;
         }
}

int main(){
    int v = 6;
      list<int> list[6];
       addeddge(list, 0, 4);
    addeddge(list, 0, 3);
    addeddge(list, 1, 2);
    addeddge(list, 1, 4);
    addeddge(list, 1, 5);
    addeddge(list, 2, 3);
    addeddge(list, 2, 5);
    addeddge(list, 5, 3);
    addeddge(list, 5, 4);

    displaylist(list,v);

    return 0;
}
