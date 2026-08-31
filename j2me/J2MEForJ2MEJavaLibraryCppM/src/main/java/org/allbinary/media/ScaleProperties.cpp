
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScaleProperties
            : public Object
         {
        

    public static const instance: ScaleProperties = new ScaleProperties();

    public scaleX: float = 1.0;

    public scaleY: float = 1.0;

    public scaleWidth: int32_t= 0;

    public scaleHeight: int32_t= 0;

    public shouldScale: bool= false;

    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StringMaker().append(CommonLabels.getInstance()!.COLON_SEP)!.appendboolean(this.shouldScale)!.append("scaleX: ")!.appendfloat(this.scaleX)!.append("scaleY: ")!.appendfloat(this.scaleY)!.append("scaleWidth: ")!.appendint(this.scaleWidth)!.append("scaleHeight: ")!.appendint(this.scaleHeight)!.toString();;
    
}


};

            

