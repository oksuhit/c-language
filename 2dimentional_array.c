main()
{
    int a[6];                       //[0,1,2,3,4,5]
    int b[2][3];  //both are same     [0,1,2][0,1,2]
    //why use this type of structure for array
    //suppose we want to save students information of class-1 and class-2
    //lets take an example of matrix addition
    int A[3][3],B[3][3],C[3][3],i,j;
    printf("enter 9 numbers for first matrix");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&A[i][j]);
        printf("enter 9 numbers for second matrix");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&B[i][j]);
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
    {
        C[i][j]=A[i][j]+B[i][j];
        printf("%d",C[i][j]);
    }
    printf("\n");
    }

}
