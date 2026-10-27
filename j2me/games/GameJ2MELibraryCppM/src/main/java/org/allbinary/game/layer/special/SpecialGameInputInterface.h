
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SpecialGameInputInterface: public PaintableInterface {

                //@Throws(Exception.constructor)
            
    public: virtual void up() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void down() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void right() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void left() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void strafeLeft() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void strafeRight() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void fire(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void special1(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void special2(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void special3(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void special4(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void special5(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTINTERFACE_H
