
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
        



            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "KeyPressesAI.h"

class MultiKeyPressesAI: public KeyPressesAI {
        

    private: const toggleTimeHelper: TimeDelayHelper = new TimeDelayHelper(600);

    private: const gameTickTimeDelayHelper: GameTickTimeDelayHelper = GameTickTimeDelayHelperFactory.getInstance()!;

public constructor (Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput){
            super(hashtable, ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.update();
    
}


                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager){
}


                //@Throws(Exception.constructor)
            
    update(){

    gameInput: GameInput = this.getGameInput()!;;
    

    keys: std::vector<Integer> = this.keys;;
    

    size: int32_t = keys.length
                ;;
    

                        if(this.isOn())
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < size; index++)
        {

    key: int32_t = keys[index]!.intValue()!;;
    

                        if(key !=  -1)
                        
                                    {
                                    gameInput!.add(this.gameKeyEventFactory!.getInstanceForKey(this, key));
    

                                    }
                                
}


                                    }
                                
                        else {
                            



                        for (
    index: int32_t = 0;index < size; index++)
        {

    key: int32_t = keys[index]!.intValue()!;;
    

                        if(key !=  -1)
                        
                                    {
                                    gameInput!.addForRemoval(this.gameKeyEventFactory!.getInstanceForKey(this, key));
    

                                    }
                                
}


                        }
                            
}


                //@Throws(Exception.constructor)
            
    public toggle(){

                        if(this.toggleTimeHelper!.isTime(this.gameTickTimeDelayHelper!.startTime))
                        
                                    {
                                    super.toggle();
    
this.update();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public disable(){

                        if(this.toggleTimeHelper!.isTime(this.gameTickTimeDelayHelper!.startTime))
                        
                                    {
                                    super.disable();
    
this.update();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public enable(){

                        if(this.toggleTimeHelper!.isTime(this.gameTickTimeDelayHelper!.startTime))
                        
                                    {
                                    super.enable();
    
this.update();
    

                                    }
                                
}


};

            

