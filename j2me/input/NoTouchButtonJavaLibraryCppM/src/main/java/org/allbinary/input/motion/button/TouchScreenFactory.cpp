
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
        



            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchScreenTypesFactory.h"
#include "TouchScreenType.h"

class TouchScreenFactory
            : public Object
         {
        

    private: static const SINGLETON: TouchScreenFactory = new TouchScreenFactory();

    public static TouchScreenFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TouchScreenFactory.SINGLETON;
    
}


    private: multiTouch: bool= false;

    private: touch: bool= false;

    private: touchScreenType: TouchScreenType = TouchScreenTypesFactory.getInstance()!.NOTOUCH;

private constructor (){

            super();
        }


    public bool isMultiTouch(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.multiTouch;
    
}


    public setTouch(bool touch){
}


    public bool isTouch(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.touch;
    
}


    public TouchScreenType getTouchScreenType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.touchScreenType;
    
}


};

            

