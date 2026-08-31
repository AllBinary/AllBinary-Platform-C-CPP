
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
        



            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GPoint
            : public Object
         {
        

    public static GPoint getInstance(GPoint point){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new GPoint(point.getX(), point.getY(), point.getZ());
    
}


    private: static const POINT_LABEL: string = "Point: ";

    public static string toStringStatic(int32_t x, int32_t y, int32_t z){

    stringBuffer: StringMaker = new StringMaker();;
    

    positionStrings: PositionStrings = PositionStrings.getInstance()!;;
    
stringBuffer!.append(GPoint.POINT_LABEL);
    
stringBuffer!.append(positionStrings!.X_LABEL);
    
stringBuffer!.appendint(x);
    
stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
stringBuffer!.append(positionStrings!.Y_LABEL);
    
stringBuffer!.appendint(y);
    
stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
stringBuffer!.append(positionStrings!.Z_LABEL);
    
stringBuffer!.appendint(z);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    private: const x: int32_t;

    private: const y: int32_t;

    private: const z: int32_t;

public constructor (int32_t x, int32_t y, int32_t z){

            super();
        this.x= x;
    
this.y= y;
    
this.z= z;
    
}


    public int32_t getX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.x;
    
}


    public int32_t getY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.y;
    
}


    public int32_t getZ(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.z;
    
}


    public int32_t getRawX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.x;
    
}


    public int32_t getRawY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.y;
    
}


    public int32_t getRawZ(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.z;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GPoint.toStringStatic(this.getX(), this.getY(), this.getZ());;
    
}


};

            

