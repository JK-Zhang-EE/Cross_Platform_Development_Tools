#include <iostream>

#include "MyTool.h"

int main() 
{
    printf("=== Start Testing ===\n");
    printf("Version: %s\n", MyTool::version.c_str());
    printf("5+7= %d\n", MyTool::getMathAddResult(5, 7));
    printf("5-7= %d\n", MyTool::getMathSubResult(5, 7));
}