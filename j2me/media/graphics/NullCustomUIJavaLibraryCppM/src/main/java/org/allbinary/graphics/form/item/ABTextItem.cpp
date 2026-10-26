
        /* Generated Code Do Not Modify */
        



#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomCustomItem.h"
#include "ABCustomItemInterface.h"
#include "ABStringComponent.h"

class ABTextItem: public CustomCustomItem, public ABCustomItemInterface {

public: ABTextItem(std::string label, int32_t layout, std::string altText, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor) : CustomCustomItem(label, backgroundBasicColor, foregroundBasicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void keyPressed(int32_t keyCode){
}


    public: void paintUnselected(Graphics graphics, int32_t x, int32_t y){
}


    public: ABStringComponent getLabelStringComponent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ABStringComponent::NULL_STRING_COMPONENT;
    
}


};

            

