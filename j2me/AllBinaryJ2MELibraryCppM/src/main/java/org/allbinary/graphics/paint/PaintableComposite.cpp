
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Paintable.h"
#include "PaintableInterface.h"

class PaintableComposite: public Paintable {
        

    private: paintableArray: std::vector<PaintableInterface>;

public constructor (std::vector<PaintableInterface> paintableArray){

            super();
        this.paintableArray= paintableArray;
    
}


    public paint(Graphics graphics){




                        for (
    index: int32_t = this.paintableArray!.length -1;index >= 0; index--)
        {
this.paintableArray[index]!.paint(graphics);
    
}

}


    public paintThreed(Graphics graphics){




                        for (
    index: int32_t = this.paintableArray!.length -1;index >= 0; index--)
        {
this.paintableArray[index]!.paintThreed(graphics);
    
}

}


};

            

