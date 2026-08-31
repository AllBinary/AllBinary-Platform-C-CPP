
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGDATA_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGDATA_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LogData
            : public Object
         {
        

    public const MAX: int64_t = 5000000;

    public const extension: string = "log";

    public const backupFileExt: string = AbPathData.getInstance()!.EXTENSION_SEP +"bak" +AbPathData.getInstance()!.EXTENSION_SEP +"txt";

    public const ALLBINARY: string = "allbinary";

    public const NAME: string = "LOG_NAME";

    public const DESCRIPTION: string = "LOG_DESCRIPTION";

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGDATA_H
