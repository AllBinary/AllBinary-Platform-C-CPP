
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
        
class OrderTag: public CustomTagSupport {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string command;

    private: std::string storeName;

    private: HashMap<Object*, Object*> propertiesHashMap;

public: OrderTag(){
}


    public: void setCommand(std::string command){
this->command= command;
    
}


    public: void setStoreName(std::string value){
this->storeName= value;
    
}


                //@Throws(LicensingException.constructor)
            
    private: std::string process(){

        try {
            
    Object* anyType = OrderHelperFactory().getInstance(this->propertiesHashMap, this->pageContext);;
    

    Class* helperClass = anyType->getClass();;
    

    Method method = helperClass.getMethod(commonStrings.PROCESS, 
                            nullptr);;
    

    std::string result = method.invoke(anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

    std::string error = "Failed to Process Order: ";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.PROCESS, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    private: Boolean setPaymentGateway(){

        try {
            
    Object* anyType = OrderHelperFactory().getInstance(this->propertiesHashMap, this->pageContext);;
    

    Class* addressHelperClass = anyType->getClass();;
    

    Method method = addressHelperClass.getMethod("setPaymentGateway", 
                            nullptr);;
    

    Boolean result = method.invoke(anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

    std::string error = "Failed to setPaymentGateway for Order";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "setPaymentGateway()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}
*/
}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            
                        if(true)
                        
                                    {
                                    this->propertiesHashMap= StdUtil::getInstance().createHashMap();
    
this->propertiesHashMap.put(StoreFrontData::getInstance().NAME, this->storeName);
    

                        if(this->command.compare(org.allbinary.globals.GLOBALS2.PROCESS) == 0)
                        
                                    {
                                    this->process();
    

                                    }
                                
                             else 
                        if(this->command.compare(PaymentGatewayData::NAME.toString()) == 0)
                        
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
} catch(e) 
            {
AbResponseHandler::sendJspTagLicensingRedirect(this->pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

                //: 
/* catch(e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}
*/
}


};

            

