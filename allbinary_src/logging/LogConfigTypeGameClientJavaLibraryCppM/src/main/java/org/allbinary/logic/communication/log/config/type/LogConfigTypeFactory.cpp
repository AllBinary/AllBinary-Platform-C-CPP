
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/config/type/LogConfigType.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"

auto LogConfigTypeFactory::instance_owner() -> LogConfigTypeFactory* { static std::unique_ptr<LogConfigTypeFactory> value(new LogConfigTypeFactory()); return value.get(); }
LogConfigTypeFactory* LogConfigTypeFactory::instance = LogConfigTypeFactory::instance_owner();

    auto LogConfigTypeFactory::getInstance() -> LogConfigTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LogConfigTypeFactory::instance;
    
}


LogConfigTypeFactory::LogConfigTypeFactory() : OS(new LogConfigType("Operating System", this->NO_DESCRIPTION)), FACTORYERROR(new LogConfigType("Factory Error", this->NO_DESCRIPTION)){
LogConfigTypes::LOGGING->add(OS);
    
LogConfigTypes::LOGGING->add(this->FACTORYERROR);
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_CPP
