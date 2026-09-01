
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

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ColorFillBasePaintable.h"

class ColorFillPaintable: public ColorFillBasePaintable {

    protected: const DisplayInfoSingleton displayInfoSingleton = DisplayInfoSingleton::getInstance();

public: ColorFillPaintable(BasicColor basicColor){
            super(basicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void paint(Graphics graphics){
graphics.setColor(this->colorP);
    
graphics.fillRect(0, 0, this->displayInfoSingleton.getLastWidth(), this->displayInfoSingleton.getLastHeight());
    
}


};

            

