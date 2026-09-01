
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Throwable.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/time/TimeStampUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/java/exception/ExceptionUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class LogFormatUtil
            : public Object
         {

    private: static LogFormatUtil instance() { return LogFormatUtil(); }

    /*actual*/ public: static LogFormatUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogFormatUtil::instance();
    
}


    private: const TimeStampUtil timeStampUtil = TimeStampUtil::getInstance();

    private: const CommonSeps commonSeps = CommonSeps::getInstance();

    private: const std::string LOG_ERROR = "\nLog-Error: ";

    private: const std::string EMPTY = "Empty";

    private: const std::string STACK_TRACE = "\nStack Trace: ";

    private: const std::string TIME = "Time: ";

    private: const std::string CLASS_NAME = this->commonSeps.SPACE;

    private: const std::string FUNCTION_CALL = CommonLabels::getInstance().COLON_SEP;

    private: const std::string SPECIAL_MESSAGE = "> ";

private: LogFormatUtil(){
}


    /*actual*/ public: std::string get(std::string className, std::string functionName, std::string specialMessage, Object* exception){

    StringMaker stringBuffer = this->getF(className, functionName);;
    
stringBuffer.append(this->getO(exception));
    
stringBuffer.append(this->SPECIAL_MESSAGE);
    
stringBuffer.append(specialMessage);
    
stringBuffer.append(this->commonSeps.NEW_LINE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    /*actual*/ public: std::string getS(std::string className, std::string functionName, std::string specialMessage){

    StringMaker stringBuffer = this->getF(className, functionName);;
    
stringBuffer.append(this->SPECIAL_MESSAGE);
    
stringBuffer.append(specialMessage);
    
stringBuffer.append(this->commonSeps.NEW_LINE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    private: StringMaker getF(std::string className, std::string functionName){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->TIME);
    
stringBuffer.append(this->timeStampUtil.getAsString());
    
stringBuffer.append(this->CLASS_NAME);
    
stringBuffer.append(className);
    
stringBuffer.append(this->FUNCTION_CALL);
    
stringBuffer.append(functionName);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer;
    
}


    private: const StringUtil stringUtil = StringUtil::getInstance();

    private: const ExceptionUtil exceptionUtil = ExceptionUtil::getInstance();

    private: const NullUtil nullUtil = NullUtil::getInstance();

    /*actual*/ public: std::string getO(Object* exception){

                        if(exception != this->nullUtil.NULL_OBJECT)
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->LOG_ERROR);
    

    std::string exceptionAsString = exception->toString();;
    

                        if(true)
                        
                                    {
                                    stringBuffer.append(exceptionAsString);
    

                                    }
                                
                        else {
                            stringBuffer.append(this->EMPTY);
    

                        }
                            
stringBuffer.append(this->STACK_TRACE);
    

                        if(exception != this->nullUtil.NULL_OBJECT)
                        
                                    {
                                    stringBuffer.append(this->exceptionUtil.getStackTrace(exception as Throwable));
    

                                    }
                                
                        else {
                            stringBuffer.append(this->stringUtil.NULL_STRING);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    

                        }
                            
}


};

            

