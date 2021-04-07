#include <iostream>
#include <cstdio>
#include <algorithm>
#include <utility>
#include <map>
#define MAX 100100
using namespace std;

pair<int, pair<int, int> > v[MAX];

int main(){
    int n, cases, x;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> n >> x;
        for (int j = 0; j < n; j++) {
            cin >> v[j].second.second;
            v[j].second.first = j;
            v[j].first = (v[j].second.second + x - 1) / x;
        }
        sort(v, v+n);
        printf("Case #%d:", i+1);
        for (int j = 0; j < n; j++) {
            printf(" %d", v[j].second.first+1);
        }
        printf("\n");
    }
    return 0;
}