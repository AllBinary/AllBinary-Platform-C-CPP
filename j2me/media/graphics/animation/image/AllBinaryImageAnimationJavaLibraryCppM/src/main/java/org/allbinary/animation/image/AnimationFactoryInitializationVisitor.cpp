
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
        



            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AnimationFactoryInitializationVisitor
            : public Object
         {
        

    public width: int32_t= 0;

    public height: int32_t= 0;

    public dx: int32_t= 0;

    public dy: int32_t= 0;

    public originalDx: int32_t= 0;

    public originalDy: int32_t= 0;

    public visit(){
}


    public string toString(){

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    commonLabels: CommonLabels = CommonLabels.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(PositionStrings.getInstance()!.DX_LABEL)!.appendfloat(this.dx);
    
stringBuffer!.append(PositionStrings.getInstance()!.DY_LABEL)!.appendfloat(this.dy);
    
stringBuffer!.append(commonLabels!.WIDTH_LABEL);
    
stringBuffer!.appendint(this.width);
    
stringBuffer!.append(commonSeps!.SPACE);
    
stringBuffer!.append(commonLabels!.HEIGHT_LABEL);
    
stringBuffer!.appendint(this.height);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

