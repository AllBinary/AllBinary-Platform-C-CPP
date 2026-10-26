
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicStoreFrontsEntity.h"
#include "BasicStoreFrontInterface.h"

class BasicStoreFrontFactory
            : public Object
         {

    private: static BasicStoreFrontFactory instance() { return BasicStoreFrontFactory(); }

    public: static BasicStoreFrontFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: BasicStoreFrontFactory();

                //@Throws(Exception.constructor)
            
    public: BasicStoreFrontInterface getInstance(std::string storeName);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONTFACTORY_H
