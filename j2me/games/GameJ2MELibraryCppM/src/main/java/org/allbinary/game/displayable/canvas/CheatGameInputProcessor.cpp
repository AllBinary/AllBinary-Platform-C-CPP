
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_CHEATGAMEINPUTPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_CHEATGAMEINPUTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/CheatGameInputProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
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
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"

SpecialGameInputInterface* CheatGameInputProcessor::inputProcessor = SpecialGameInputFactory::NO_SPECIAL_GAME_INPUT;

CheatGameInputProcessor::CheatGameInputProcessor(AllBinaryGameCanvas* gameCanvas) : PlayerGameInput(new BasicArrayListD(), new BasicArrayListD(),  -1), gameKeyFactory(GameKeyFactory::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->gameCanvas= gameCanvas;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto CheatGameInputProcessor::update() -> void{

        try {
            
    AllBinaryGameLayerManager* gameLayerManager = this->gameCanvas->getLayerManager();;
    

    BasicArrayList* list = this->getGameKeyEventList();;
    

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Object* anyType = list->objectArray[index];;
    

    int32_t key = GameKeyEventUtil::getKey(anyType);;
    

                        if(key == this->gameKeyFactory->LEVEL_DOWN->getId())
                        
                                    {
                                    CheatGameInputProcessor::inputProcessor->strafeLeft();
    
break;

                    

                                    }
                                
                             else 
                        if(key == this->gameKeyFactory->LEVEL_UP->getId())
                        
                                    {
                                    CheatGameInputProcessor::inputProcessor->strafeRight();
    
break;

                    

                                    }
                                

                        if(key == this->gameKeyFactory->LEFT->getId())
                        
                                    {
                                    CheatGameInputProcessor::inputProcessor->left();
    
break;

                    

                                    }
                                
                             else 
                        if(key == this->gameKeyFactory->RIGHT->getId())
                        
                                    {
                                    CheatGameInputProcessor::inputProcessor->right();
    
break;

                    

                                    }
                                
                             else 
                        if(key == this->gameKeyFactory->UP->getId())
                        
                                    {
                                    CheatGameInputProcessor::inputProcessor->up();
    
break;

                    

                                    }
                                
                             else 
                        if(key == this->gameKeyFactory->DOWN->getId())
                        
                                    {
                                    CheatGameInputProcessor::inputProcessor->down();
    
break;

                    

                                    }
                                
                             else 
                        if(key == this->gameKeyFactory->KEY_NUM1->getId())
                        
                                    {
                                    CheatGameInputProcessor::inputProcessor->special1(gameLayerManager, GameKeyEvent::NONE);
    
break;

                    

                                    }
                                
                             else 
                        if(key == this->gameKeyFactory->KEY_NUM3->getId())
                        
                                    {
                                    CheatGameInputProcessor::inputProcessor->special2(gameLayerManager, GameKeyEvent::NONE);
    
break;

                    

                                    }
                                
}

list->clear();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->UPDATE, &e);
    
}

}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_CHEATGAMEINPUTPROCESSOR_CPP
