
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_NULLPLAYERGAMEINPUTCOMPOSITE_H
        #define ORG_ALLBINARY_GAME_INPUT_NULLPLAYERGAMEINPUTCOMPOSITE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"
#include "org/allbinary/game/input/NoPlayerGameInput.h"
#include "org/allbinary/game/input/PlayerGameInput.h"

class NullPlayerGameInputComposite
            : public Object
        , public PlayerGameInputCompositeInterface {

    public: static NullPlayerGameInputComposite* NULL_PLAYER_GAME_INPUT_COMPOSITE() { static std::unique_ptr<NullPlayerGameInputComposite> value(new NullPlayerGameInputComposite()); return value.get(); }

    public: std::string getName();

                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager* layerManager);

    public: void initInputProcessors();

    public: PlayerGameInput* getPlayerGameInput();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_NULLPLAYERGAMEINPUTCOMPOSITE_H
