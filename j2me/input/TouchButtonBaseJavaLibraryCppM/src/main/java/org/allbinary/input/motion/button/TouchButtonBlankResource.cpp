
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

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchButtonResource.h"

class TouchButtonBlankResource: public TouchButtonResource {

    private: static inline TouchButtonResource* instance = new TouchButtonBlankResource();

    public: static TouchButtonResource* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TouchButtonBlankResource::instance;
    
}


private: TouchButtonBlankResource() : TouchButtonResource("/touch_button_64_by_64.png", "/touch_button_hint_64_by_64.png"){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

