
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
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FormUtil
            : public Object
         {
        

    private: static const instance: FormUtil = new FormUtil();

    public static FormUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FormUtil.instance;
    
}


    public Rectangle createFormRectangle(){

    displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;;
    

    pointFactory: PointFactory = PointFactory.getInstance()!;;
    

    rectangle: Rectangle = new Rectangle(pointFactory!.createXY(30, 10), displayInfo!.getLastWidth() -30, displayInfo!.getLastHeight() -35);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rectangle;
    
}


};

            

