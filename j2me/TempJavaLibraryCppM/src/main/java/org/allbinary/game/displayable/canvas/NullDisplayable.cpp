
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Temp should not be in any build
class NullDisplayable: public Canvas {

    private: static NullDisplayable* SINGLETON() { static std::unique_ptr<NullDisplayable> value(new NullDisplayable()); return value.get(); }

    public: static NullDisplayable* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullDisplayable::SINGLETON();
    
}


private: NullDisplayable(){
}


    public: void paint(Graphics* graphics){
}


};

            

