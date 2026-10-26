
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

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformTag.h"

class XmlValidationTransformTag: public TransformTag {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: XmlValidationTransformTag(){
}


                //@Throws(Exception.constructor)
            
    private: bool isValid(){

        try {
            
    Class* helperClass = this->getHelper().getClass();;
    

    Method method = helperClass.getMethod(commonStrings.IS_VALID, 
                            nullptr);;
    

    Boolean result = method.invoke(this->getHelper(), 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result.valueOf();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.IS_VALID, e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            this->setHelper();
    

                        if(this->isValid())
                        
                                    {
                                    super.doStartTag();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->EVAL_BODY_INCLUDE;
    

                                    }
                                
                        else {
                            super.doStartTag();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->SKIP_BODY;
    

                        }
                            

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

            

