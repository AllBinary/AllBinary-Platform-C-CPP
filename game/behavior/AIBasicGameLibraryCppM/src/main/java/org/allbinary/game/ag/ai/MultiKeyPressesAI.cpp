
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/ai/KeyPressesAI.h"

class MultiKeyPressesAI: public KeyPressesAI {

    private: TimeDelayHelper* toggleTimeHelper = new TimeDelayHelper(600);

    private: GameTickTimeDelayHelper* gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

public: MultiKeyPressesAI(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : KeyPressesAI(hashtable, ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->update();
    
}


                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager* allBinaryLayerManager){
}


                //@Throws(Exception.constructor)
            
    private: void update(){

    GameInput* gameInput = this->getGameInput();;
    

    std::vector<int32_t> keys = this->keys;;
    

    int32_t size = keys.size();;
    

                        if(this->isOn())
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < size; index++)
        {

    int32_t key = keys[index].intValue();;
    

                        if(key !=  -1)
                        
                                    {
                                    gameInput->add(this->gameKeyEventFactory.getInstanceForKey(this, key));
    

                                    }
                                
}


                                    }
                                
                        else {
                            



                        for (
    int32_t index = 0;index < size; index++)
        {

    int32_t key = keys[index].intValue();;
    

                        if(key !=  -1)
                        
                                    {
                                    gameInput->addForRemoval(this->gameKeyEventFactory.getInstanceForKey(this, key));
    

                                    }
                                
}


                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void toggle(){

                        if(this->toggleTimeHelper->isTime(this->gameTickTimeDelayHelper->startTime))
                        
                                    {
                                    super.toggle();
    
this->update();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void disable(){

                        if(this->toggleTimeHelper->isTime(this->gameTickTimeDelayHelper->startTime))
                        
                                    {
                                    super.disable();
    
this->update();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void enable(){

                        if(this->toggleTimeHelper->isTime(this->gameTickTimeDelayHelper->startTime))
                        
                                    {
                                    super.enable();
    
this->update();
    

                                    }
                                
}


};

            

