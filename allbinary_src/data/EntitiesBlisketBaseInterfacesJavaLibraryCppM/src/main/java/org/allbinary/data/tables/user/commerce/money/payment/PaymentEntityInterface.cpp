
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../../../../../../java/lang/Integer.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentInterface.h>

      
#include <org/allbinary/data/tables/BasicDataTableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaymentEntityInterface: public BasicDataTableInterface {

    std::string getLastId(std::string userName)

    void setDefault(std::string userName, Integer index)

    PaymentInterface getDefault(std::string userName)

    Vector get(std::string userName)

    void add(std::string userName, PaymentInterface paymentInterface)

    void remove(std::string userName, Integer index)

    void insert(Vector values)

};

            

