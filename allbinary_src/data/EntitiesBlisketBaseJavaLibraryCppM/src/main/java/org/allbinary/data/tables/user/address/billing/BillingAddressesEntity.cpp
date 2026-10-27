
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_BILLING_BILLINGADDRESSESENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_BILLING_BILLINGADDRESSESENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/address/billing/BillingAddressesEntity.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/data/tables/user/address/StreetAddressesEntity.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BillingAddressesEntity::BillingAddressesEntity(std::string userName) : StreetAddressesEntity(userName){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
setTableName(this->TABLENAME);
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_BILLING_BILLINGADDRESSESENTITY_CPP
