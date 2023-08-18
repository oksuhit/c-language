main()
{
    int x;
    printf("enter the value of x: ");
    scanf("%d",&x);
    x>4?printf("x is greater than 4\n"):printf("x is less than 4\n");  //this is performing the line of if else statement.
   //if?        //statement 1        : //statement 2
    getch();

    int z,a=4,b=5;
    a>b?x=a:(x=b);  //use paranthesis for priority of other statement if same variable is used
    printf("%d",x);
    getch();
}

