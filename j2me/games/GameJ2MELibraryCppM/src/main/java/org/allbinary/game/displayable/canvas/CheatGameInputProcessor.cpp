
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/PlayerGameInput.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventUtil.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/special/SpecialGameInputFactory.h>

      
#include <org/allbinary/game/layer/special/SpecialGameInputInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameCanvas.h"

class CheatGameInputProcessor: public PlayerGameInput {

    public: static SpecialGameInputInterface inputProcessor = SpecialGameInputFactory::NO_SPECIAL_GAME_INPUT;

    private: const std::string PROCESS_GAME = "processGame";

    private: AllBinaryGameCanvas gameCanvas;

public: CheatGameInputProcessor(AllBinaryGameCanvas gameCanvas) : PlayerGameInput(BasicArrayListD(), BasicArrayListD(),  -1){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->gameCanvas= gameCanvas;
    
}


    private: const GameKeyFactory gameKeyFactory = GameKeyFactory::getInstance();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void update(){

        try {
            
    AllBinaryGameLayerManager gameLayerManager = this->gameCanvas.getLayerManager();;
    

    BasicArrayList list = this->getGameKeyEventList();;
    

    int32_t size = list.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Object* anyType = list.objectArray[index];;
    

    int32_t key = GameKeyEventUtil::getKey(anyType);;
    

                        if(key == this->gameKeyFactory.LEVEL_DOWN.getId())
                        
                                    {
                                    CheatGameInputProcessor::inputProcessor.strafeLeft();
    
break;

                    

                                    }
                                
                             else 
                        if(key == this->gameKeyFactory.LEVEL_UP.getId())
                        
                                    {
                                    CheatGameInputProcessor::inputProcessor.strafeRight();
    
break;

                    

                                    }
                                

                        if(key == this->gameKeyFactory.LEFT.getId())
                        
                                    {
                                    CheatGameInputProcessor::inputProcessor.left();
    
break;

                    

                                    }
                                
                             else 
                        if(key == this->gameKeyFactory.RIGHT.getId())
                        
                                    {
                                    CheatGameInputProcessor::inputProcessor.right();
    
break;

                    

                                    }
                                
                             else 
                        if(key == this->gameKeyFactory.UP.getId())
                        
                                    {
                                    CheatGameInputProcessor::inputProcessor.up();
    
break;

                    

                                    }
                                
                             else 
                        if(key == this->gameKeyFactory.DOWN.getId())
                        
                                    {
                                    CheatGameInputProcessor::inputProcessor.down();
    
break;

                    

                                    }
                                
                             else 
                        if(key == this->gameKeyFactory.KEY_NUM1.getId())
                        
                                    {
                                    CheatGameInputProcessor::inputProcessor.special1(gameLayerManager, GameKeyEvent::NONE);
    
break;

                    

                                    }
                                
                             else 
                        if(key == this->gameKeyFactory.KEY_NUM3.getId())
                        
                                    {
                                    CheatGameInputProcessor::inputProcessor.special2(gameLayerManager, GameKeyEvent::NONE);
    
break;

                    

                                    }
                                
}

list.clear();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.UPDATE, e);
    
}

}


};

            

