
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

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/paint/LocationPaintableInterface.h"

class LocationPaintable
            : public Object
        , public LocationPaintableInterface {

    private: static LocationPaintable* instance() { static std::unique_ptr<LocationPaintable> value(new LocationPaintable()); return value.get(); }

    public: static LocationPaintable* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LocationPaintable::instance();
    
}


    public: void paintXY(Graphics* graphics, int32_t x, int32_t y){
}


};

            

