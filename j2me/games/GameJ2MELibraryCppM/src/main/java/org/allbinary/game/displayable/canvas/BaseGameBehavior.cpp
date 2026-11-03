
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEGAMEBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEGAMEBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/BaseGameBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/advertisement/GameAdStateFactory.h>

      
#include <org/allbinary/game/GameAdState.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/opengles/CurrentDisplayableFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/DemoGameBehavior.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"


BaseGameBehavior::BaseGameBehavior() {
        }
        auto BaseGameBehavior::instanceC_owner() -> BaseGameBehavior* { static std::unique_ptr<BaseGameBehavior> value(new BaseGameBehavior()); return value.get(); }
BaseGameBehavior* BaseGameBehavior::instanceC = BaseGameBehavior::instanceC_owner();

    auto BaseGameBehavior::getInstance() -> DemoGameBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BaseGameBehavior::instanceC;
    
}


                //@Throws(Exception.constructor)
            
    auto BaseGameBehavior::init() -> void{

    GameAdState* gameAdState = GameAdStateFactory::getInstance()->getCurrentInstance();;
    
gameAdState->playingAdState();
    
}


    auto BaseGameBehavior::pause(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{

    Features* features = Features::getInstance();;
    

                        if(features->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL_AS_GAME_THREAD))
                        
                                    {
                                    
    CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory::getInstance();;
    
currentDisplayableFactory->setRunnable(allBinaryGameCanvas->gamePauseRunnable);
    

                                    }
                                
}


    auto BaseGameBehavior::unPause(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{

                        if(Features::getInstance()->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL_AS_GAME_THREAD))
                        
                                    {
                                    
    CurrentDisplayableFactory* currentDisplayableFactory = CurrentDisplayableFactory::getInstance();;
    
currentDisplayableFactory->setRunnable(allBinaryGameCanvas->gameRunnable);
    
currentDisplayableFactory->setDisplayable(allBinaryGameCanvas);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto BaseGameBehavior::updateTouch(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
allBinaryGameCanvas->updateTouch2();
    
}


                //@Throws(Exception.constructor)
            
    auto BaseGameBehavior::updateScreenButtonPaintable(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
allBinaryGameCanvas->updateScreenButtonPaintable2();
    
}


                //@Throws(Exception.constructor)
            
    auto BaseGameBehavior::setGameState(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
allBinaryGameCanvas->updateGameState();
    
}


    auto BaseGameBehavior::removeAllGameKeyInputListeners(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
allBinaryGameCanvas->removeAllGameKeyInputListeners2();
    
}


                //@Throws(Exception.constructor)
            
    auto BaseGameBehavior::updateEndGameProcessor(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
allBinaryGameCanvas->updateEndGameProcessor2();
    
}


                //@Throws(Exception.constructor)
            
    auto BaseGameBehavior::buildGame(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
allBinaryGameCanvas->buildGame2();
    
}


                //@Throws(Exception.constructor)
            
    auto BaseGameBehavior::run(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
allBinaryGameCanvas->run2();
    
}


                //@Throws(Exception.constructor)
            
    auto BaseGameBehavior::setHighScore(AbeClientInformationInterface* abeClientInformation, AllBinaryGameCanvas* allBinaryGameCanvas, std::string name, int64_t score, bool autoSubmit, bool isLast) -> void{
allBinaryGameCanvas->setHighScore2(abeClientInformation, name, score, autoSubmit, isLast);
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEGAMEBEHAVIOR_CPP
