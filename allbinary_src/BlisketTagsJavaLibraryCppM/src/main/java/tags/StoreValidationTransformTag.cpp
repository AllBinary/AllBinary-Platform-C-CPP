
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
        



        #ifndef TAGS_STOREVALIDATIONTRANSFORMTAG_CPP
        #define TAGS_STOREVALIDATIONTRANSFORMTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "tags/StoreValidationTransformTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "tags/ValidationTransformTag.h"


StoreValidationTransformTag::StoreValidationTransformTag() : ValidationTransformTag(), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto StoreValidationTransformTag::setStoreName(std::string value) -> void{
this->storeName= value;
    
this->getPropertiesHashMap()->put(StoreFrontData::getInstance()->NAME, this->storeName);
    
}


                //@Throws(JspTagException.constructor)
            
    auto StoreValidationTransformTag::doStartTag() -> int32_t{

        try {
            
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("Tag Start", this, tagStrings.DO_START_TAG);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ValidationTransformTag::doStartTag();;
    

                //: 
} catch(Exception& e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    
}

}




        #endif //TAGS_STOREVALIDATIONTRANSFORMTAG_CPP
