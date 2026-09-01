
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: BasicArrayList gameKeyEventList;

    private: BasicArrayList removalGameKeyEventList;

    protected: bool isRemoveDuplicateKeyPresses;

public: GameInput(BasicArrayList gameKeyEventList, BasicArrayList removalGameKeyEventList){
this->gameKeyEventList= gameKeyEventList;
    
this->removalGameKeyEventList= removalGameKeyEventList;
    
this->isRemoveDuplicateKeyPresses= Features::getInstance().isFeature(InputFeatureFactory::getInstance().REMOVE_DUPLICATE_KEY_PRESSES);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void add(GameKeyEvent gameKeyEvent){

                        if(this->isRemoveDuplicateKeyPresses && this->gameKeyEventList.contains(gameKeyEvent))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(gameKeyEvent != 
                                    nullptr
                                )
                        
                                    {
                                    this->gameKeyEventList.add(gameKeyEvent);
    

                                    }
                                
                        else {
                            this->logUtil.putF("Danger Passed Null GameKeyEvent", this, this->commonStrings.ADD);
    

                        }
                            
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addForRemoval(GameKeyEvent gameKeyEvent){
this->removalGameKeyEventList.add(gameKeyEvent);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isForRemoval(GameKeyEvent gameKeyEvent){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->removalGameKeyEventList.contains(gameKeyEvent);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void clear(){
this->gameKeyEventList.clear();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeNonAIInputGameKeyEvents(){

    BasicArrayList list = this->gameKeyEventList;;
    

    GameKeyEvent gameKeyEvent;;
    




                        for (
    int32_t index = list.size();--index >= 0; )
        {
gameKeyEvent= list.objectArray[index]! as GameKeyEvent;
    

                        if(gameKeyEvent.getSourceId() != 1)
                        
                                    {
                                    list.removeAt(index);
    

                                    }
                                
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void update(){

    BasicArrayList removeList = this->removalGameKeyEventList;;
    

    BasicArrayList list = this->gameKeyEventList;;
    

    int32_t size = removeList.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Object* anyType = removeList.objectArray[index];;
    




                        for (
    int32_t index2 = list.size();--index2 >= 0; )
        {

                        if(list.objectArray[index2] == anyType)
                        
                                    {
                                    list.removeAt(index2);
    

                                    }
                                
}

}

removeList.clear();
    
}


    protected: BasicArrayList getRemovalGameKeyEventList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->removalGameKeyEventList;
    
}


    protected: BasicArrayList getGameKeyEventList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameKeyEventList;
    
}


};

            

