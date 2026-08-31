
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

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicDecimal.h"

class Orientation
            : public Object
         {
        

    public static NONE: Orientation = new Orientation(0, 0, 0);

    private: static SINGLETON: Orientation = new Orientation(0, 0, 0);

    public static Orientation getInstance(int32_t yaw, int32_t pitch, int32_t roll){
Orientation.SINGLETON.yaw.setint(yaw);
    
Orientation.SINGLETON.pitch.setint(pitch);
    
Orientation.SINGLETON.roll.setint(roll);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Orientation.SINGLETON;
    
}


    public yaw: BasicDecimal = new BasicDecimal(0);

    public pitch: BasicDecimal = new BasicDecimal(0);

    public roll: BasicDecimal = new BasicDecimal(0);

private constructor (int32_t yaw, int32_t pitch, int32_t roll){

            super();
        this.yaw.setint(yaw);
    
this.pitch.setint(pitch);
    
this.roll.setint(roll);
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Y: ");
    
stringBuffer!.append(this.yaw.toString());
    
stringBuffer!.append(" P: ");
    
stringBuffer!.append(this.pitch.toString());
    
stringBuffer!.append(" R: ");
    
stringBuffer!.append(this.roll.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

