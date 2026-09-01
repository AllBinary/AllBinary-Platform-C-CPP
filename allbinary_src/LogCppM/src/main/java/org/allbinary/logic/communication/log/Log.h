
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOG_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOG_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Class.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogFormatUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Log
            : public Object
         {

    private: const LogFormatUtil logFormatUtil = LogFormatUtil::getInstance();

    private: std::string specialMessage;

    private: Object* anyType;

    private: std::string functionName;

    private: Object* exception;

public: Log(std::string specialMessage, Object* anyType, std::string functionName, Object* exception);

    public: std::string getSpecialMessage();

    public: Object* getObject();

    public: std::string getFunctionName();

    public: Object* getThrowable();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOG_H
