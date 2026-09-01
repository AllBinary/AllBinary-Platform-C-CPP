
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameCanvas.h"

class BaseMenuBehavior
            : public Object
         {

    private: static BaseMenuBehavior instance() { return BaseMenuBehavior(); }

    public: static BaseMenuBehavior getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BaseMenuBehavior::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: void onDisplayChangeEvent(AllBinaryGameCanvas allBinaryGameCanvas, DisplayChangeEvent displayChangeEvent){
}


    public: void initSpecialPaint(AllBinaryGameCanvas allBinaryGameCanvas){
allBinaryGameCanvas.setNonBotPaintableP(NullPaintable::getInstance());
    
}


                //@Throws(Exception.constructor)
            
    public: void initMenu(AllBinaryGameCanvas allBinaryGameCanvas){
}


                //@Throws(Exception.constructor)
            
    public: void updateMenu(AllBinaryGameCanvas allBinaryGameCanvas){
}


                //@Throws(Exception.constructor)
            
    public: void popupMenu(AllBinaryGameCanvas allBinaryGameCanvas){
}


    public: void closeMenu(AllBinaryGameCanvas allBinaryGameCanvas){
}


};

            

