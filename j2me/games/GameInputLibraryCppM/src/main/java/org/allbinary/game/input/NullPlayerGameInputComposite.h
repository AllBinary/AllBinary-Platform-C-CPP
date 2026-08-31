
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PlayerGameInputCompositeInterface.h"
#include "NoPlayerGameInput.h"
#include "PlayerGameInput.h"

class NullPlayerGameInputComposite
            : public Object
        : public PlayerGameInputCompositeInterface {
        

    public static const NULL_PLAYER_GAME_INPUT_COMPOSITE: NullPlayerGameInputComposite = new NullPlayerGameInputComposite();

    public string getName();

                //@Throws(Exception.constructor)
            
    public processInput(AllBinaryLayerManager layerManager);

    public initInputProcessors();

    public PlayerGameInput getPlayerGameInput();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_NULLPLAYERGAMEINPUTCOMPOSITE_H
