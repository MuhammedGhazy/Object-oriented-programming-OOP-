#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class rectangle
{
private:
    float length;
    float width;

public:
    void Set_Length (float l);
    float Get_Length ();
    void Set_Width(float w);
    float Get_Width ();
    float Calc_Area ();
};
int main()
{

    rectangle box;

    box.Set_Length (40.5);
    box.Set_Width (30.6);
    box.Calc_Area ();
    printf("The Area Is %f\n", (box.Calc_Area ()));

    return 0;
}

void rectangle::Set_Length (float l)
{
        if (l >= 0)
        {
            length = l;
        }
        else
        {
            printf("Error!!, Please Enter Positive Number");
        }
}
float rectangle::Get_Length ()
{
        return (length);
}
void rectangle::Set_Width(float w)
{
        if (w >= 0)
        {
                width = w;
        }
        else
        {
            printf("Error!!, Please Enter Positive Number");
        }
}
float rectangle::Get_Width ()
{
        return (width);
}
float rectangle::Calc_Area ()
{
        return (length * width);
}
