
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

            #include <hilog/log.h>
        
            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogFormatUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Log.h"
//ActualPlatform
/*actual*/ class PreLogUtil
            : public Object
         {
        

            static const char* PUBLIC = "%{public}s";
            

    /*actual*/ public static put(string specialMessage, any = {} anyType, string functionName);

    private: static const LABEL: string = "org.allbinary";

    /*actual*/ public static putOE(string specialMessage, any = {} anyType, string functionName, any = {} exception);

    /*actual*/ public static putS(string specialMessage, string className, string functionName);

    /*actual*/ public static putSE(string specialMessage, string className, string functionName, any = {} exception);

public constructor ();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H
