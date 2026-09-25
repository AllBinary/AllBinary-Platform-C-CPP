
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
        



            #include "../../java/lang/Class.h"
        
            #include "../../java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/PaymentHelperFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TableTag.h"

class PaymentTag: public TableTag {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string storeName;

    private: HashMap<any, any> propertiesHashMap;

public: PaymentTag(){
this->setTagHelperFactory(PaymentHelperFactory());
    
this->setTagRequestHelperFactory(PaymentHelperFactory());
    
}


    public: void setStoreName(std::string value){
this->storeName= value;
    
}


                //@Throws(LicensingException.constructor)
            
    private: std::string select(){

        try {
            
    Object* anyType = PaymentHelperFactory().getInstance(this->getPropertiesHashMap(), pageContext);;
    

    Function addressHelperClass = anyType->constructor;;
    

    Method method = addressHelperClass.getMethod("select", 
                            nullptr);;
    

    std::string result = method.invoke(anyType, 
                            nullptr) as string;;
    



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

    std::string error = "Failed to select Payment";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "selectPayment()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}
*/
}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            
                        if(this->isEnabled())
                        
                                    {
                                    this->propertiesHashMap= StdUtil::getInstance().createHashMap();
    
this->propertiesHashMap.put(StoreFrontData::getInstance().NAME, this->storeName);
    

                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(this->getCommand().compareTo(PaymentData::SELECT) == 0)
                        
                                    {
                                    
    std::string output = this->select();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this->pageContext.getOut().print(output +"<br />");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->EVAL_BODY_INCLUDE;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.doStartTag();;
    

                        }
                            

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

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

            

