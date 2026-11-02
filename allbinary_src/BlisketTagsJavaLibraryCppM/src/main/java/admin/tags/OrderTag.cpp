
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
        



        #ifndef ADMIN_TAGS_ORDERTAG_CPP
        #define ADMIN_TAGS_ORDERTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/OrderTag.h"
        

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

      
#include <javax/servlet/jsp/tagext/TagSupport.h>

      
#include <admin/taghelpers/OrderHelperFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OrderTag::OrderTag() : logUtil(LogUtil::getInstance()){
}


    auto OrderTag::setCommand(std::string command) -> void{
this->command= command;
    
}


    auto OrderTag::setStoreName(std::string value) -> void{
this->storeName= value;
    
}


                //@Throws(LicensingException.constructor)
            
    auto OrderTag::process() -> std::string{

        try {
            
    Object* anyType = JavaBoxes::toObject((new OrderHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext));;
    

    Class* helperClass = anyType->getClass();;
    

    Method* method = helperClass->getMethod(commonStrings.PROCESS, 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(anyType, 
                            nullptr));;
    



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

    std::string error = "Failed to Process Order: ";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto OrderTag::setPaymentGateway() -> bool{

        try {
            
    Object* anyType = JavaBoxes::toObject((new OrderHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext));;
    

    Class* addressHelperClass = anyType->getClass();;
    

    Method* method = addressHelperClass->getMethod("setPaymentGateway", 
                            nullptr);;
    

    bool result = JavaBoxes::unbox<bool>(method->invoke(anyType, 
                            nullptr));;
    



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

    std::string error = "Failed to setPaymentGateway for Order";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "setPaymentGateway()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


                //@Throws(JspTagException.constructor)
            
    auto OrderTag::doStartTag() -> int32_t{

        try {
            
                        if(true)
                        
                                    {
                                    this->propertiesHashMap= StdUtil::getInstance()->createHashMap();
    
this->propertiesHashMap->put(StoreFrontData::getInstance()->NAME, this->storeName);
    

                        if(this->command.compare(org.allbinary->globals->GLOBALS2->PROCESS) == 0)
                        
                                    {
                                    this->process();
    

                                    }
                                
                             else 
                        if(this->command.compare(PaymentGatewayData::NAME->toString()) == 0)
                        
                                    {
                                    
                        if(this->setPaymentGateway() == Boolean::TRUE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TagSupport::EVAL_BODY_INCLUDE;
    

                                    }
                                

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TagSupport::SKIP_BODY;
    

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




        #endif //ADMIN_TAGS_ORDERTAG_CPP
