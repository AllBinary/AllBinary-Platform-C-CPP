
        /* Generated Code Do Not Modify */
        



#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RectangleFilledAnimation.h"

class ARectangleFilledAnimation: public RectangleFilledAnimation {
        

    public x: int32_t= 0;

    public y: int32_t= 0;

public constructor (){
            super(0, 0, BasicColorFactory.getInstance()!.BLACK);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public nextFrame(){
}


    public paintXY(Graphics graphics, int32_t unusedX, int32_t unusedY){
super.paintXY(graphics, this.x, this.y);
    
}


};

            

