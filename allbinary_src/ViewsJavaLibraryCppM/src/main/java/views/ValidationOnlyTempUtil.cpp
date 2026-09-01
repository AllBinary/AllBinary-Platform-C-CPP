
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
        



            #include "../java/lang/Object.h"
        
            #include "../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Replace when validation node is added
class ValidationOnlyTempUtil
            : public Object
         {

    private: static ValidationOnlyTempUtil instance() { return ValidationOnlyTempUtil(); }

    public: static ValidationOnlyTempUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ValidationOnlyTempUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: ValidationOnlyTempUtil(){
}


                //@Throws(Exception.constructor)
            
    public: std::string view(ValidationComponentInterface validationComponentInterface){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("View Name: " +validationComponentInterface.getTransformInfoInterface().getName(), this, "view()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put(commonStrings.EXCEPTION, this, "view()", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

