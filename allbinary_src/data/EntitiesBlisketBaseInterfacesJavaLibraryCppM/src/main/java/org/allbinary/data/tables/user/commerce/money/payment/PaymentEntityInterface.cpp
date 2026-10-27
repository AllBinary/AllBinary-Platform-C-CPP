
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentInterface.h>

      
#include <org/allbinary/data/tables/BasicDataTableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaymentEntityInterface: public BasicDataTableInterface {

    public: virtual std::string getLastId(std::string userName) = 0;

    public: virtual void setDefault(std::string userName, int32_t index) = 0;

    public: virtual PaymentInterface* getDefault(std::string userName) = 0;

    public: virtual BasicArrayList* get(std::string userName) = 0;

    public: virtual void add(std::string userName, PaymentInterface* paymentInterface) = 0;

    public: virtual void remove(std::string userName, int32_t index) = 0;

    public: virtual void insert(BasicArrayList* values) = 0;

};

            

