
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_BILLING_BILLINGADDRESSESENTITYFACTORY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_BILLING_BILLINGADDRESSESENTITYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/address/billing/BillingAddressesEntityFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tables/user/address/StreetAddressesEntity.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/address/billing/BillingAddressesEntity.h"

auto BillingAddressesEntityFactory::instance_owner() -> BillingAddressesEntityFactory* { static std::unique_ptr<BillingAddressesEntityFactory> value(new BillingAddressesEntityFactory()); return value.get(); }
BillingAddressesEntityFactory* BillingAddressesEntityFactory::instance = BillingAddressesEntityFactory::instance_owner();

    auto BillingAddressesEntityFactory::getInstance() -> BillingAddressesEntityFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BillingAddressesEntityFactory::instance;
    
}


BillingAddressesEntityFactory::BillingAddressesEntityFactory() : logUtil(LogUtil::getInstance()){
}


    auto BillingAddressesEntityFactory::getInstance(std::string userName) -> StreetAddressesEntity*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new BillingAddressesEntity(userName);
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_BILLING_BILLINGADDRESSESENTITYFACTORY_CPP
