
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
        
            #include "../../../../../java/lang/Object.h"
        
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SpinnerAI.h"

class SpinnerAIFactory
            : public Object
        : public ArtificialIntelligenceInterfaceFactoryInterface {

    public: ArtificialIntelligenceInterface getInstance(Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput){

    std::vector<int32_t> direction = {Canvas::LEFT};;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SpinnerAI(direction, ownerLayerInterface, gameInput);
    
}


};

            

