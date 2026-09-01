
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
        



            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HorizontalScreenPatrolAI: public BasicAI {

    public: static const Integer SOUND = SmallIntegerSingletonFactory::getInstance().getAt(433);

    protected: int32_t keyDirection = Canvas::LEFT;

    private: const DisplayInfoSingleton displayInfoSingleton = DisplayInfoSingleton::getInstance();

    private: int32_t firingX = this->displayInfoSingleton.getLastHalfWidth();

    private: int32_t firedIndex = 0;

    private: const int32_t MAX_FIRE = 28;

    private: const TimeDelayHelper timeDelayHelper = TimeDelayHelper(240);

    private: const PlayerQueue secondaryPlayerQueue = SecondaryPlayerQueueFactory::getInstance();

    private: Sound sound;

public: HorizontalScreenPatrolAI(Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput){
            super(ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->sound= hashtable.get(HorizontalScreenPatrolAI::SOUND) as Sound;
    

                        if(this->sound == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("No Sound Provided!!");
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager allBinaryLayerManager){
super.processKeyAI(this->keyDirection);
    

                        if(this->timeDelayHelper.isTimeTNT())
                        
                                    {
                                    
    AllBinaryLayer layerInterface = this->getOwnerLayerInterface();;
    

    int32_t currentOwnerLayerX = layerInterface.getXP();;
    

                        if(currentOwnerLayerX <  -layerInterface.getWidth())
                        
                                    {
                                    
    int32_t y = MyRandomFactory::getInstance().getAbsoluteNextIntAllowZero(50);;
    
layerInterface.setPosition(this->displayInfoSingleton.getLastWidth() +layerInterface.getWidth() +50, y, layerInterface.getZP());
    
this->firedIndex= 0;
    
this->firingX= this->displayInfoSingleton.getLastHalfWidth() +MyRandomFactory::getInstance().getNextInt(this->displayInfoSingleton.getLastHalfWidth());
    
this->secondaryPlayerQueue.add(this->sound);
    

                                    }
                                

                        if(currentOwnerLayerX < this->firingX && currentOwnerLayerX >  -layerInterface.getWidth())
                        
                                    {
                                    super.processKeyAI(Canvas::KEY_NUM1);
    

    AllBinaryGameLayerManager gameLayerManager = allBinaryLayerManager as AllBinaryGameLayerManager;;
    

    int32_t FIRE = (gameLayerManager.getGameInfo().getCurrentLevel() +12)>>2;;
    

                        if(FIRE > this->MAX_FIRE)
                        
                                    {
                                    FIRE= this->MAX_FIRE;
    

                                    }
                                

                        if(this->firedIndex > FIRE)
                        
                                    {
                                    this->firedIndex= 0;
    
this->firingX= Integer::MIN_VALUE;
    

                                    }
                                
this->firedIndex++;
    

                                    }
                                

                                    }
                                
}


    protected: void nextDirection(){
}


};

            

