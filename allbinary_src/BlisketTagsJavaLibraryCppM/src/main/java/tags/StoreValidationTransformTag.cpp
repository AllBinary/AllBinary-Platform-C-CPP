
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
        



            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ValidationTransformTag.h"

class StoreValidationTransformTag: public ValidationTransformTag {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string storeName;

public: StoreValidationTransformTag() : ValidationTransformTag(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void setStoreName(std::string value){
this->storeName= value;
    
this->getPropertiesHashMap().put(StoreFrontData::getInstance().NAME, this->storeName);
    
}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("Tag Start", this, tagStrings.DO_START_TAG);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.doStartTag();;
    

                //: 
} catch(e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

}


};

            

