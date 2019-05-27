#include "pair.h"
#include "PairString.h"
#include <vector>
#include <algorithm>

using namespace std;

int main()

{
    Pair<char*, char*> p1, p2, p3;
    vector< < Pair<char*, char*> > ::iterator it;
    vector<Pair<char*, char*> > v;
    cin >> p1 >> p2 >> p3;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    sort(v.begin(), v.end());
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << endl;

}
