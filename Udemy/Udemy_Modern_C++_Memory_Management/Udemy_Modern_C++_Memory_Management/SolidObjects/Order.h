//
//  Order.h
//  SolidObjects
//
//  Copyright © 2016 Mattias Johansson. All rights reserved.
//

#ifndef Order_h
#define Order_h

#include "Customer.h"

class Order
{
private:
    Customer m_customer;
    
public:
    Order(Customer customer)
    : m_customer(customer)
    {
    }
    
    std::string print_summary()
    {
        return "Order by: " + m_customer.name();
    }
};


#endif /* Order_h */
