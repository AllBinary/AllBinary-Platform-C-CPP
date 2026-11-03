
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_TESTREMOTELOGUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_TESTREMOTELOGUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/log/TestRemoteLogUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/globals/Globals.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/LogUtil.h"


TestRemoteLogUtil::TestRemoteLogUtil(){
Globals::getInstance()->init(this->getClass()->getClassLoader(), TestRemoteLogUtil::PATH);
    

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, "Test", "TestClass", new Exception("Pretend Exception"));
    
}


                //@Throws(Exception.constructor)
            
    auto TestRemoteLogUtil::main(std::vector<std::string> args) -> void{
new TestRemoteLogUtil();
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_TESTREMOTELOGUTIL_CPP
