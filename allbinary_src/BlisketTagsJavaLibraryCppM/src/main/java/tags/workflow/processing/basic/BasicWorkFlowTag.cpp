
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
        



        #ifndef TAGS_WORKFLOW_PROCESSING_BASIC_BASICWORKFLOWTAG_CPP
        #define TAGS_WORKFLOW_PROCESSING_BASIC_BASICWORKFLOWTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "tags/workflow/processing/basic/BasicWorkFlowTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <tags/StoreWorkFlowTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //and remove the hidden fields

BasicWorkFlowTag::BasicWorkFlowTag() : logUtil(LogUtil::getInstance()){

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(JspTagException.constructor)
            
    auto BasicWorkFlowTag::doStartTag() -> int32_t{

        try {
            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, tagStrings.DO_START_TAG);
    

                                    }
                                
this->getPropertiesHashMap()->put(DynamicObjectData::NAME, "workflows.template.data.BasicStoreWorkFlow");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StoreWorkFlowTag::doStartTag();;
    

                //: 
} catch(Exception& e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    
}

}




        #endif //TAGS_WORKFLOW_PROCESSING_BASIC_BASICWORKFLOWTAG_CPP
