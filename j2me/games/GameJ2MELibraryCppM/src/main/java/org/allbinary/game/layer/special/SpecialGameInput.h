
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUT_H
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Graphics;
class GameKeyEvent;
class AllBinaryLayerManager;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SpecialGameInput
            : public virtual Object
        , public virtual SpecialGameInputInterface {


            
    public: SpecialGameInput();
        
                //@Throws(Exception.constructor)
            
    public: void up();

                //@Throws(Exception.constructor)
            
    public: void down();

                //@Throws(Exception.constructor)
            
    public: void right();

                //@Throws(Exception.constructor)
            
    public: void left();

                //@Throws(Exception.constructor)
            
    public: void strafeLeft();

                //@Throws(Exception.constructor)
            
    public: void strafeRight();

                //@Throws(Exception.constructor)
            
    public: void fire(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public: void special1(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public: void special2(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public: void special3(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public: void special4(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);

                //@Throws(Exception.constructor)
            
    public: void special5(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);

    public: void paint(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUT_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include("org/allbinary/game/layer/special/SpecialGameInputInterface.h")
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"
#endif

        #endif
    
