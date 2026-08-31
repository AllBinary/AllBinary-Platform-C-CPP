
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

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/StatePaintable.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicGameDemoPaintable: public StatePaintable {
        

    private: const mainDemoStatePaintable: Paintable;

    private: const ownershipPaintable: Paintable;

    private: const helpPaintableInterface: Paintable;

    private: currentStatePaintable: Paintable = NullPaintable.getInstance()!;

public constructor (Paintable mainDemoStatePaintable, Paintable ownershipPaintable, Paintable helpPaintableInterface){

            super();
        this.mainDemoStatePaintable= mainDemoStatePaintable;
    
this.setCurrentStatePaintable(NullPaintable.getInstance());
    
this.ownershipPaintable= ownershipPaintable;
    
this.helpPaintableInterface= helpPaintableInterface;
    
}


    public setState(int32_t state){

                        if(state == 0)
                        
                                    {
                                    this.setCurrentStatePaintable(this.getMainDemoStatePaintable());
    

                                    }
                                
                             else 
                        if(state == 1)
                        
                                    {
                                    this.setCurrentStatePaintable(this.helpPaintableInterface);
    

                                    }
                                
                        else {
                            this.setCurrentStatePaintable(this.ownershipPaintable);
    

                        }
                            
}


    public paint(Graphics graphics){
this.getCurrentStatePaintable()!.paint(graphics);
    
}


    public Paintable getHelpPaintableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.helpPaintableInterface;
    
}


    setCurrentStatePaintable(Paintable currentStatePaintable){
this.currentStatePaintable= currentStatePaintable;
    
}


    Paintable getCurrentStatePaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.currentStatePaintable;
    
}


    Paintable getMainDemoStatePaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.mainDemoStatePaintable;
    
}


};

            

