
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
        



        #ifndef ADMIN_TAGS_BASICTEXTEMAILTAG_CPP
        #define ADMIN_TAGS_BASICTEXTEMAILTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/BasicTextEmailTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/BasicTextEmailHelperFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <tags/CustomTagSupport.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BasicTextEmailTag::BasicTextEmailTag() : logUtil(LogUtil::getInstance()){
}


    auto BasicTextEmailTag::setSubject(std::string value) -> void{
this->subject= value;
    
}


    auto BasicTextEmailTag::setBody(std::string value) -> void{
this->body= value;
    
}


    auto BasicTextEmailTag::send() -> std::string{

        try {
            
    HashMap<Object*, Object*>* propertiesHashMap = StdUtil::getInstance()->createHashMap();;
    
propertiesHashMap->put("Subject", this->subject);
    
propertiesHashMap->put("Body", this->body);
    

    Object* anyType = JavaBoxes::toObject((new BasicTextEmailHelperFactory())->getInstance(propertiesHashMap, this->pageContext));;
    

    Method* method = anyType->getClass()->getMethod("send", 
                            nullptr);;
    
method->invoke(anyType, 
                            nullptr);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Email Sent";
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to Send Email.";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "send()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


                //@Throws(JspTagException.constructor)
            
    auto BasicTextEmailTag::doStartTag() -> int32_t{

        try {
            this->pageContext->getOut()->print(this->send());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    

                //: 
} catch(Exception& e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    
}

}




        #endif //ADMIN_TAGS_BASICTEXTEMAILTAG_CPP
