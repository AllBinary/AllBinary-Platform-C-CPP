
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseMenuBehavior.h"
#include "AllBinaryGameCanvas.h"
#include "GameCanvasNonBotPaintable.h"

class InGameMenuBehavior: public BaseMenuBehavior {
        

    private: static const instanceC: InGameMenuBehavior = new InGameMenuBehavior();

    public static InGameMenuBehavior getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InGameMenuBehavior.instanceC;
    
}


                //@Throws(Exception.constructor)
            
    public onDisplayChangeEvent(AllBinaryGameCanvas allBinaryGameCanvas, DisplayChangeEvent displayChangeEvent){
allBinaryGameCanvas!.updateMenuFromEvent(displayChangeEvent);
    
}


    public initSpecialPaint(AllBinaryGameCanvas allBinaryGameCanvas){
allBinaryGameCanvas!.setNonBotPaintableP(new GameCanvasNonBotPaintable(allBinaryGameCanvas));
    
}


                //@Throws(Exception.constructor)
            
    public initMenu(AllBinaryGameCanvas allBinaryGameCanvas){
allBinaryGameCanvas!.initMenu2();
    
}


                //@Throws(Exception.constructor)
            
    public updateMenu(AllBinaryGameCanvas allBinaryGameCanvas){
allBinaryGameCanvas!.initMenu2();
    
}


                //@Throws(Exception.constructor)
            
    public popupMenu(AllBinaryGameCanvas allBinaryGameCanvas){
allBinaryGameCanvas!.popupMenu2();
    
}


    public closeMenu(AllBinaryGameCanvas allBinaryGameCanvas){
allBinaryGameCanvas!.closeMenu2();
    
}


};

            

