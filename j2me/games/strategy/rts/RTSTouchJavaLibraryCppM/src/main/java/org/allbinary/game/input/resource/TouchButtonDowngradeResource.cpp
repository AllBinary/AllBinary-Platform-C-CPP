
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2007 AllBinary 
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
        



#include <org/allbinary/input/motion/button/TouchButtonBlankResource.h>

      
#include <org/allbinary/input/motion/button/TouchButtonResource.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TouchButtonDowngradeResource: public TouchButtonResource {

    private: static const TouchButtonResource instance = TouchButtonDowngradeResource();

    public: static TouchButtonResource getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TouchButtonDowngradeResource::instance();
    
}


private: TouchButtonDowngradeResource() : TouchButtonResource("/touch_button_downgrade_64_by_64.png", "/touch_button_downgrade_hint_64_by_64.png"){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

