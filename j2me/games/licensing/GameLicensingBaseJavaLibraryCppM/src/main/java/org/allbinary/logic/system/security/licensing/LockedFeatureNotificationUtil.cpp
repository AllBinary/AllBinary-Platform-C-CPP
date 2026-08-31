
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
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
        

    private: static const instance: LockedFeatureNotificationUtil = new LockedFeatureNotificationUtil();

    public static LockedFeatureNotificationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LockedFeatureNotificationUtil.instance;
    
}


    private: const gameNotificationEvent: GameNotificationEvent = new GameNotificationEvent(this, LicenseStrings.getInstance()!.LOCKED, SmallIntegerSingletonFactory.getInstance()!.getAt(3), BasicColorFactory.getInstance()!.RED, BooleanFactory.getInstance()!.FALSE);

                //@Throws(Exception.constructor)
            
    public fire(){
PrimaryPlayerQueueFactory.getInstance()!.add(ErrorSound.getInstance());
    
GameNotificationEventHandler.getInstance()!.fireEvent(this.gameNotificationEvent);
    
}


                //@Throws(Exception.constructor)
            
    public fireWithColor(BasicColor basicColor){
PrimaryPlayerQueueFactory.getInstance()!.add(ErrorSound.getInstance());
    
this.gameNotificationEvent!.setBasicColorP(basicColor);
    
GameNotificationEventHandler.getInstance()!.fireEvent(this.gameNotificationEvent);
    
}


};

            

