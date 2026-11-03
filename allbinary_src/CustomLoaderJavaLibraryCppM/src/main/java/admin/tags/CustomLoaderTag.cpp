
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
        



        #ifndef ADMIN_TAGS_CUSTOMLOADERTAG_CPP
        #define ADMIN_TAGS_CUSTOMLOADERTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/CustomLoaderTag.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/CustomLoaderHelperFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CustomLoaderTag::CustomLoaderTag() : logUtil(LogUtil::getInstance()){
}


    auto CustomLoaderTag::setCommand(std::string command) -> void{
this->command= command;
    
}


    auto CustomLoaderTag::setWebappPath(std::string value) -> void{
this->webappPath= value;
    
}


                //@Throws(LicensingException.constructor)
            
    auto CustomLoaderTag::setCustomLoaderWebappPath() -> void{

        try {
            
    Object* anyType = JavaBoxes::toObject((new CustomLoaderHelperFactory())->getInstance(this->propertiesHashMap, pageContext));;
    

    Class* helperClass = anyType->getClass();;
    

    std::vector<Class*> methodParams = 
                                                        {
                                                            this->webappPath.getClass()
                                                        };;
    

    std::vector<Object*> methodArgs = 
                                                        {
                                                            this->webappPath
                                                        };;
    

    Method* setMethod = helperClass->getMethod("setWebappPath", methodParams);;
    
setMethod->invoke(anyType, methodArgs);
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->JSPTAGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "setCustomLoaderWebappPath()", &e);
    

                                    }
                                
}

}


                //@Throws(JspTagException.constructor)
            
    auto CustomLoaderTag::doStartTag() -> int32_t{

        try {
            
                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(true)
                        
                                    {
                                    this->propertiesHashMap= StdUtil::getInstance()->createHashMap();
    

                        if(this->command.compare(allbinary->globals->GLOBALS2->SET) == 0)
                        
                                    {
                                    this->setCustomLoaderWebappPath();
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    

                //: 
} catch(LicensingException& e) 
            {
AbResponseHandler::sendJspTagLicensingRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    
}

                //: 
 catch(Exception& e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    
}

}




        #endif //ADMIN_TAGS_CUSTOMLOADERTAG_CPP
