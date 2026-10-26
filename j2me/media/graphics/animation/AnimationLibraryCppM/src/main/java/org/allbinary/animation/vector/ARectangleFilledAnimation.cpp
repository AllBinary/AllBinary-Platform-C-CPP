
        /* Generated Code Do Not Modify */
        



#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RectangleFilledAnimation.h"

class ARectangleFilledAnimation: public RectangleFilledAnimation {

    public: int32_t x= 0;

    public: int32_t y= 0;

public: ARectangleFilledAnimation() : RectangleFilledAnimation(0, 0, BasicColorFactory::getInstance().BLACK){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void nextFrame(){
}


    public: void paintXY(Graphics graphics, int32_t unusedX, int32_t unusedY){
super.paintXY(graphics, this->x, this->y);
    
}


};

            

