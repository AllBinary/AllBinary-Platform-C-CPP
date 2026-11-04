
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
        



        #ifndef ADMIN_TAGS_SHIPPINGTAG_CPP
        #define ADMIN_TAGS_SHIPPINGTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/ShippingTag.h"
        

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

      
#include <admin/taghelpers/ShippingHelperFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/globals/GLOBALS2.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ShippingTag::ShippingTag() : logUtil(LogUtil::getInstance()){
}


    auto ShippingTag::setCommand(std::string command) -> void{
this->command= command;
    
}


    auto ShippingTag::setStoreName(std::string value) -> void{
this->storeName= value;
    
}


                //@Throws(LicensingException.constructor)
            
    auto ShippingTag::setShippingType() -> std::string{

        try {
            
    Object* anyType = JavaBoxes::toObject((new ShippingHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext));;
    

    Class* addressHelperClass = anyType->getClass();;
    

    Method* method = addressHelperClass->getMethod("setShippingType", 
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

    std::string error = "Failed to view Shipping Type";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "setShippingType()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


                //@Throws(JspTagException.constructor)
            
    auto ShippingTag::doStartTag() -> int32_t{

        try {
            
                        if(true)
                        
                                    {
                                    this->propertiesHashMap= StdUtil::getInstance()->createHashMap();
    
this->propertiesHashMap->put(StoreFrontData::getInstance()->NAME, this->storeName);
    

                        if(this->command.compare(GLOBALS2::SETSHIPPINGTYPE) == 0)
                        
                                    {
                                    this->setShippingType();
    

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




        #endif //ADMIN_TAGS_SHIPPINGTAG_CPP
