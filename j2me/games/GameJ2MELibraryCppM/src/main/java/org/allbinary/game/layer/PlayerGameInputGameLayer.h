
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PLAYERGAMEINPUTGAMELAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_PLAYERGAMEINPUTGAMELAYER_H

            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/input/PlayerGameInput.h>

      
#include <org/allbinary/game/input/PlayerGameInputCompositeInterface.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/view/StaticViewPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameLayer.h"

class PlayerGameInputGameLayer: public AllBinaryGameLayer: public PlayerGameInputCompositeInterface {
        

    private: playerGameInput: PlayerGameInput;

public constructor (int32_t playerInputId);

    public PlayerGameInput getPlayerGameInput();

    public initInputProcessors();

                //@Throws(Exception.constructor)
            
    public processInput(AllBinaryLayerManager myManager);

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PLAYERGAMEINPUTGAMELAYER_H
