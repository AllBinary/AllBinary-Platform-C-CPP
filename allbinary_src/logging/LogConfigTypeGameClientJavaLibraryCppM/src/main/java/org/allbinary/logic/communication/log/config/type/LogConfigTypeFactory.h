
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

    private: static LogConfigTypeFactory instance() { return LogConfigTypeFactory(); }

    public: static LogConfigTypeFactory getInstance();

    private: const std::string NO_DESCRIPTION = "No Description";

    public: const LogConfigType OS = LogConfigType("Operating System", this->NO_DESCRIPTION);

    public: const LogConfigType FACTORYERROR = LogConfigType("Factory Error", this->NO_DESCRIPTION);

private: LogConfigTypeFactory();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H
