
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
        



            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicColor.h"

class BasicColorSetUtil
            : public Object
         {
        

    private: static const instance: BasicColorSetUtil = new BasicColorSetUtil();

    public static BasicColorSetUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColorSetUtil.instance;
    
}


protected constructor (){

            super();
        }


    public setBasicColorP(Graphics graphics, BasicColor basicColor){
graphics.setColor(basicColor!.intValue());
    
}


    public setBasicColorP3(Graphics graphics, BasicColor basicColor, int32_t value){
graphics.setColor(value);
    
}


};

            

