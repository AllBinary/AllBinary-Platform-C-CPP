
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/ClientInformation.h"

class ClientInformationFactory
            : public Object
         {

    public: ClientInformation* getInstance(){

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->putF(commonStrings->NOT_IMPLEMENTED, this, commonStrings->GET_INSTANCE);
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ClientInformation(stringUtil->NULL_STRING, stringUtil->NULL_STRING, stringUtil->NULL_STRING, stringUtil->NULL_STRING);
    
}


};

            

