
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
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInput
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const gameKeyEventList: BasicArrayList;

    private: const removalGameKeyEventList: BasicArrayList;

    const isRemoveDuplicateKeyPresses: bool;

public constructor (BasicArrayList gameKeyEventList, BasicArrayList removalGameKeyEventList){

            super();
        this.gameKeyEventList= gameKeyEventList;
    
this.removalGameKeyEventList= removalGameKeyEventList;
    
this.isRemoveDuplicateKeyPresses= Features.getInstance()!.isFeature(InputFeatureFactory.getInstance()!.REMOVE_DUPLICATE_KEY_PRESSES);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public add(GameKeyEvent gameKeyEvent){

                        if(this.isRemoveDuplicateKeyPresses && this.gameKeyEventList!.contains(gameKeyEvent))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(gameKeyEvent != 
                                    null
                                )
                        
                                    {
                                    this.gameKeyEventList!.add(gameKeyEvent);
    

                                    }
                                
                        else {
                            this.logUtil!.putF("Danger Passed Null GameKeyEvent", this, this.commonStrings!.ADD);
    

                        }
                            
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public addForRemoval(GameKeyEvent gameKeyEvent){
this.removalGameKeyEventList!.add(gameKeyEvent);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isForRemoval(GameKeyEvent gameKeyEvent){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.removalGameKeyEventList!.contains(gameKeyEvent);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public clear(){
this.gameKeyEventList!.clear();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public removeNonAIInputGameKeyEvents(){

    list: BasicArrayList = this.gameKeyEventList;;
    

    gameKeyEvent: GameKeyEvent;;
    




                        for (
    index: int32_t = list.size()!;--index >= 0; )
        {
gameKeyEvent= list.objectArray[index]! as GameKeyEvent;
    

                        if(gameKeyEvent!.getSourceId() != 1)
                        
                                    {
                                    list.removeAt(index);
    

                                    }
                                
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public update(){

    removeList: BasicArrayList = this.removalGameKeyEventList;;
    

    list: BasicArrayList = this.gameKeyEventList;;
    

    size: int32_t = removeList!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    anyType: any = removeList!.objectArray[index]!;;
    




                        for (
    index2: int32_t = list.size()!;--index2 >= 0; )
        {

                        if(list.objectArray[index2] == anyType)
                        
                                    {
                                    list.removeAt(index2);
    

                                    }
                                
}

}

removeList!.clear();
    
}


    BasicArrayList getRemovalGameKeyEventList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.removalGameKeyEventList;
    
}


    BasicArrayList getGameKeyEventList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameKeyEventList;
    
}


};

            

