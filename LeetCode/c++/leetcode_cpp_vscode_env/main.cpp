#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <cstring>
#include "solution.h" 

using namespace std;

//===================================INPUT===================================
vector<int> nums = {2, 7, 11, 15};
int target = 9;
string a = "11";
string b = "1";
// string s = "abcabcbb";
string str = "-+1";

TreeNode* root = stringToTreeNode("[1,2,2,3,3,null,null,4,4]");

vector<vector<int>> matrix = 
{
    {1,1,1},
    {1,0,1},
    {1,1,1}
};

vector<string> emails = 
{
"fg.r.u.uzj+o.pw@kziczvh.com","r.cyo.g+d.h+b.ja@tgsg.z.com","fg.r.u.uzj+o.f.d@kziczvh.com","r.cyo.g+ng.r.iq@tgsg.z.com","fg.r.u.uzj+lp.k@kziczvh.com","r.cyo.g+n.h.e+n.g@tgsg.z.com","fg.r.u.uzj+k+p.j@kziczvh.com","fg.r.u.uzj+w.y+b@kziczvh.com","r.cyo.g+x+d.c+f.t@tgsg.z.com","r.cyo.g+x+t.y.l.i@tgsg.z.com","r.cyo.g+brxxi@tgsg.z.com","r.cyo.g+z+dr.k.u@tgsg.z.com","r.cyo.g+d+l.c.n+g@tgsg.z.com","fg.r.u.uzj+vq.o@kziczvh.com","fg.r.u.uzj+uzq@kziczvh.com","fg.r.u.uzj+mvz@kziczvh.com","fg.r.u.uzj+taj@kziczvh.com","fg.r.u.uzj+fek@kziczvh.com"    
};
long long divend = 214748364823; long long divsor = -3;

//===================================MAIN===================================
int main() 
{
    // debug_assistant_include_tester();
    Solution my_sol;

    my_sol.setZeroes(matrix);
    print_int_vector_vector(matrix);

    // cout << my_sol.setZeroes(matrix);
    
    // string res = my_sol.test();
    // cout << res;
    
    return 0;
}