
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
        #include "Layer.h"

class NullLayer: public Layer {

    private: static NullLayer instance() { return NullLayer(); }

    public: static NullLayer getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullLayer::instance();
    
}


private: NullLayer(){
            super(0, 0);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void paint(Graphics graphics){
}


};

            

