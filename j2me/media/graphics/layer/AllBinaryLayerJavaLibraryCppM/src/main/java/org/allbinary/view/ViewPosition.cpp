
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ViewPositionBase.h"

class ViewPosition: public ViewPositionBase {
        

    public static ViewPosition getInstanceD(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ViewPosition(0, 0, 0);
    
}


    private: allbinaryLayer: AllBinaryLayer = AllBinaryLayer.NULL_ALLBINARY_LAYER;

protected constructor (int32_t x, int32_t y, int32_t z){
            super(x, y, z);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public int32_t getX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.allbinaryLayer!.getXP();;
    
}


    public int32_t getY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.allbinaryLayer!.getYP();;
    
}


    public int32_t getZ(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.allbinaryLayer!.getZP();;
    
}


    public int32_t getX2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getX() +this.allbinaryLayer!.getWidth();
    
}


    public int32_t getY2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getY() +this.allbinaryLayer!.getHeight();
    
}


    public int32_t getZ2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>((this.getZ() +this.allbinaryLayer!.getDepth()));
    
}


    public setAllbinaryLayer(any = {} allbinaryLayer){
this.allbinaryLayer= allbinaryLayer as unknown as AllBinaryLayer;
    
}


};

            

