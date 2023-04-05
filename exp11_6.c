#include <stdio.h>
struct student
{
    char name[30];
    int id;
    float percentage;

}pos1, stud[3] = {{"vivek", 135, 89},
             {"het", 151, 90},
             {"sahil", 46, 91}};
;

struct student printper()
{
    int i;
    float max = 0;
    // stud[0].
    //(stud+2)->
    //(*(stud+2)).percentage
    for (i = 0; i < 3; i++)
    {
        // printf("# %f\n",max);
        // printf("##%f\n",(stud + i)->percentage);
        if ((stud + i)->percentage > max)
        {
            max = (stud + i)->percentage;
        }
        pos1=stud[i];
    }
    return pos1;
}
int main()
{
    pos1 = printper();

    printf("%s\n", pos1.name);
    printf("%d\n", pos1.id);
    printf("%f\n", pos1.percentage);
    
    return 0;
}