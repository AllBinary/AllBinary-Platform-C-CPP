
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFACTORY_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Log.h"
//ActualPlatform
/*actual*/ class LogFactory
            : public Object
         {
        

    public static const LOG: Log = new Log(StringUtil.getInstance()!.EMPTY_STRING, NullUtil.getInstance()!.NULL_OBJECT, StringUtil.getInstance()!.EMPTY_STRING, NullUtil.getInstance()!.NULL_OBJECT);

    /*actual*/ public static Log getInstance(string specialMessage, any = {} anyType, string functionName, any = {} exception);

    /*actual*/ public static Log getInstanceF(string specialMessage, any = {} anyType, string functionName);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFACTORY_H
