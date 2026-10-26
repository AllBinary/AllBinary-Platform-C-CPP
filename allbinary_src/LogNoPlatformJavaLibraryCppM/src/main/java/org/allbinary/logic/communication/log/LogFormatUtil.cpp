
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/java/exception/ExceptionUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/time/TimeStampUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //NoPlatform
// class LogFormatUtil
            : public Object
         {

    private: static LogFormatUtil instance() { return LogFormatUtil(); }

    public: static LogFormatUtil getInstance()



    public: std::string get(std::string className, std::string functionName, std::string specialMessage, Object* exception)

    public: std::string getS(std::string className, std::string functionName, std::string specialMessage)

    public: std::string getO(Object* exception)

};

            

