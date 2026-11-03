
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/TransformInfoHttpFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/TransformInfoHttpContext.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpStore.h"


TransformInfoHttpFactory::TransformInfoHttpFactory(){
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoHttpFactory::getInstance(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) -> TransformInfoInterface*{

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            
    WeblisketSession* weblisketSession = new WeblisketSession(propertiesHashMap, pageContext);;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(weblisketSession->getStoreName()))
                        
                                    {
                                    
    StoreFrontInterface* storeFrontInterface = StoreFrontFactory::getInstance(weblisketSession->getStoreName());;
    

                        if(storeFrontInterface != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<TransformInfoInterface*>(new TransformInfoHttpStore(storeFrontInterface, propertiesHashMap, pageContext));
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("No StoreFront with: ") +JavaString::valueOf(weblisketSession->getStoreName()));
                    

                        }
                            

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<TransformInfoInterface*>(new TransformInfoHttpContext(propertiesHashMap, pageContext));
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, "TransformInfoFactory", commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPFACTORY_CPP
