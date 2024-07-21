struct Solution{double averageWaitingTime(vector<vector<int>>c){double s;int t=0;for(auto i:c)t=max(t,i[0])+i[1],s+=t-i[0];return s/c.size();}};
