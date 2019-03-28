int calc_1(int firstnumber, int secondnumber, int operator)
{
    int value;
    value=0;
    printf("Options:\n");
    printf("1.Add\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice\n");
    scanf("%d",operator);
        switch(operator)
    {
         case 1:
            value= firstnumber + secondnumber;
            break;

         case 2:
            value= firstnumber - secondnumber;
            break;

         case 3:
            value= firstnumber * secondnumber;
            break;

         case 4:
            value= firstnumber / secondnumber;
            break;

             
    }

    return value;
}
