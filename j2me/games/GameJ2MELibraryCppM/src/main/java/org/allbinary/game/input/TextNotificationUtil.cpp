
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/audio/ErrorSound.h>

      
#include <org/allbinary/media/audio/PrimaryPlayerQueueFactory.h>

      
#include <org/allbinary/media/audio/SelectSound.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TextNotificationUtil
            : public Object
         {
        

    private: static const instance: TextNotificationUtil = new TextNotificationUtil();

    public static TextNotificationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TextNotificationUtil.instance;
    
}


                //@Throws(Exception.constructor)
            
    public fireError(string message){
PrimaryPlayerQueueFactory.getInstance()!.add(ErrorSound.getInstance());
    
this.fire(message);
    
}


                //@Throws(Exception.constructor)
            
    public fireNew(string message){
PrimaryPlayerQueueFactory.getInstance()!.add(SelectSound.getInstance());
    
this.fire(message);
    
}


                //@Throws(Exception.constructor)
            
    public fireSuccess(string message){
PrimaryPlayerQueueFactory.getInstance()!.add(SelectSound.getInstance());
    
this.fire(message);
    
}


    private: const TWO: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(2)!;

    private: const FALSE: Boolean = BooleanFactory.getInstance()!.FALSE;

    private: const gameNotificationEventHandler: GameNotificationEventHandler = GameNotificationEventHandler.getInstance()!;

                //@Throws(Exception.constructor)
            
    public fire(string message){

    gameNotificationEvent: GameNotificationEvent = new GameNotificationEvent(this, message, this.TWO, BasicColorFactory.getInstance()!.RED, this.FALSE);;
    
this.gameNotificationEventHandler!.fireEvent(gameNotificationEvent);
    
}


};

            

