
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFORMATUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFORMATUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/log/LogFormatUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Throwable.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/time/TimeStampUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/java/exception/ExceptionUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
auto LogFormatUtil::instance_owner() -> LogFormatUtil* { static std::unique_ptr<LogFormatUtil> value(new LogFormatUtil()); return value.get(); }
LogFormatUtil* LogFormatUtil::instance = LogFormatUtil::instance_owner();

    /*actual*/ auto LogFormatUtil::getInstance() -> LogFormatUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LogFormatUtil::instance;
    
}


LogFormatUtil::LogFormatUtil() : timeStampUtil(TimeStampUtil::getInstance()), commonSeps(CommonSeps::getInstance()), CLASS_NAME(this->commonSeps->SPACE), FUNCTION_CALL(CommonLabels::getInstance()->COLON_SEP), stringUtil(StringUtil::getInstance()), exceptionUtil(ExceptionUtil::getInstance()), nullUtil(NullUtil::getInstance()){
}


    /*actual*/ auto LogFormatUtil::get(std::string className, std::string functionName, std::string specialMessage, Object* exception) -> std::string{

    StringMaker* stringBuffer = this->getF(className, functionName);;
    
stringBuffer->append(this->getO(exception));
    
stringBuffer->append(this->SPECIAL_MESSAGE);
    
stringBuffer->append(specialMessage);
    
stringBuffer->append(this->commonSeps->NEW_LINE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}


    /*actual*/ auto LogFormatUtil::getS(std::string className, std::string functionName, std::string specialMessage) -> std::string{

    StringMaker* stringBuffer = this->getF(className, functionName);;
    
stringBuffer->append(this->SPECIAL_MESSAGE);
    
stringBuffer->append(specialMessage);
    
stringBuffer->append(this->commonSeps->NEW_LINE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}


    auto LogFormatUtil::getF(std::string className, std::string functionName) -> StringMaker*{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->TIME);
    
stringBuffer->append(this->timeStampUtil->getAsString());
    
stringBuffer->append(this->CLASS_NAME);
    
stringBuffer->append(className);
    
stringBuffer->append(this->FUNCTION_CALL);
    
stringBuffer->append(functionName);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer;
    
}


    /*actual*/ auto LogFormatUtil::getO(Object* exception) -> std::string{

                        if(exception != this->nullUtil->NULL_OBJECT)
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->LOG_ERROR);
    

    std::string exceptionAsString = JavaString::valueOf(exception);;
    

                        if(true)
                        
                                    {
                                    stringBuffer->append(exceptionAsString);
    

                                    }
                                
                        else {
                            stringBuffer->append(this->EMPTY);
    

                        }
                            
stringBuffer->append(this->STACK_TRACE);
    

                        if(exception != this->nullUtil->NULL_OBJECT)
                        
                                    {
                                    stringBuffer->append(this->exceptionUtil->getStackTrace(dynamic_cast<Throwable*>(exception)));
    

                                    }
                                
                        else {
                            stringBuffer->append(this->stringUtil->NULL_STRING);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFORMATUTIL_CPP
