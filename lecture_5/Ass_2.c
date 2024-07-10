/*Write C code that manage a small school. The school has 3 classes each class
contains 10 students. Define three arrays for the three classes each one with a
length of 10. Save a random numbers in all array elements to indicate the
students grade. The program will calculate and display the following statistics:
1- Number of passed students
2- Number of Failed students
3- Highest grade
4- Lowest grade
5- Average grade
Knowing that the total grade is from 100 and the minimum passing grade is 50.*/
#include<stdio.h>

int pass_student(int arr_1[],int arr_2[],int arr_3[]);
int failed_student(int arr_1[],int arr_2[],int arr_3[]);
int Highest_grade(int arr_1[],int arr_2[],int arr_3[]);
int lowest_grade(int arr_1[],int arr_2[],int arr_3[]);
int average(int arr_1[],int arr_2[],int arr_3[]);

int main()
{
    int passed,failed,highest,lowest,averages;
    int class_1[10]={90,100,30,50,60,70,85,90,95,65};
    int class_2[10]={20,45,95,93,91,75,60,80,85,99};
    int class_3[10]={10,40,25,100,75,88,69,55,79,89};
   passed=pass_student(class_1,class_2,class_3);
   failed=failed_student(class_1,class_2,class_3);
   highest=Highest_grade(class_1,class_2,class_3);
   lowest=lowest_grade(class_1,class_2,class_3);
   averages=average(class_1,class_2,class_3);
   printf("The number of passed student:%d\n",passed);
   printf("The number of failed student:%d\n",failed);
   printf("The Highest_grade:%d\n",highest);
   printf("The lowest_grade:%d\n",lowest);
   printf("The average is:%d\n",(averages/30));

}
int pass_student(int arr_1[],int arr_2[],int arr_3[])
{
    int pass=0;
    for(int i=0;i<10;i++)
    {
        if(arr_1[i]>=50)
        {
            pass++;
        }
         if(arr_2[i]>=50)
        {
            pass++;
        }
         if(arr_3[i]>=50)
        {
            pass++;
        }
    }
    return pass;
}
int failed_student(int arr_1[],int arr_2[],int arr_3[])
{
    int failed=0;
    for(int i=0;i<10;i++)
    {
        if(arr_1[i]<50)
        {
            failed++;
        }
        if(arr_2[i]<50)
        {
            failed++;
        }
        if(arr_3[i]<50)
        {
            failed++;
        }
    }
    return failed;
}
int Highest_grade(int arr_1[],int arr_2[],int arr_3[])
{
    int max1=arr_1[0],max2=arr_2[0],max3=arr_3[0],max;
    for(int i=0;i<10;i++)
    {
        if(arr_1[i]>max1)
        {
            max1=arr_1[i];
        }
         if(arr_2[i]>max2)
        {
           max2=arr_2[i];
        }
         if(arr_3[i]>max3)
        {
           max3=arr_3[i];
        }
    }
    max=max1>max2&&max1>max3?max1:(max2>max3?max2:max3);
    
    return max;
}
int lowest_grade(int arr_1[],int arr_2[],int arr_3[])
{
    int min1=arr_1[0],min2=arr_2[0],min3=arr_3[0],min;
    for(int i=0;i<10;i++)
    {
         if(arr_1[i]<min1)
        {
            min1=arr_1[i];
        }
          if(arr_2[i]<min2)
        {
            min2=arr_2[i];
        }
         if(arr_3[i]<min3)
        {
           min3=arr_3[i];
        }
    }
    min=min1<min2&&min1<min3?min1:(min2<min3?min2:min3);
    return min;
}
int average(int arr_1[],int arr_2[],int arr_3[])
{  
    int sum=0;
    for(int i=0;i<10;i++)
    {
       sum=sum+arr_1[i]+arr_2[i]+arr_3[i];
    }
    return sum;
}