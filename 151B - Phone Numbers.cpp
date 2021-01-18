#include<bits/stdc++.h>
using namespace std;
#define ll long long
string Cat(string s)
{
    ll l = s.length();
    ll prev = s[0];
    bool check1 = true;
    for(ll i = 1; i<l; i++)
    {
        if(s[i]=='-')
            continue;
        else if(s[i]!=prev)
        {
            check1 = false;
            break;
        }
        
    }
    if(check1)
    {
        return "taxi";
    }
    else
    {
        prev = s[0]-'0';
        bool check = true;
        for(ll i = 1; i<l; i++)
        {
            if(s[i]=='-')
                continue;
            else if((s[i]-'0')>=prev)
            {
                check = false;
                break;
            }
            else
            {
                prev = s[i]-'0';
            }
        }
        if(check)
        {
            return "pizza";
        }
        else
        {
            return "girl";
        }
    }
}
int main()
{
    ll n;
    cin>>n;
    ll maxp = INT_MIN,maxg = INT_MIN, maxt = INT_MIN;
    ll pizza[n] = {0};
    ll girl[n] = {0};
    ll taxi[n] = {0};
    string names[n];
    for(ll i = 0; i<n; i++)
    {
        ll no;
        cin>>no;
        cin>>names[i];
        for(ll j = 0; j<no; j++)
        {
            string temp;
            cin>>temp;
            string ct = Cat(temp);
            if(ct=="taxi")
            {
                taxi[i]++;
            }
            else if(ct=="girl")
            {
                girl[i]++;
            }
            else
            {
                pizza[i]++;
            }
        }
        maxp = max(maxp,pizza[i]);
        maxg = max(maxg,girl[i]);
        maxt = max(maxt,taxi[i]);

    }
    vector<string>taxi_list;
    vector<string>pizza_list;
    vector<string>girl_list;
    for(ll i = 0; i<n; i++)
    {
        if(taxi[i]==maxt)
        {
            taxi_list.push_back(names[i]);
        }
    }
    for(ll i = 0; i<n; i++)
    {
        if(pizza[i]==maxp)
        {
            pizza_list.push_back(names[i]);
        }
    }
    for(ll i = 0; i<n; i++)
    {
        if(girl[i]==maxg)
        {
            girl_list.push_back(names[i]);
        }
    }
    cout<<"If you want to call a taxi, you should call: ";
    for(ll i = 0; i<taxi_list.size()-1; i++)
    {
        cout<<taxi_list[i]<<", ";
    }
    cout<<taxi_list[taxi_list.size()-1]<<"."<<endl;
    cout<<"If you want to order a pizza, you should call: ";
    for(ll i = 0; i<pizza_list.size()-1; i++)
    {
        cout<<pizza_list[i]<<", ";
    }
    cout<<pizza_list[pizza_list.size()-1]<<"."<<endl;
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    for(ll i = 0; i<girl_list.size()-1; i++)
    {
        cout<<girl_list[i]<<", ";
    }
    cout<<girl_list[girl_list.size()-1]<<"."<<endl;
    return 0;
}
