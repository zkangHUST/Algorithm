//回溯法经典例子，思路参见 blog.csdn.net/ww1473345713/article/details/56849743
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        DFS(res,n,n,"");
        return res;
        
    }
private:
    void DFS(vector<string>& res,int left,int right,string p)
    {
        if(left==0&&right==0)		//左括号和右括号全部使用完了，将p加入解集合
        {
            res.push_back(p);
            return ;
        }
        if(left>0)			//左括号还有剩余，添加左括号
        {
            DFS(res,left-1,right,p+'(');
        }
        if(left<right)				//剩余左括号少于剩余右括号，添加右括号
        {
            DFS(res,left,right-1,p+')');
            
        }
        
    }
};
int main()
{
	class Solution s;
	vector<string> res;
	int n;
	cin>>n;
	res = s.generateParenthesis(n);
	for(int i=0;i!=res.size();i++)
	{
		cout<<res[i];
		cout<<endl;
	}
	return 0;
}
