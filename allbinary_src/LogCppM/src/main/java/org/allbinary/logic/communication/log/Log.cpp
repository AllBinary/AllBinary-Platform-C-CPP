
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOG_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/log/Log.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogFormatUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

Log::Log(std::string specialMessage, Object* anyType, std::string functionName, Object* exception) : logFormatUtil(LogFormatUtil::getInstance()){
this->specialMessage= specialMessage;
    
this->anyType= anyType;
    
this->functionName= functionName;
    
this->exception= exception;
    
}


    auto Log::getSpecialMessage() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->specialMessage;
    
}


    auto Log::getObject() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(this->anyType);
    
}


    auto Log::getFunctionName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->functionName;
    
}


    auto Log::getThrowable() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(this->exception);
    
}


    auto Log::toString() -> std::string{

    std::string className = CommonStrings::getInstance()->EMPTY;;
    

    Class* clazz = this->anyType->getClass();;
    

                        if(true)
                        
                                    {
                                    className= clazz->getName();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->logFormatUtil->get(className, this->functionName, this->specialMessage, this->exception);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOG_CPP
