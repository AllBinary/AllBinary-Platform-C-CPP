
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
        



        #ifndef ADMIN_TAGS_PAYMENTGATEWAYTAG_CPP
        #define ADMIN_TAGS_PAYMENTGATEWAYTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/PaymentGatewayTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/PaymentGatewayHelperFactory.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/TableTag.h"


PaymentGatewayTag::PaymentGatewayTag() : logUtil(LogUtil::getInstance()){
this->setTagHelperFactory(new PaymentGatewayHelperFactory());
    
this->setTagRequestHelperFactory(new PaymentGatewayHelperFactory());
    
}


                //@Throws(LicensingException.constructor, Exception.constructor)
            
    auto PaymentGatewayTag::process() -> std::string{

        try {
            
    Object* anyType = JavaBoxes::toObject((new PaymentGatewayHelperFactory())->getInstance(this->getPropertiesHashMap(), this->pageContext));;
    

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
this->logUtil->put("LicensingException", this, this->commonStrings->PROCESS, &e);
    



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(JspTagException.constructor)
            
    auto PaymentGatewayTag::doStartTag() -> int32_t{

        try {
            
                        if(this->isEnabled())
                        
                                    {
                                    
                        if(this->getCommand()->compareTo(allbinary->globals->GLOBALS2->AUTHORIZEORDEREVALBODYONERROR) == 0 || this->getCommand()->compareTo(allbinary->globals->GLOBALS2->AUTHORIZEORDERANDEVALBODY) == 0 || this->getCommand()->compareTo(allbinary->globals->GLOBALS2->AUTHORIZEFORMEVALBODYONERROR) == 0)
                        
                                    {
                                    
    std::string output = this->process();;
    


                            {
                            this->pageContext->getOut()->print(JavaString::valueOf(output) +JavaString::valueOf("<br />"));
    

                            }
                    

                        if(this->getCommand()->compareTo(allbinary->globals->GLOBALS2->AUTHORIZEORDEREVALBODYONERROR) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->SKIP_BODY;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->EVAL_BODY_INCLUDE;
    

                        }
                            

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TableTag::doStartTag();;
    

                        }
                            

                                    }
                                



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




        #endif //ADMIN_TAGS_PAYMENTGATEWAYTAG_CPP
