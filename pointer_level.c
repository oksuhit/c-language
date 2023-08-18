main()
{
    int x=5,*p,**q,***r;
    printf("%d\n",x);
    p=&x;
    q=&p;
    r=&q;
    **q=7;
    printf("%d",x);
}

//we cannot do any arithmetic operations with addresses.
