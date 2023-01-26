#include <bits/stdc++.h>
using namespace std;
vector<int> solve(int N, vector<string> command)
{
    int count = 0;
    int temp = 0;
    // for(int i=0;i<N;i++){
    //     if(command[i][0]=='p'){
    //         temp++;
    //     }

    // }
    vector<int> ans;
    int i = 0;
    map<int, pair<string, int>> mp;

    while (N--)
    {
        if (command[i][0] == 'a')
        {
            string useless = "";
            useless += command[i][7];
            pair<string, int> p;
            p.first = useless;
            int k = command[i].size();
            string t = "";
            for (int j = 9; j < k; j++)
            {
                t += command[i][j];
            }
            p.second = stoi(t);
            mp[count] = p;
        }
        else if (command[i][0] == '{')
        {
            count++;
        }
        else if (command[i][0] == 'p')
        {
            if (mp[count].first != to_string(command[i][6]))
            {
                ans.push_back(-1);
            }
            ans.push_back(mp[count].second);
        }
        else if (command[i][0] == '}')
        {
            count--;
        }
        i++;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    vector<string> command(N);
    for (int i_command = 0; i_command < N; i_command++)
    {
        getline(cin, command[i_command]);
    }
    vector<int> out_;
    out_ = solve(N, command);
    cout << out_[0];
    for (int i_out_ = 1; i_out_ < out_.size(); i_out_++)
    {
        if (out_[i_out_] == -1)
        {
            cout << "undefined" << endl;
        }
        else
        {
            cout << out_[i_out_] << endl;
        }
    }
}
