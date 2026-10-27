
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
        



        #ifndef VIEWS_VALIDATIONONLYTEMPUTIL_H
        #define VIEWS_VALIDATIONONLYTEMPUTIL_H

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
class ValidationOnlyTempUtil
            : public Object
         {

    private: static ValidationOnlyTempUtil* instance() { static std::unique_ptr<ValidationOnlyTempUtil> value(new ValidationOnlyTempUtil()); return value.get(); }

    public: static ValidationOnlyTempUtil* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

private: ValidationOnlyTempUtil();

                //@Throws(Exception.constructor)
            
    public: std::string view(ValidationComponentInterface* validationComponentInterface);

};

            


        #endif //VIEWS_VALIDATIONONLYTEMPUTIL_H
