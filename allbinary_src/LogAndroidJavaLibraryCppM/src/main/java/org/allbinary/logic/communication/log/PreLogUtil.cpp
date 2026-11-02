
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/log/PreLogUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogFormatUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/Log.h"
//ActualPlatform

PreLogUtil::PreLogUtil(){
}


    /*actual*/ auto PreLogUtil::put(std::string specialMessage, Object* anyType, std::string functionName) -> void{
PreLogUtil::putOE(specialMessage, anyType, functionName, NullUtil::getInstance()->NULL_OBJECT);
    
}


    /*actual*/ auto PreLogUtil::putOE(std::string specialMessage, Object* anyType, std::string functionName, Object* exception) -> void{

    std::string className = PreLogUtil::LABEL;;
    

    std::string actualClassName = anyType->getClass()->getName();;
    

                        if(true)
                        
                                    {
                                    className= actualClassName;
    

                                    }
                                

    std::string message = LogFormatUtil::getInstance()->get(className, functionName, specialMessage, exception);;
    
android.util->Log->i(PreLogUtil::LABEL, message);
    
}


    /*actual*/ auto PreLogUtil::putS(std::string specialMessage, std::string className, std::string functionName) -> void{
PreLogUtil::putSE(specialMessage, className, functionName, NullUtil::getInstance()->NULL_OBJECT);
    
}


    /*actual*/ auto PreLogUtil::putSE(std::string specialMessage, std::string className, std::string functionName, Object* exception) -> void{

    std::string message = LogFormatUtil::getInstance()->get(className, functionName, specialMessage, exception);;
    
android.util->Log->i(className, message);
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_CPP
