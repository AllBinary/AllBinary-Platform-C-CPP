
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <taghelpers/OrderHistoryHelperFactory.h>

      
#include <tags/StoreValidationTransformTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OrderHistoryTag: public StoreValidationTransformTag {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: std::string status;

public: OrderHistoryTag(){
}


    public: void setStatus(std::string value){
this->status= value;
    
}


                //@Throws(LicensingException.constructor)
            
    private: std::string setOrderStatus(){

        try {
            
    Object* anyType = (new OrderHistoryHelperFactory())->getInstance(this->getPropertiesHashMap(), pageContext);;
    

    Class* helperClass = anyType->getClass();;
    

    Method* method = helperClass->getMethod("setOrderStatus", 
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

    std::string error = "Failed to view order table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.EXCEPTION, this, "setOrderStatus()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            this->setName("Basic Order History View");
    
this->setObjectFile("views.generic.order.history.ValidationView");
    

                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(this->getCommand()->compareTo(OrderHistoryData::SETSTATUS) == 0)
                        
                                    {
                                    this->getPropertiesHashMap()->put(OrderHistoryData::STATUS, this->status);
    
pageContext.getOut()->print(this->setOrderStatus());
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(org.allbinary.globals.GLOBALS2.VIEW) == 0)
                        
                                    {
                                    
                                    }
                                
                        else {
                            


                            throw new Exception("No Such View Command: " +this->getCommand());
                    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.doStartTag();;
    

                                    }
                                



                            throw new Exception("Command Null");
                    

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


};

            

