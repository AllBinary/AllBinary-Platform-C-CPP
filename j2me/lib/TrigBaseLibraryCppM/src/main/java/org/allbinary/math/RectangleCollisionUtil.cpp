
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
        



            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RectangleCollisionUtil
            : public Object
         {

    private: static RectangleCollisionUtil instance() { return RectangleCollisionUtil(); }

    public: static RectangleCollisionUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RectangleCollisionUtil::instance();
    
}


private: RectangleCollisionUtil(){
}


    public: bool isCollision(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, int32_t rect2X1, int32_t rect2Y1, int32_t rect2X2, int32_t rect2Y2){

                        if(rect2X1 >= rectX2 || rect2Y1 >= rectY2 || rect2X2 <= rectX1 || rect2Y2 <= rectY1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    public: bool isInside(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, int32_t x, int32_t y){

                        if(x >= rectX2 || y >= rectY2 || x <= rectX1 || y <= rectY1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


};

            

