
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
        



        #ifndef ORG_ALLBINARY_GLOBALS_URLGLOBALSVIEWFACTORY_CPP
        #define ORG_ALLBINARY_GLOBALS_URLGLOBALSVIEWFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/globals/UrlGlobalsViewFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/globals/UrlGlobalsView.h"


UrlGlobalsViewFactory::UrlGlobalsViewFactory(){
}


    auto UrlGlobalsViewFactory::getInstance() -> DomNodeInterface*{

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<DomNodeInterface*>(new UrlGlobalsView());
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->FACTORYERROR))
                        
                                    {
                                    logUtil->put(commonStrings->EXCEPTION, "GlobalsViewFactory", commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_GLOBALS_URLGLOBALSVIEWFACTORY_CPP
