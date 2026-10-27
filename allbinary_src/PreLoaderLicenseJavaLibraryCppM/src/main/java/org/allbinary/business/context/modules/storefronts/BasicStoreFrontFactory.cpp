
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONTFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/context/modules/storefronts/BasicStoreFrontFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/context/modules/storefronts/BasicStoreFrontsEntity.h"
#include "org/allbinary/business/context/modules/storefronts/BasicStoreFrontInterface.h"

auto BasicStoreFrontFactory::instance_owner() -> BasicStoreFrontFactory* { static std::unique_ptr<BasicStoreFrontFactory> value(new BasicStoreFrontFactory()); return value.get(); }
BasicStoreFrontFactory* BasicStoreFrontFactory::instance = BasicStoreFrontFactory::instance_owner();

    auto BasicStoreFrontFactory::getInstance() -> BasicStoreFrontFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicStoreFrontFactory::instance;
    
}


BasicStoreFrontFactory::BasicStoreFrontFactory() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto BasicStoreFrontFactory::getInstance(std::string storeName) -> BasicStoreFrontInterface*{

        try {
            
    BasicStoreFrontsEntity* storeFronts = new BasicStoreFrontsEntity();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return storeFronts->getStoreFrontInterface(storeName);;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->FACTORYERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONTFACTORY_CPP
