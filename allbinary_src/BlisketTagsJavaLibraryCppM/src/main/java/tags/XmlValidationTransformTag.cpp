
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
        



        #ifndef TAGS_XMLVALIDATIONTRANSFORMTAG_CPP
        #define TAGS_XMLVALIDATIONTRANSFORMTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "tags/XmlValidationTransformTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "tags/TransformTag.h"


XmlValidationTransformTag::XmlValidationTransformTag() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto XmlValidationTransformTag::isValid() -> bool{

        try {
            
    Class* helperClass = this->getHelper()->getClass();;
    

    Method* method = helperClass->getMethod(commonStrings.IS_VALID, 
                            nullptr);;
    

    bool result = JavaBoxes::unbox<bool>(method->invoke(this->getHelper(), 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(JspTagException.constructor)
            
    auto XmlValidationTransformTag::doStartTag() -> int32_t{

        try {
            this->setHelper();
    

                        if(this->isValid())
                        
                                    {
                                    TransformTag::doStartTag();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->EVAL_BODY_INCLUDE;
    

                                    }
                                
                        else {
                            TransformTag::doStartTag();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->SKIP_BODY;
    

                        }
                            

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




        #endif //TAGS_XMLVALIDATIONTRANSFORMTAG_CPP
