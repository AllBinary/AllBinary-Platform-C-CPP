
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
        



        #ifndef ADMIN_TAGS_PAYMENTPROCESSTAG_CPP
        #define ADMIN_TAGS_PAYMENTPROCESSTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/PaymentProcessTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/PaymentProcessHelperFactory.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/StoreValidationTransformTag.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/globals/GLOBALS2.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PaymentProcessTag::PaymentProcessTag() : logUtil(LogUtil::getInstance()){
}


                //@Throws(LicensingException.constructor, Exception.constructor)
            
    auto PaymentProcessTag::process() -> std::string{

        try {
            
    Object* anyType = JavaBoxes::toObject((new PaymentProcessHelperFactory())->getInstance(this->getPropertiesHashMap(), this->pageContext));;
    

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

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->LICENSINGERROR))
                        
                                    {
                                    this->logUtil->put("LicensingException", this, this->commonStrings->PROCESS, &e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(JspTagException.constructor)
            
    auto PaymentProcessTag::doStartTag() -> int32_t{

        try {
            
                        if(this->getCommand()->compareTo(GLOBALS2::AUTHORIZEORDEREVALBODYONERROR) == 0 || this->getCommand()->compareTo(GLOBALS2::AUTHORIZEORDERANDEVALBODY) == 0 || this->getCommand()->compareTo(GLOBALS2::AUTHORIZEFORMEVALBODYONERROR) == 0)
                        
                                    {
                                    this->pageContext->getOut()->print(JavaString::valueOf(this->process()) +JavaString::valueOf("<br />"));
    

                        if(this->getCommand()->compareTo(GLOBALS2::AUTHORIZEORDEREVALBODYONERROR) == 0)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->SKIP_BODY;
    
                             else 
                        if()
                        

                                    }
                                
                        else {
                            


                            throw Exception("No Such Payment Processing Command");
                    

                        }
                            

                //: 
} catch(Exception& e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    
}

}




        #endif //ADMIN_TAGS_PAYMENTPROCESSTAG_CPP
