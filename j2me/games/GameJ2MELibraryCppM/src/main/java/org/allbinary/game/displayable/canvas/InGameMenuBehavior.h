
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INGAMEMENUBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INGAMEMENUBEHAVIOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class DisplayChangeEvent;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/BaseMenuBehavior.h"
class AllBinaryGameCanvas;
class GameCanvasNonBotPaintable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InGameMenuBehavior: public BaseMenuBehavior {

    private: static InGameMenuBehavior* instanceC_owner();
    private: static InGameMenuBehavior* instanceC;

    public: static InGameMenuBehavior* getInstance();


            
    public: InGameMenuBehavior();
        
                //@Throws(Exception.constructor)
            
    public: void onDisplayChangeEvent(AllBinaryGameCanvas* allBinaryGameCanvas, DisplayChangeEvent* displayChangeEvent);

    public: void initSpecialPaint(AllBinaryGameCanvas* allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void initMenu(AllBinaryGameCanvas* allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void updateMenu(AllBinaryGameCanvas* allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void popupMenu(AllBinaryGameCanvas* allBinaryGameCanvas);

    public: void closeMenu(AllBinaryGameCanvas* allBinaryGameCanvas);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INGAMEMENUBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INGAMEMENUBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INGAMEMENUBEHAVIOR_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>)
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>
#endif
#if __has_include("org/allbinary/game/displayable/canvas/BaseMenuBehavior.h")
#include "org/allbinary/game/displayable/canvas/BaseMenuBehavior.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameCanvasNonBotPaintable.h")
#include "org/allbinary/game/displayable/canvas/GameCanvasNonBotPaintable.h"
#endif

        #endif
    
