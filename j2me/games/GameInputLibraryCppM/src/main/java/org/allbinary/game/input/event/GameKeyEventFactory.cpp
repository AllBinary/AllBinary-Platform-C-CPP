
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameKeyEvent.h"

class GameKeyEventFactory
            : public Object
         {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static GameKeyEventFactory getInstance(){

                        if(GameKeyEventFactory.instance == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    GameKeyEventFactory.instance= new GameKeyEventFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameKeyEventFactory.instance as GameKeyEventFactory;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const TOUCH_BUTTON_SOURCE_ID: int32_t = 2;

    public const MOTION_GESTURE_SOURCE_ID: int32_t = 3;

    private: const MAX_SOURCES: int32_t = 4;

    private: ARRAY: std::vector<std::vector<GameKeyEvent>> = new Array(this.MAX_SOURCES).fill(null).map(() => new Array(InputFactory.getInstance()!.MAX).fill(0))
                                                            ;

private constructor (){

            super();
        }


    public init(){

    nullUtil: NullUtil = NullUtil.getInstance()!;;
    

    size: int32_t = InputFactory.getInstance()!.MAX;;
    




                        for (
    index: int32_t = this.MAX_SOURCES;--index >= 0; )
        {




                        for (
    index2: int32_t = size;--index2 >= 0; )
        {
this.ARRAY[index]![index2]= GameKeyEvent.createEvent(nullUtil!.NULL_OBJECT, index, index2);
    
}

}

}


                //@Throws(Exception.constructor)
            
    public GameKeyEvent getInstanceForKey(GameKeyEventSourceInterface anyType, int32_t key){

    gameKeyEvent: GameKeyEvent = this.ARRAY[anyType!.getSourceId()]![key]!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return gameKeyEvent;
    
}


                //@Throws(Exception.constructor)
            
    public GameKeyEvent getInstanceForInput(GameKeyEventSourceInterface anyType, Input input){

    gameKeyEvent: GameKeyEvent = this.ARRAY[anyType!.getSourceId()]![input.getId()]!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return gameKeyEvent;
    
}


};

            

