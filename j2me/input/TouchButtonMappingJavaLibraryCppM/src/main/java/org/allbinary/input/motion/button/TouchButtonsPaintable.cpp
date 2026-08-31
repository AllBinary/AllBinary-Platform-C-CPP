
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
        



#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonFactory.h"
#include "TouchButton.h"

class TouchButtonsPaintable: public Paintable {
        

    const foregroundBasicColor: BasicColor;

    const foregroundColor: int32_t;

    const basicSetColorUtil: BasicColorSetUtil = BasicColorSetUtil.getInstance()!;

    private: const touchButtonFactory: TouchButtonFactory = TouchButtonFactory.getInstance()!;

public constructor (BasicColor basicColor){

            super();
        this.foregroundBasicColor= basicColor;
    
this.foregroundColor= basicColor!.intValue();
    
}


    public paint(Graphics graphics){

    list: BasicArrayList = this.touchButtonFactory!.getList()!;;
    
this.basicSetColorUtil!.setBasicColorP3(graphics, this.foregroundBasicColor, this.foregroundColor);
    

    touchButton: TouchButton;;
    




                        for (
    index: int32_t = list.size()!;--index >= 0; )
        {
touchButton= list.objectArray[index]! as TouchButton;
    
touchButton!.paint(graphics);
    
}





                        for (
    index: int32_t = list.size()!;--index >= 0; )
        {
touchButton= list.objectArray[index]! as TouchButton;
    
touchButton!.paintHint(graphics);
    
}

}


};

            

