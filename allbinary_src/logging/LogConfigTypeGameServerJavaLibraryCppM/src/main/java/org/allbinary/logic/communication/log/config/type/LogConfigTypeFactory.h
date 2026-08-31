
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H

            #include "../../../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogConfigType.h"

class LogConfigTypeFactory
            : public Object
         {
        

    private: static const instance: LogConfigTypeFactory = new LogConfigTypeFactory();

    public static LogConfigTypeFactory getInstance();

    private: const NO_DESCRIPTION: string = "No Description";

    public const INIT_SERVER: LogConfigType = new LogConfigType("Init Server", this.NO_DESCRIPTION);

    public const LOBBY_SERVER: LogConfigType = new LogConfigType("Lobby Server", this.NO_DESCRIPTION);

    public const GAME_SERVER: LogConfigType = new LogConfigType("Game Server", this.NO_DESCRIPTION);

    public const GAME_SIMULATOR: LogConfigType = new LogConfigType("Game Simulator", this.NO_DESCRIPTION);

    public const CUSTOM_TYPES: LogConfigType = new LogConfigType("Custom Types", this.NO_DESCRIPTION);

private constructor ();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H
