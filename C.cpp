
#include<iostream>
 #include<vector>
 #include<unordered_set>
 #include<queue>
 #include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    unordered_set<int> total_visited;
    vector<int> cities;
    for(int i=1;i<=n;i++){
        if(total_visited.find(i)!=total_visited.end()) continue;
        queue<int> q;
        unordered_set<int> visited;
        q.push(i);
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            if(visited.find(curr)!=visited.end()) continue;
            for(auto ele:adj[curr]){
                if(visited.find(ele)!=visited.end()) continue;
                else {
                    q.push(ele);
                }
            }
            visited.insert(curr);
        }
        if(visited.size()>=1){
            for(auto ele:visited){
                total_visited.insert(ele);
            }
            cities.push_back(visited.size());
        }
    }
    long long int ans = 0;
    for(auto i:cities){
        if(i==0) ans += 0;
        else if(i<=2) ans += 1;
        else{
            long long int temp = (i * (i - 1)) / 2;
            ans += temp;
        }
    }
    cout<<ans-m<<"\n";
    return 0;
}
static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
