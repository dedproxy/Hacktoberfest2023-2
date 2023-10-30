int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at,at+n);
    sort(dt,dt+n);

    int plat=1,res=1;
    int i=1,j=0; //i->at,j->dt
    while(i<n &&j<n)
    {
        if(at[i]>dt[j])
        {
          j++; plat--;
        }
        else
        {
          i++; plat++;
        }
       res=max(res,plat);
    }
    return res;
}
