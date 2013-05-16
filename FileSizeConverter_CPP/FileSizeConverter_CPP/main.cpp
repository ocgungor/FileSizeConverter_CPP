//
//  main.cpp
//  FileSizeConverter_CPP
//
//  Created by Oguzhan Gungor on 24/04/13.
//  Copyright (c) 2013 Oguzhan Gungor. All rights reserved.
//

#include <iostream>
#include "FileSizeConverter.h"
int main(int argc, const char * argv[])
{
    FileSizeConverter *converter = new FileSizeConverter();
    std::cout << converter->convertBytes(100000000000000);
    delete converter;
    
    return EXIT_SUCCESS;
}

