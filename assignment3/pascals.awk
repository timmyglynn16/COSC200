BEGIN{

    {print "Enter number of rows"; getline n}
   

    for(i=0;i< n;i++){
        c=1;
        r=c;
            for(j=0;j<i;j++){
                c*=(i-j)/(j+1);
                r=r" "c 
            };
    print r
    }

 }
