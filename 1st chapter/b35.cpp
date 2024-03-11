//A boat velocity in still water is V km/h, river flow velocity is U km/h
//(U < V). The boat goes along the lake during T1 h and then goes against stream
//of the river during T2 h. Positive numbers V, U, T1, T2 are given. Find the
//distance S covered by the boat (distance = time · velocity). S=T1⋅(V+U)+T2⋅(V−U).
#include<iostream>
using namespace std;
int main(){
    float v = 0, u = 0, t1 = 0, t2 = 0;
    cin>>v>>u>>t1>>t2;
    float s = t1 * (v+u)+t2*(v-u);
    cout<<s;
    
}