
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
        



        #ifndef ADMIN_TAGS_ORDERITEMSTAG_CPP
        #define ADMIN_TAGS_ORDERITEMSTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/OrderItemsTag.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/OrderItemsHelperFactory.h>

      
#include <admin/taghelpers/OrderItemsRequestHelperFactory.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/TableTag.h"


OrderItemsTag::OrderItemsTag() : logUtil(LogUtil::getInstance()){
this->setTagHelperFactory(new OrderItemsHelperFactory());
    
this->setTagRequestHelperFactory(new OrderItemsRequestHelperFactory());
    
}


    auto OrderItemsTag::setStatus(std::string value) -> void{
this->status= value;
    
}


                //@Throws(LicensingException.constructor)
            
    auto OrderItemsTag::setOrderStatus() -> std::string{

        try {
            
    Object* anyType = (new OrderItemsRequestHelperFactory())->getInstance(this->getPropertiesHashMap(), this->pageContext);;
    

                        if(false)
                        
                                    {
                                    
    Class* helperClass = anyType->getClass();;
    

    Method* method = helperClass->getMethod("setOrderStatus", 
                            nullptr);;
    

    std::string result = method->invoke(anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                                    }
                                
                        else {
                            
    Class* helperClass = anyType->getClass();;
    

    std::vector<Class*> methodParams = 
                                                        {
                                                            this->status.getClass()
                                                        };;
    

    Method* method = helperClass->getMethod("setOrderStatus", methodParams);;
    

    std::vector<Object*> methodArgs = 
                                                        {
                                                            this->status
                                                        };;
    

    std::string result = method->invoke(anyType, methodArgs);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                        }
                            

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

    std::string error = JavaString::valueOf("Failed to set Order status to: ") +JavaString::valueOf(this->status);;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "setOrderStatus()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(JspTagException.constructor)
            
    auto OrderItemsTag::doStartTag() -> int32_t{

        try {
            
                        if(this->isEnabled())
                        
                                    {
                                    
                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    this->getPropertiesHashMap()->put(OrderHistoryData::STATUS, this->status);
    

                        if(this->getCommand()->compareTo(OrderHistoryData::SETSTATUS) == 0)
                        
                                    {
                                    this->pageContext->getOut()->print(this->setOrderStatus());
    

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




        #endif //ADMIN_TAGS_ORDERITEMSTAG_CPP
