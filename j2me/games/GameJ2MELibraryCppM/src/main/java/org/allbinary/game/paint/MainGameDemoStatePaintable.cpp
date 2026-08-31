
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MainGameDemoStatePaintable: public Paintable {
        

    private: const ownershipPaintableInterface: Paintable;

    private: const menuPaintableInterface: Paintable;

public constructor (Paintable ownershipPaintableInterface, Paintable menuPaintableInterface){

            super();
        this.ownershipPaintableInterface= ownershipPaintableInterface;
    
this.menuPaintableInterface= menuPaintableInterface;
    
}


    public paint(Graphics graphics){
this.menuPaintableInterface!.paint(graphics);
    
this.ownershipPaintableInterface!.paint(graphics);
    
}


    public Paintable getOwnershipPaintableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ownershipPaintableInterface;
    
}


    public Paintable getMenuPaintableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.menuPaintableInterface;
    
}


};

            

