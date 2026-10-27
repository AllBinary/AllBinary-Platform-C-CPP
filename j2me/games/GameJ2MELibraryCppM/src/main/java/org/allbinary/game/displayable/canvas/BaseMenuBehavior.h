
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"

class BaseMenuBehavior
            : public Object
         {

    private: static BaseMenuBehavior* instance() { static std::unique_ptr<BaseMenuBehavior> value(new BaseMenuBehavior()); return value.get(); }

    public: static BaseMenuBehavior* getInstance();

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
