
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
        



        #ifndef ADMIN_TAGS_STOREFRONTTAG_CPP
        #define ADMIN_TAGS_STOREFRONTTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/StoreFrontTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/StoreFrontHelperFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

StoreFrontTag::StoreFrontTag() : logUtil(LogUtil::getInstance()){
}


    auto StoreFrontTag::setCommand(std::string command) -> void{
this->command= command;
    
}


    auto StoreFrontTag::setStoreName(std::string value) -> void{
this->storeName= value;
    
}


                //@Throws(LicensingException.constructor)
            
    auto StoreFrontTag::getCurrentLocation() -> std::string{

        try {
            
    Object* anyType = (new StoreFrontHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext);;
    

    Method* method = anyType->getClass()->getMethod("getCurrentLocation", 
                            nullptr);;
    

    std::string result = method->invoke(anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

    std::string error = "Failed to retrieve current location";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getCurrentLocation()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto StoreFrontTag::getCurrentHomeLocation() -> std::string{

        try {
            
    Object* anyType = (new StoreFrontHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext);;
    

    Method* method = anyType->getClass()->getMethod("getCurrentHomeLocation", 
                            nullptr);;
    

    std::string result = method->invoke(anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

    std::string error = "Failed to retrieve current home location";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getCurrentHomeLocation()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(JspTagException.constructor)
            
    auto StoreFrontTag::doStartTag() -> int32_t{

        try {
            
                        if(true)
                        
                                    {
                                    this->propertiesHashMap= StdUtil::getInstance()->createHashMap();
    
this->propertiesHashMap->put(StoreFrontData::getInstance()->NAME, this->storeName);
    

                        if(this->command.compare(org.allbinary->globals->GLOBALS2->GETCURRENTLOCATION) == 0)
                        
                                    {
                                    pageContext.getOut()->print(this->getCurrentLocation());
    

                                    }
                                
                             else 
                        if(this->command.compare(org.allbinary->globals->GLOBALS2->GETCURRENTHOMELOCATION) == 0)
                        
                                    {
                                    pageContext.getOut()->print(this->getCurrentHomeLocation());
    

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




        #endif //ADMIN_TAGS_STOREFRONTTAG_CPP
