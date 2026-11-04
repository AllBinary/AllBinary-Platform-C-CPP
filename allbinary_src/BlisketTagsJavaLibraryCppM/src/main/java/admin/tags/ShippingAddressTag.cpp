
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
        



        #ifndef ADMIN_TAGS_SHIPPINGADDRESSTAG_CPP
        #define ADMIN_TAGS_SHIPPINGADDRESSTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/ShippingAddressTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/ShippingAddressHelperFactory.h>

      
#include <org/allbinary/business/user/address/ShippingAddressData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/TableTag.h"


ShippingAddressTag::ShippingAddressTag() : logUtil(LogUtil::getInstance()){
this->setTagHelperFactory(new ShippingAddressHelperFactory());
    
this->setTagRequestHelperFactory(new ShippingAddressHelperFactory());
    
}


    auto ShippingAddressTag::setValue(std::string value) -> void{
this->value= value;
    
}


                //@Throws(LicensingException.constructor)
            
    auto ShippingAddressTag::set() -> std::string{

        try {
            
    Object* anyType = JavaBoxes::toObject((new ShippingAddressHelperFactory())->getInstance(this->getPropertiesHashMap(), this->pageContext));;
    

    Class* addressHelperClass = anyType->getClass();;
    

    Method* method = addressHelperClass->getMethod("set", 
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

    std::string error = "Failed to set Shipping Address";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "set()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto ShippingAddressTag::setToBillingAddress() -> std::string{

        try {
            
    Object* anyType = JavaBoxes::toObject((new ShippingAddressHelperFactory())->getInstance(this->getPropertiesHashMap(), this->pageContext));;
    

    Class* addressHelperClass = anyType->getClass();;
    

    Method* method = addressHelperClass->getMethod("setToBillingAddress", 
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

    std::string error = "Failed Setting Shipping address to Billing Address";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "setShippingAddressToBillingAddress()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


                //@Throws(JspTagException.constructor)
            
    auto ShippingAddressTag::doStartTag() -> int32_t{

        try {
            
                        if(this->isEnabled())
                        
                                    {
                                    
                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(this->getCommand()->compareTo(ShippingAddressData::SELECT) == 0)
                        
                                    {
                                    this->set();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->EVAL_BODY_INCLUDE;
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(ShippingAddressData::SETTOBILLINGADDRESS) == 0)
                        
                                    {
                                    this->setToBillingAddress();
    

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




        #endif //ADMIN_TAGS_SHIPPINGADDRESSTAG_CPP
