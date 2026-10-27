
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

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tables/user/address/StreetAddressesEntity.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/address/billing/BillingAddressesEntity.h"

class BillingAddressesEntityFactory
            : public Object
         {

    private: static BillingAddressesEntityFactory* instance() { static std::unique_ptr<BillingAddressesEntityFactory> value(new BillingAddressesEntityFactory()); return value.get(); }

    public: static BillingAddressesEntityFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BillingAddressesEntityFactory::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

private: BillingAddressesEntityFactory(){
}


    public: StreetAddressesEntity* getInstance(std::string userName){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BillingAddressesEntity(userName);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

