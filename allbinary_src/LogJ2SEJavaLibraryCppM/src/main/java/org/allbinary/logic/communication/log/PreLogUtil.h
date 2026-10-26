
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H

            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogFormatUtil.h"
//ActualPlatform
/*actual*/ class PreLogUtil
            : public Object
         {

    /*actual*/ public: static void put(std::string specialMessage, Object* anyType, std::string functionName);

    private: static const std::string LOG_SUCCESS = "org.allbinary: ";

    /*actual*/ public: static void putOE(std::string specialMessage, Object* anyType, std::string functionName, Object* exception);

    /*actual*/ public: static void putS(std::string specialMessage, std::string className, std::string functionName);

    /*actual*/ public: static void putSE(std::string specialMessage, std::string className, std::string functionName, Object* exception);

public: PreLogUtil();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H
