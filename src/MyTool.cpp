#include <iostream>

#include <MyTool.h>
#include <MyMath.h>

namespace MyTool
{
    static MyTool::MyMath my_math;

    int getMathAddResult(int x, int y)
    {
        return my_math.add(x, a);
    }

    int getMathSubResult(int x, int y)
    {
        return my_math.sub(x, y);
    }

}