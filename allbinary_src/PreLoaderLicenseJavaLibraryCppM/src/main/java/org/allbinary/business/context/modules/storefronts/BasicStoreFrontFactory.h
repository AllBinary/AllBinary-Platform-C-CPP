
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONTFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONTFACTORY_H

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

class BasicStoreFrontFactory
            : public Object
         {

    private: static BasicStoreFrontFactory* instance() { static std::unique_ptr<BasicStoreFrontFactory> value(new BasicStoreFrontFactory()); return value.get(); }

    public: static BasicStoreFrontFactory* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

private: BasicStoreFrontFactory();

                //@Throws(Exception.constructor)
            
    public: BasicStoreFrontInterface* getInstance(std::string storeName);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONTFACTORY_H
