
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
        

    public static const SOUND: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(433)!;

    keyDirection: int32_t = Canvas.LEFT;

    private: const displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: firingX: int32_t = this.displayInfoSingleton!.getLastHalfWidth()!;

    private: firedIndex: int32_t = 0;

    private: const MAX_FIRE: int32_t = 28;

    private: const timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(240);

    private: const secondaryPlayerQueue: PlayerQueue = SecondaryPlayerQueueFactory.getInstance()!;

    private: const sound: Sound;

public constructor (Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput){
            super(ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.sound= hashtable.get(HorizontalScreenPatrolAI.SOUND) as Sound;
    

                        if(this.sound == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("No Sound Provided!!");
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager){
super.processKeyAI(this.keyDirection);
    

                        if(this.timeDelayHelper!.isTimeTNT())
                        
                                    {
                                    
    layerInterface: AllBinaryLayer = this.getOwnerLayerInterface()!;;
    

    currentOwnerLayerX: int32_t = layerInterface!.getXP()!;;
    

                        if(currentOwnerLayerX <  -layerInterface!.getWidth())
                        
                                    {
                                    
    y: int32_t = MyRandomFactory.getInstance()!.getAbsoluteNextIntAllowZero(50)!;;
    
layerInterface!.setPosition(this.displayInfoSingleton!.getLastWidth() +layerInterface!.getWidth() +50, y, layerInterface!.getZP());
    
this.firedIndex= 0;
    
this.firingX= this.displayInfoSingleton!.getLastHalfWidth() +MyRandomFactory.getInstance()!.getNextInt(this.displayInfoSingleton!.getLastHalfWidth());
    
this.secondaryPlayerQueue!.add(this.sound);
    

                                    }
                                

                        if(currentOwnerLayerX < this.firingX && currentOwnerLayerX >  -layerInterface!.getWidth())
                        
                                    {
                                    super.processKeyAI(Canvas.KEY_NUM1);
    

    gameLayerManager: AllBinaryGameLayerManager = allBinaryLayerManager as AllBinaryGameLayerManager;;
    

    FIRE: int32_t = (gameLayerManager!.getGameInfo()!.getCurrentLevel() +12)>>2;;
    

                        if(FIRE > this.MAX_FIRE)
                        
                                    {
                                    FIRE= this.MAX_FIRE;
    

                                    }
                                

                        if(this.firedIndex > FIRE)
                        
                                    {
                                    this.firedIndex= 0;
    
this.firingX= Integer.MIN_VALUE;
    

                                    }
                                
this.firedIndex++;
    

                                    }
                                

                                    }
                                
}


    nextDirection(){
}


};

            

