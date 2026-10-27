
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SPINNERAI_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_SPINNERAI_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/SpinnerAI.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

SpinnerAI::SpinnerAI(std::vector<int32_t> direction, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : BasicAI(ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->direction= direction;
    
}


                //@Throws(Exception.constructor)
            
    auto SpinnerAI::processAI(AllBinaryLayerManager* allBinaryLayerManager) -> void{

                        if(this->isEven)
                        
                                    {
                                    BasicAI::processKeyAI(this->direction[0]);
    
this->isEven= false;
    

                                    }
                                
                        else {
                            BasicAI::processKeyAI(Canvas::KEY_NUM1);
    
this->isEven= true;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_SPINNERAI_CPP
