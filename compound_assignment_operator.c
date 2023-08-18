main()
{
    int x=5;
    x+=4;      //if we write x=x+4, here + will have first priority and = next
    x*=3;      // if x=5, x=x*3+4 is 19   but x*=3+4 is x*=7 i.e 35
    x%=2;
}
