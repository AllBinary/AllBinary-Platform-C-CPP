
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/Log.h"
//ActualPlatform

LogFactory::LogFactory() {
        }
        
    /*actual*/ auto LogFactory::getInstance(std::string specialMessage, Object* anyType, std::string functionName, Object* exception) -> Log*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new Log(specialMessage, anyType, functionName, exception);
    
}


    /*actual*/ auto LogFactory::getInstanceF(std::string specialMessage, Object* anyType, std::string functionName) -> Log*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    /*actual*/ auto LogFactory::getInstanceSE(std::string specialMessage, std::string className, std::string functionName, Object* exception) -> Log*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LogFactory::getInstance(specialMessage, className, functionName, exception);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFACTORY_CPP
