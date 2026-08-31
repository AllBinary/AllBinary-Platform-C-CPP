
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H

            #include "../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogConfigType.h"
#include "LogConfigTypes.h"

class LogConfigTypeFactory
            : public Object
         {
        

    private: static const instance: LogConfigTypeFactory = new LogConfigTypeFactory();

    public static LogConfigTypeFactory getInstance();

    private: const NO_DESCRIPTION: string = "No Description";

    public const OS: LogConfigType = new LogConfigType("Operating System", this.NO_DESCRIPTION);

    public const FACTORYERROR: LogConfigType = new LogConfigType("Factory Error", this.NO_DESCRIPTION);

    public const FILE: LogConfigType = new LogConfigType("File", this.NO_DESCRIPTION);

    public const FILEERROR: LogConfigType = new LogConfigType("File Error", this.NO_DESCRIPTION);

    public const IDLOGGING: LogConfigType = new LogConfigType("ID Logging", this.NO_DESCRIPTION);

    public const REPLACE: LogConfigType = new LogConfigType("Replace", this.NO_DESCRIPTION);

    public const REPLACE_INFO: LogConfigType = new LogConfigType("Replace Info", this.NO_DESCRIPTION);

    public const REPLACEERROR: LogConfigType = new LogConfigType("Replace Error", this.NO_DESCRIPTION);

private constructor ();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H
