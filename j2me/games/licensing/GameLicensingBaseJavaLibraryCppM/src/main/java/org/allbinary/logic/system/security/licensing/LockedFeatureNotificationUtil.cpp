
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDFEATURENOTIFICATIONUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDFEATURENOTIFICATIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/LockedFeatureNotificationUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/logic/system/security/licensing/LicenseStrings.h"


LockedFeatureNotificationUtil::LockedFeatureNotificationUtil() : gameNotificationEvent(new GameNotificationEvent(this, LicenseStrings::getInstance()->LOCKED, SmallIntegerSingletonFactory::getInstance()->getAt(3), BasicColorFactory::getInstance()->RED, BooleanFactory::getInstance()->FALSE)) {
        }
        auto LockedFeatureNotificationUtil::instance_owner() -> LockedFeatureNotificationUtil* { static std::unique_ptr<LockedFeatureNotificationUtil> value(new LockedFeatureNotificationUtil()); return value.get(); }
LockedFeatureNotificationUtil* LockedFeatureNotificationUtil::instance = LockedFeatureNotificationUtil::instance_owner();

    auto LockedFeatureNotificationUtil::getInstance() -> LockedFeatureNotificationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LockedFeatureNotificationUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto LockedFeatureNotificationUtil::fire() -> void{
PrimaryPlayerQueueFactory::getInstance()->add(ErrorSound::getInstance());
    
GameNotificationEventHandler::getInstance()->fireEvent(this->gameNotificationEvent);
    
}


                //@Throws(Exception.constructor)
            
    auto LockedFeatureNotificationUtil::fireWithColor(BasicColor* basicColor) -> void{
PrimaryPlayerQueueFactory::getInstance()->add(ErrorSound::getInstance());
    
this->gameNotificationEvent->setBasicColorP(basicColor);
    
GameNotificationEventHandler::getInstance()->fireEvent(this->gameNotificationEvent);
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDFEATURENOTIFICATIONUTIL_CPP
