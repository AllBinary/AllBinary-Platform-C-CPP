
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_ABCONTEXT_CPP
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_ABCONTEXT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/context/AbContext.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AbContext::AbContext(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Properties HashMap: ") +JavaString::valueOf(propertiesHashMap->toString()), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->propertiesHashMap= propertiesHashMap;
    
this->pageContext= pageContext;
    
}


    auto AbContext::getWeblisketSession() -> WeblisketSessionInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new WeblisketSession(this->propertiesHashMap, pageContext);
    
}


    auto AbContext::getPageContext() -> PageContext*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->pageContext;
    
}


    auto AbContext::getPropertiesHashMap() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->propertiesHashMap;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_ABCONTEXT_CPP
