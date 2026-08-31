
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_TEXTNOTIFICATIONUTIL_H
        #define ORG_ALLBINARY_GAME_INPUT_TEXTNOTIFICATIONUTIL_H

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

    public static TextNotificationUtil getInstance();

                //@Throws(Exception.constructor)
            
    public fireError(string message);

                //@Throws(Exception.constructor)
            
    public fireNew(string message);

                //@Throws(Exception.constructor)
            
    public fireSuccess(string message);

    private: const TWO: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(2)!;

    private: const FALSE: Boolean = BooleanFactory.getInstance()!.FALSE;

    private: const gameNotificationEventHandler: GameNotificationEventHandler = GameNotificationEventHandler.getInstance()!;

                //@Throws(Exception.constructor)
            
    public fire(string message);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_TEXTNOTIFICATIONUTIL_H
