*intersect(N,n,M,m,r)int*N,*M,*r;{int u[1001]={};while(--n>=0)u[N[n]]++;*r=0;while(--m>=0)if(u[M[m]]-->0)N[(*r)++]=M[m];return N;}
