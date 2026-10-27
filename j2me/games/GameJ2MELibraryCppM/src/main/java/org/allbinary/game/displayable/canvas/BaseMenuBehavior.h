
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEMENUBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEMENUBEHAVIOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class DisplayChangeEvent;
class NullPaintable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryGameCanvas;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BaseMenuBehavior
            : public virtual Object
         {

    private: static BaseMenuBehavior* instance_owner();
    private: static BaseMenuBehavior* instance;

    public: static BaseMenuBehavior* getInstance();


            
    public: BaseMenuBehavior();
        
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

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEMENUBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEMENUBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEMENUBEHAVIOR_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>)
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/NullPaintable.h>)
#include <org/allbinary/graphics/paint/NullPaintable.h>
#endif
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif

        #endif
    
