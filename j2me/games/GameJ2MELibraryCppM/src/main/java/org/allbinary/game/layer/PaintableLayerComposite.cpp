
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

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/layer/Layer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaintableLayerComposite: public Paintable {
        

    private: const paintableArray: std::vector<Layer>;

public constructor (std::vector<Layer> paintableArray){

            super();
        this.paintableArray= paintableArray;
    
}


    public paint(Graphics graphics){




                        for (
    index: int32_t = this.paintableArray!.length
                ;--index >= 0; )
        {
this.paintableArray[index]!.paint(graphics);
    
}

}


    public paintThreed(Graphics graphics){

    paintableInterface: PaintableInterface;;
    




                        for (
    index: int32_t = this.paintableArray!.length
                ;--index >= 0; )
        {
paintableInterface= this.paintableArray[index]! as PaintableInterface;
    
paintableInterface!.paintThreed(graphics);
    
}

}


};

            

