
        /* Generated Code Do Not Modify */
        



#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Temp should not be in any build
class NullDisplayable: public Canvas {
        

    private: static const SINGLETON: NullDisplayable = new NullDisplayable();

    public static NullDisplayable getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullDisplayable.SINGLETON;
    
}


private constructor (){

            super();
        }


    public paint(Graphics graphics){
}


};

            

