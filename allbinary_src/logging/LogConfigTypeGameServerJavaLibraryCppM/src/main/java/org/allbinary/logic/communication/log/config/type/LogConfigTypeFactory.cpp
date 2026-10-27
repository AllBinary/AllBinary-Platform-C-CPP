
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
        
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/config/type/LogConfigType.h"

auto LogConfigTypeFactory::instance_owner() -> LogConfigTypeFactory* { static std::unique_ptr<LogConfigTypeFactory> value(new LogConfigTypeFactory()); return value.get(); }
LogConfigTypeFactory* LogConfigTypeFactory::instance = LogConfigTypeFactory::instance_owner();

    auto LogConfigTypeFactory::getInstance() -> LogConfigTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogConfigTypeFactory::instance;
    
}


LogConfigTypeFactory::LogConfigTypeFactory() : INIT_SERVER(new LogConfigType("Init Server", this->NO_DESCRIPTION)), LOBBY_SERVER(new LogConfigType("Lobby Server", this->NO_DESCRIPTION)), GAME_SERVER(new LogConfigType("Game Server", this->NO_DESCRIPTION)), GAME_SIMULATOR(new LogConfigType("Game Simulator", this->NO_DESCRIPTION)), CUSTOM_TYPES(new LogConfigType("Custom Types", this->NO_DESCRIPTION)){
LogConfigTypes::LOGGING->add(this->INIT_SERVER);
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_CPP
