
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_NOGAMENOTIFICATIONHUDSINGLETON_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_NOGAMENOTIFICATIONHUDSINGLETON_H

            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameNotificationHud.h"

class NoGameNotificationHudSingleton
            : public Object
         {

    private: static NoGameNotificationHudSingleton instance() { return NoGameNotificationHudSingleton(); }

    public: static NoGameNotificationHudSingleton getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: GameNotificationHud gameNotificationHud = GameNotificationHud::NULL_GAME_NOTIFICATION;

private: NoGameNotificationHudSingleton();

    public: GameNotificationHud getGameNotificationHud();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_NOTIFICATION_NOGAMENOTIFICATIONHUDSINGLETON_H
