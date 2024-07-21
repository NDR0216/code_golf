using V=vector<int>;struct Solution{V intersection(V n,V m){V r,u(2e3);for(auto i:n)u[i]=1;for(auto i:m)if(u[i]-->0)r.push_back(i);return r;}};
