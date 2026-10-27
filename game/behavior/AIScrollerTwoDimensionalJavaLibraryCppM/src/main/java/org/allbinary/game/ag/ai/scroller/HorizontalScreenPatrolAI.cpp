
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_HORIZONTALSCREENPATROLAI_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_HORIZONTALSCREENPATROLAI_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/scroller/HorizontalScreenPatrolAI.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/audio/PlayerQueue.h>

      
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
int32_t HorizontalScreenPatrolAI::SOUND = SmallIntegerSingletonFactory::getInstance()->getAt(433);

HorizontalScreenPatrolAI::HorizontalScreenPatrolAI(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : BasicAI(ownerLayerInterface, gameInput), keyDirection(Canvas::LEFT), displayInfoSingleton(DisplayInfoSingleton::getInstance()), firingX(this->displayInfoSingleton->getLastHalfWidth()), timeDelayHelper(new TimeDelayHelper(240)), secondaryPlayerQueue(SecondaryPlayerQueueFactory::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->sound= dynamic_cast<Sound*>(hashtable->get(HorizontalScreenPatrolAI::SOUND));
    

                        if(this->sound == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("No Sound Provided!!");
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto HorizontalScreenPatrolAI::processAI(AllBinaryLayerManager* allBinaryLayerManager) -> void{
BasicAI::processKeyAI(this->keyDirection);
    

                        if(this->timeDelayHelper->isTimeTNT())
                        
                                    {
                                    
    AllBinaryLayer* layerInterface = this->getOwnerLayerInterface();;
    

    int32_t currentOwnerLayerX = layerInterface->getXP();;
    

                        if(currentOwnerLayerX <  -layerInterface->getWidth())
                        
                                    {
                                    
    int32_t y = MyRandomFactory::getInstance()->getAbsoluteNextIntAllowZero(50);;
    
layerInterface->setPosition(this->displayInfoSingleton->getLastWidth() +layerInterface->getWidth() +50, y, layerInterface->getZP());
    
this->firedIndex= 0;
    
this->firingX= this->displayInfoSingleton->getLastHalfWidth() +MyRandomFactory::getInstance()->getNextInt(this->displayInfoSingleton->getLastHalfWidth());
    
this->secondaryPlayerQueue->add(this->sound);
    

                                    }
                                

                        if(currentOwnerLayerX < this->firingX && currentOwnerLayerX >  -layerInterface->getWidth())
                        
                                    {
                                    BasicAI::processKeyAI(Canvas::KEY_NUM1);
    

    AllBinaryGameLayerManager* gameLayerManager = dynamic_cast<AllBinaryGameLayerManager*>(allBinaryLayerManager);;
    

    int32_t FIRE = (gameLayerManager->getGameInfo()->getCurrentLevel() +12)>>2;;
    

                        if(FIRE > this->MAX_FIRE)
                        
                                    {
                                    FIRE= this->MAX_FIRE;
    

                                    }
                                

                        if(this->firedIndex > FIRE)
                        
                                    {
                                    this->firedIndex= 0;
    
this->firingX= Integer.MIN_VALUE;
    

                                    }
                                
this->firedIndex++;
    

                                    }
                                

                                    }
                                
}


    auto HorizontalScreenPatrolAI::nextDirection() -> void{
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_SCROLLER_HORIZONTALSCREENPATROLAI_CPP
