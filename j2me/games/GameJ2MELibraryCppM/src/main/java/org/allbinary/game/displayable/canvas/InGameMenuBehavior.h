
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

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseMenuBehavior.h"
#include "AllBinaryGameCanvas.h"
#include "GameCanvasNonBotPaintable.h"

class InGameMenuBehavior: public BaseMenuBehavior {

    private: static const InGameMenuBehavior instanceC = InGameMenuBehavior();

    public: static InGameMenuBehavior getInstance();

                //@Throws(Exception.constructor)
            
    public: void onDisplayChangeEvent(AllBinaryGameCanvas allBinaryGameCanvas, DisplayChangeEvent displayChangeEvent);

    public: void initSpecialPaint(AllBinaryGameCanvas allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void initMenu(AllBinaryGameCanvas allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void updateMenu(AllBinaryGameCanvas allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void popupMenu(AllBinaryGameCanvas allBinaryGameCanvas);

    public: void closeMenu(AllBinaryGameCanvas allBinaryGameCanvas);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INGAMEMENUBEHAVIOR_H
