
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class PlayerGameInput;
#include <org/allbinary/game/input/PlayerGameInputCompositeInterface.h>
class PointFactory;
class Rectangle;
class CanvasStrings;
class AllBinaryLayerManager;
class StringUtil;
class BasicArrayListD;
class StaticViewPosition;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/AllBinaryGameLayer.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PlayerGameInputGameLayer: public AllBinaryGameLayer, public virtual PlayerGameInputCompositeInterface {

    private: PlayerGameInput* playerGameInput;

public: PlayerGameInputGameLayer(int32_t playerInputId);

    public: PlayerGameInput* getPlayerGameInput();

    public: void initInputProcessors();

                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager* myManager);

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PLAYERGAMEINPUTGAMELAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_PLAYERGAMEINPUTGAMELAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_PLAYERGAMEINPUTGAMELAYER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/input/PlayerGameInput.h>)
#include <org/allbinary/game/input/PlayerGameInput.h>
#endif
#if __has_include(<org/allbinary/game/input/PlayerGameInputCompositeInterface.h>)
#include <org/allbinary/game/input/PlayerGameInputCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/CanvasStrings.h>)
#include <org/allbinary/graphics/displayable/CanvasStrings.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/view/StaticViewPosition.h>)
#include <org/allbinary/view/StaticViewPosition.h>
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryGameLayer.h")
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#endif

        #endif
    
