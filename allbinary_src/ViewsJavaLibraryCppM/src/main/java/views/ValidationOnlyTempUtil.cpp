
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
        



        #ifndef VIEWS_VALIDATIONONLYTEMPUTIL_CPP
        #define VIEWS_VALIDATIONONLYTEMPUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/ValidationOnlyTempUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Replace when validation node is added
auto ValidationOnlyTempUtil::instance_owner() -> ValidationOnlyTempUtil* { static std::unique_ptr<ValidationOnlyTempUtil> value(new ValidationOnlyTempUtil()); return value.get(); }
ValidationOnlyTempUtil* ValidationOnlyTempUtil::instance = ValidationOnlyTempUtil::instance_owner();

    auto ValidationOnlyTempUtil::getInstance() -> ValidationOnlyTempUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ValidationOnlyTempUtil::instance;
    
}


ValidationOnlyTempUtil::ValidationOnlyTempUtil() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto ValidationOnlyTempUtil::view(ValidationComponentInterface* validationComponentInterface) -> std::string{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

        try {
            
                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("View Name: ") +JavaString::valueOf(validationComponentInterface->getTransformInfoInterface()->getName()), this, "view()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //VIEWS_VALIDATIONONLYTEMPUTIL_CPP
