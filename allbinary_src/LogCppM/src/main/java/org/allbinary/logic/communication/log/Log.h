
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
        

    private: const logFormatUtil: LogFormatUtil = LogFormatUtil.getInstance()!;

    private: const specialMessage: string;

    private: const anyType: any;

    private: const functionName: string;

    private: const exception: any;

public constructor (string specialMessage, any = {} anyType, string functionName, any = {} exception);

    public string getSpecialMessage();

    public any getObject();

    public string getFunctionName();

    public any getThrowable();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOG_H
