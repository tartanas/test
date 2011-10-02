//
//  main.cpp
//  test
//
//  Created by SysAdmin on 10/2/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>

int main (int argc, const char * argv[])
{
    std::string szHello = "Hello, world!";
    szHello +=  argv[0];
    // insert code here...
    std::cout << szHello << std::endl;
    return 0;
}

