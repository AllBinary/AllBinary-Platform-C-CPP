
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
        #include "LocationPaintable.h"

class StringLocationPaintable: public LocationPaintable {

    private: std::string value;

public: StringLocationPaintable(std::string value){
this->value= value;
    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
graphics.drawString(this->value, x, y, 0);
    
}


};

            

