
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGCONFIGDATA_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGCONFIGDATA_H

            #include "../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LogConfigData
            : public Object
         {
        

    private: static const instance: LogConfigData = new LogConfigData();

    public static LogConfigData getInstance();

private constructor ();

    public const NAME: string = "LOG_CONFIG_NAME";

    public const DESCRIPTION: string = "LOG_CONFIG_DESCRIPTION";

    public const FILE: string = "LOG_CONFIG_FILE";

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGCONFIGDATA_H
