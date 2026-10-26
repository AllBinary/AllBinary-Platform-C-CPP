
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

      
#include <admin/taghelpers/PaymentProcessHelperFactory.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/StoreValidationTransformTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaymentProcessTag: public StoreValidationTransformTag {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: PaymentProcessTag(){
}


                //@Throws(LicensingException.constructor, Exception.constructor)
            
    public: std::string process(){

        try {
            
    Object* anyType = PaymentProcessHelperFactory().getInstance(this->getPropertiesHashMap(), this->pageContext);;
    

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

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().LICENSINGERROR))
                        
                                    {
                                    this->logUtil.put("LicensingException", this, this->commonStrings.PROCESS, e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAGERROR))
                        
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
            
                        if(this->getCommand().compareTo(org.allbinary.globals.GLOBALS2.AUTHORIZEORDEREVALBODYONERROR) == 0 || this->getCommand().compareTo(org.allbinary.globals.GLOBALS2.AUTHORIZEORDERANDEVALBODY) == 0 || this->getCommand().compareTo(org.allbinary.globals.GLOBALS2.AUTHORIZEFORMEVALBODYONERROR) == 0)
                        
                                    {
                                    this->pageContext.getOut().print(this->process() +"<br />");
    

                        if(this->getCommand().compareTo(org.allbinary.globals.GLOBALS2.AUTHORIZEORDEREVALBODYONERROR) == 0)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->SKIP_BODY;
    
                             else 
                        if()
                        

                                    }
                                
                        else {
                            


                            throw Exception("No Such Payment Processing Command");
                    

                        }
                            

                //: 
} catch(e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

}


};

            

