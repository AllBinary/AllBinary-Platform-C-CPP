
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
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //NoPlatform
// class PreLogUtil
            : public Object
         {

    public: static void put(std::string specialMessage, Object* anyType, std::string functionName);

    public: static void putOE(std::string specialMessage, Object* anyType, std::string functionName, Object* exception);

    public: static void putSE(std::string specialMessage, std::string className, std::string functionName, Object* exception);

public: PreLogUtil();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H
