
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
        



        #ifndef ADMIN_TAGS_STOREFRONTSTAG_CPP
        #define ADMIN_TAGS_STOREFRONTSTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/StoreFrontsTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <javax/servlet/jsp/tagext/TagSupport.h>

      
#include <admin/taghelpers/StoreFrontsHelperFactory.h>

      
#include <admin/taghelpers/StoreFrontsRequestHelperFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/TableTag.h"


StoreFrontsTag::StoreFrontsTag() : logUtil(LogUtil::getInstance()){
this->setTagHelperFactory(new StoreFrontsHelperFactory());
    
this->setTagRequestHelperFactory(new StoreFrontsRequestHelperFactory());
    
}


                //@Throws(LicensingException.constructor)
            
    auto StoreFrontsTag::generateSelect() -> std::string{

        try {
            
    Object* anyType = this->getTagHelperFactoryInterface()->getInstance(this->getPropertiesHashMap(), pageContext);;
    

    Method* method = anyType->getClass()->getMethod("generateSelect", 
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

    std::string error = "Failed to generate storefronts select";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "generateSelect()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto StoreFrontsTag::install() -> std::string{

        try {
            
    Object* anyType = this->getTagRequestHelperFactoryInterface()->getInstance(this->getPropertiesHashMap(), pageContext);;
    

    Method* method = anyType->getClass()->getMethod("install", 
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

    std::string error = "Failed to generate storefronts select";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "generateSelect()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto StoreFrontsTag::sendStoreCreatedEmails() -> std::string{

        try {
            
    Object* anyType = this->getTagRequestHelperFactoryInterface()->getInstance(this->getPropertiesHashMap(), pageContext);;
    

    Method* method = anyType->getClass()->getMethod("sendStoreCreatedEmails", 
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

    std::string error = "Failed to send email";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "sendStoreCreatedEmails()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(JspTagException.constructor)
            
    auto StoreFrontsTag::doStartTag() -> int32_t{

        try {
            
                        if(this->isEnabled())
                        
                                    {
                                    
                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    
    StoreFrontData* storeFrontData = StoreFrontData::getInstance();;
    

                        if(this->getCommand()->compareTo(storeFrontData->SELECT) == 0)
                        
                                    {
                                    this->pageContext->getOut()->print(this->generateSelect());
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(storeFrontData->INSTALL) == 0)
                        
                                    {
                                    this->getPropertiesHashMap()->put("current", this->getCurrent());
    
this->getPropertiesHashMap()->put("total", this->getTotal());
    

                        if(this->getCurrent()->intValue() == this->getTotal()->intValue())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TagSupport::EVAL_BODY_INCLUDE;
    

                                    }
                                
this->install();
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(storeFrontData->INSTALL_COMPLETE) == 0)
                        
                                    {
                                    this->sendStoreCreatedEmails();
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TableTag::doStartTag();;
    

                        }
                            

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




        #endif //ADMIN_TAGS_STOREFRONTSTAG_CPP
