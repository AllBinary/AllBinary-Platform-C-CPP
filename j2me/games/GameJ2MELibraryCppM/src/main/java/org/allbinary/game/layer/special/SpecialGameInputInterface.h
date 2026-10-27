
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class GameKeyEvent;
#include <org/allbinary/graphics/paint/PaintableInterface.h>
class AllBinaryLayerManager;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/PaintableInterface.h>)
#include <org/allbinary/graphics/paint/PaintableInterface.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif

        #endif
    
