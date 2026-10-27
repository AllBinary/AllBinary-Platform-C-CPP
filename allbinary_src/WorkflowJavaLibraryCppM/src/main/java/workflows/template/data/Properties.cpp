
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
        



        #ifndef WORKFLOWS_TEMPLATE_DATA_PROPERTIES_CPP
        #define WORKFLOWS_TEMPLATE_DATA_PROPERTIES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "workflows/template/data/Properties.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/tagext/TagSupport.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

Properties::Properties() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("Start/Tag", this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->propertiesHashMap= StdUtil::getInstance()->createHashMap();
    
}


    auto Properties::getPropertiesHashMap() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->propertiesHashMap;
    
}


    auto Properties::doEndTag() -> int32_t{

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("Tag Ended", this, "doEndTag");
    

                                    }
                                
this->propertiesHashMap= StdUtil::getInstance()->createHashMap();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TagSupport::EVAL_PAGE;
    
}




        #endif //WORKFLOWS_TEMPLATE_DATA_PROPERTIES_CPP
