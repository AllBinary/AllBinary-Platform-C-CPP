
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Integer.h"
        
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameNotification
            : public Object
         {
        

    public static const NULL_GAME_NOTIFICATION_EVENT: GameNotificationEvent = new GameNotificationEvent(NullUtil.getInstance()!.NULL_OBJECT, StringUtil.getInstance()!.EMPTY_STRING, new Integer(0), BasicColorFactory.getInstance()!.RED, BooleanFactory.getInstance()!.FALSE);

    public const stringList: BasicArrayList = new BasicArrayListD();

    public const timeList: BasicArrayList = new BasicArrayListD();

    public const colorList: BasicArrayList = new BasicArrayListD();

    public add(string string, Integer seconds, BasicColor basicColor){

                        if(!this.stringList!.contains(string))
                        
                                    {
                                    this.stringList!.add(string);
    
this.timeList!.add(seconds);
    
this.colorList!.add(basicColor);
    

                                    }
                                
}


    public clear(){
this.stringList!.clear();
    
this.timeList!.clear();
    
this.colorList!.clear();
    
}


    public int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.stringList!.size();;
    
}


};

            

