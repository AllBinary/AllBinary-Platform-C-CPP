
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/log/LogFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/Log.h"
//ActualPlatform

LogFactory::LogFactory() {
        }
        
    /*actual*/ auto LogFactory::getInstanceD() -> Log*{

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    NullUtil* nullUtil = NullUtil::getInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new Log(stringUtil->EMPTY_STRING, nullUtil->NULL_OBJECT, stringUtil->EMPTY_STRING, nullUtil->NULL_OBJECT);
    
}


    /*actual*/ auto LogFactory::getInstanceNoF(std::string specialMessage, Object* anyType, Object* exception) -> Log*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new Log(specialMessage, anyType, StringUtil::getInstance()->EMPTY_STRING, exception);
    
}


    /*actual*/ auto LogFactory::getInstance(std::string specialMessage, Object* anyType, std::string functionName, Object* exception) -> Log*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new Log(specialMessage, anyType, functionName, exception);
    
}


    /*actual*/ auto LogFactory::getInstanceF(std::string specialMessage, Object* anyType, std::string functionName) -> Log*{

    NullUtil* nullUtil = NullUtil::getInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new Log(specialMessage, anyType, functionName, nullUtil->NULL_OBJECT);
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFACTORY_CPP
