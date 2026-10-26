
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

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/PaymentGatewayHelperFactory.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TableTag.h"

class PaymentGatewayTag: public TableTag {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: PaymentGatewayTag(){
this->setTagHelperFactory(PaymentGatewayHelperFactory());
    
this->setTagRequestHelperFactory(PaymentGatewayHelperFactory());
    
}


                //@Throws(LicensingException.constructor, Exception.constructor)
            
    public: std::string process(){

        try {
            
    Object* anyType = PaymentGatewayHelperFactory().getInstance(this->getPropertiesHashMap(), this->pageContext);;
    

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
this->logUtil.put("LicensingException", this, this->commonStrings.PROCESS, e);
    



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.PROCESS, e);
    

                                    }
                                



                            throw e;
                    
}
*/
}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            
                        if(this->isEnabled())
                        
                                    {
                                    
                        if(this->getCommand().compareTo(org.allbinary.globals.GLOBALS2.AUTHORIZEORDEREVALBODYONERROR) == 0 || this->getCommand().compareTo(org.allbinary.globals.GLOBALS2.AUTHORIZEORDERANDEVALBODY) == 0 || this->getCommand().compareTo(org.allbinary.globals.GLOBALS2.AUTHORIZEFORMEVALBODYONERROR) == 0)
                        
                                    {
                                    
    std::string output = this->process();;
    


                            {
                            this->pageContext.getOut().print(output +"<br />");
    

                            }
                    

                        if(this->getCommand().compareTo(org.allbinary.globals.GLOBALS2.AUTHORIZEORDEREVALBODYONERROR) == 0)
                        
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
                        return super.doStartTag();;
    

                        }
                            

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

                //: 
} catch(e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

}


};

            

