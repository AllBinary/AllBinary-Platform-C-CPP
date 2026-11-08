
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_KEYPRESSESAI_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_KEYPRESSESAI_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/KeyPressesAI.h"
        

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

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

KeyPressesAI::KeyPressesAI(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : BasicAI(ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->keys= std::vector<int32_t>(hashtable->size());
    

    std::vector<Object*> objectArray = HashtableUtil::getInstance()->getKeysAsArray(hashtable);;
    

    int32_t size = objectArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->keys[index]= JavaBoxes::unbox<int32_t>(hashtable->get(objectArray[index]));
    
}

}


                //@Throws(Exception.constructor)
            
    auto KeyPressesAI::processAI(AllBinaryLayerManager* allBinaryLayerManager) -> void{

                        if(this->on)
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < this->keys.size(); index++)
        {
BasicAI::processKeyAI(this->keys[index]);
    
}


                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto KeyPressesAI::toggle() -> void{

                        if(this->isOn())
                        
                                    {
                                    this->setOn(false);
    

                                    }
                                
                        else {
                            this->setOn(true);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto KeyPressesAI::disable() -> void{
this->setOn(false);
    
}


                //@Throws(Exception.constructor)
            
    auto KeyPressesAI::enable() -> void{
this->setOn(true);
    
}


    auto KeyPressesAI::setOn(bool on) -> void{
this->on= on;
    
}


    auto KeyPressesAI::isOn() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->on;
    
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_KEYPRESSESAI_CPP
