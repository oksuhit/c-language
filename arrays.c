main()
{
    int a[10],i,sum=0;
    //int a[];   error
    //int a[5];  correct
    //int a[5]={9,6,8,0,2}; correct
    float avg;

    printf("enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        sum = sum +a[i];
    avg=sum/10.0;
    printf("avg is %f",avg);
    getch();
}
