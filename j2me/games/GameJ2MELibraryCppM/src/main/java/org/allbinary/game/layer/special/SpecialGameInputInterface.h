
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTINTERFACE_H
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTINTERFACE_H

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SpecialGameInputInterface: public PaintableInterface {
        

                //@Throws(Exception.constructor)
            
    up();

                //@Throws(Exception.constructor)
            
    down();

                //@Throws(Exception.constructor)
            
    right();

                //@Throws(Exception.constructor)
            
    left();

                //@Throws(Exception.constructor)
            
    strafeLeft();

                //@Throws(Exception.constructor)
            
    strafeRight();

                //@Throws(Exception.constructor)
            
    fire(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    special1(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    special2(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    special3(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    special4(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

                //@Throws(Exception.constructor)
            
    special5(AllBinaryLayerManager layerManager, GameKeyEvent gameKeyEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTINTERFACE_H
