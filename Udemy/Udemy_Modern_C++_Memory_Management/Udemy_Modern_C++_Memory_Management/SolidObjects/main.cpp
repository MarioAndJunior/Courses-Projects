//
//  main.cpp
//  SolidObjects
//
//  Copyright © 2016 Mattias Johansson. All rights reserved.
//

#include <iostream>
#include "Order.h"

int main(int argc, const char * argv[]) {

    Customer buyer("Mattias");
    
    Order purchase_order(buyer);
    
    std::string summary = purchase_order.print_summary();
    
    std::cout << summary << std::endl;
    
    return 0;
}
