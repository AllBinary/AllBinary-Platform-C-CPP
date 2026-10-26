
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDFEATURENOTIFICATIONUTIL_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDFEATURENOTIFICATIONUTIL_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/audio/ErrorSound.h>

      
#include <org/allbinary/media/audio/PrimaryPlayerQueueFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LicenseStrings.h"

class LockedFeatureNotificationUtil
            : public Object
         {

    private: static LockedFeatureNotificationUtil instance() { return LockedFeatureNotificationUtil(); }

    public: static LockedFeatureNotificationUtil getInstance();

    private: const GameNotificationEvent gameNotificationEvent = GameNotificationEvent(this, LicenseStrings::getInstance().LOCKED, SmallIntegerSingletonFactory::getInstance().getAt(3), BasicColorFactory::getInstance().RED, BooleanFactory::getInstance().FALSE);

                //@Throws(Exception.constructor)
            
    public: void fire();

                //@Throws(Exception.constructor)
            
    public: void fireWithColor(BasicColor basicColor);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDFEATURENOTIFICATIONUTIL_H
