struct date
{
    int d,m,y;           //no memory is consumed for the definition of structure
};

void main()
{
    struct date today,d1;
    today.d=26;
    today.m=7;
    today.y=2023;

    d1=today;

    printf("enter todays date");
    scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
    printf("date: %d/%d/%d,",d1.d,d1.m,d1.y);
}
