
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/paint/ColorFillBasePaintable.h"

class ColorFillPaintable: public ColorFillBasePaintable {

    protected: DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();

public: ColorFillPaintable(BasicColor* basicColor) : ColorFillBasePaintable(basicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void paint(Graphics* graphics){
graphics->setColor(this->colorP);
    
graphics->fillRect(0, 0, this->displayInfoSingleton->getLastWidth(), this->displayInfoSingleton->getLastHeight());
    
}


};

            

