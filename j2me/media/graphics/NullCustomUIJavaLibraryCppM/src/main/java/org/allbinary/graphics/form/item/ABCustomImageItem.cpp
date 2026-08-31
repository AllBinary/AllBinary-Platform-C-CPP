
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ABCustomItem.h"

class ABCustomImageItem: public ABCustomItem {
        

    yOffset: int32_t = 0;

public constructor (string label, Image image, int32_t layout, string altText, BasicColor basicColor, int32_t yOffset){
            super(label, basicColor, basicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public Image getImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullImage.NULL_IMAGE;
    
}


};

            

