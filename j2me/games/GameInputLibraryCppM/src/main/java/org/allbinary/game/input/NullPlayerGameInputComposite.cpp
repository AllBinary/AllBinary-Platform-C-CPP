
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PlayerGameInputCompositeInterface.h"
#include "NoPlayerGameInput.h"
#include "PlayerGameInput.h"

class NullPlayerGameInputComposite
            : public Object
        : public PlayerGameInputCompositeInterface {

    public: static const NullPlayerGameInputComposite NULL_PLAYER_GAME_INPUT_COMPOSITE = NullPlayerGameInputComposite();

    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    
}


                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager layerManager){
}


    public: void initInputProcessors(){
}


    public: PlayerGameInput getPlayerGameInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoPlayerGameInput::getInstance();;
    
}


};

            

