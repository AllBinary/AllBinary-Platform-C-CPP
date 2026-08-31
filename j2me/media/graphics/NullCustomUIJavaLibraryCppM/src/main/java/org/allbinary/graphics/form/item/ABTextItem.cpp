
        /* Generated Code Do Not Modify */
        



#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomCustomItem.h"
#include "ABCustomItemInterface.h"
#include "ABStringComponent.h"

class ABTextItem: public CustomCustomItem: public ABCustomItemInterface {
        

public constructor (string label, int32_t layout, string altText, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
            super(label, backgroundBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public keyPressed(int32_t keyCode){
}


    public paintUnselected(Graphics graphics, int32_t x, int32_t y){
}


    public ABStringComponent getLabelStringComponent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ABStringComponent.NULL_STRING_COMPONENT;
    
}


};

            

