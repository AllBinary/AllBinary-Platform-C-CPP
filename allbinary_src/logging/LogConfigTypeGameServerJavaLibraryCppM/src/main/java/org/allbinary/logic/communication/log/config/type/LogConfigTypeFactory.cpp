
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/config/type/LogConfigType.h"

class LogConfigTypeFactory
            : public Object
         {

    private: static LogConfigTypeFactory* instance() { static std::unique_ptr<LogConfigTypeFactory> value(new LogConfigTypeFactory()); return value.get(); }

    public: static LogConfigTypeFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogConfigTypeFactory::instance();
    
}


    private: const std::string NO_DESCRIPTION = "No Description";

    public: LogConfigType* INIT_SERVER = new LogConfigType("Init Server", this->NO_DESCRIPTION);

    public: LogConfigType* LOBBY_SERVER = new LogConfigType("Lobby Server", this->NO_DESCRIPTION);

    public: LogConfigType* GAME_SERVER = new LogConfigType("Game Server", this->NO_DESCRIPTION);

    public: LogConfigType* GAME_SIMULATOR = new LogConfigType("Game Simulator", this->NO_DESCRIPTION);

    public: LogConfigType* CUSTOM_TYPES = new LogConfigType("Custom Types", this->NO_DESCRIPTION);

private: LogConfigTypeFactory(){
LogConfigTypes::LOGGING.add(this->INIT_SERVER);
    
}


};

            

