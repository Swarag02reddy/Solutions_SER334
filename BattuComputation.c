/**
* Getting the number of cylinders and 
* finding the total area for the number of cylinders for
* the radius and heights provided by the user.
*
* Completion time: (estimation of hours spent on this program)
*
* @author (Swarag Reddy Battu), Base code provided in the assignment module provided in canvas
* @version C language.
*/
////////////////////////////////////////////////////////////////////////////////
//INCLUDES
#include <stdio.h>
int main(void)
{
    //Add a prompt for the number of cylinders to sum. Make sure to use thecontrol
    //symbol for integers. [2 points]
    int n42;
    printf("enter the number of cylinders\n");
    scanf("%d",&n42);
    //Create a loop based on the number of cylinders the user enters. [2 points]
    // Within the loop, prompt for height and radius parameters (allowfloating
    // point numbers), and calculate the volume for that particular cylinder.
    // [4 points]
    int i42;
    float tot_ar42=0;
    
    for(i42=0;i42<n42;i42++){
        float h42,r42,area42=0;
        printf("enter the height of cylinder %d\n",i42);
        scanf("%f",&h42);
        printf("enter the radius of cylinder %d\n",i42);
        scanf("%f",&r42);
        area42=3.141*r42*r42*h42;
        tot_ar42=tot_ar42+area42;
    }
    //Display the total volume sum back to the user. Make sure to use the rightcontrol
    //symbol. [2 points]
    printf("total area of %d cylinders is %f\n2",i42,tot_ar42);
    return 0;
}