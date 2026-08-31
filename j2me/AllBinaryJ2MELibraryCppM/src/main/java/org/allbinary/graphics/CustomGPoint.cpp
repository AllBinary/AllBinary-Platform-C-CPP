
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
        



















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GPoint.h"

class CustomGPoint: public GPoint {
        

    public static const NULL_CUSTOM_POINT: CustomGPoint = new CustomGPoint(0, 0, 0);

    public static CustomGPoint getInstance(GPoint point){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new CustomGPoint(point.getX(), point.getY(), point.getZ());
    
}


    public static CustomGPoint getInstance3(int32_t x, int32_t y){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new CustomGPoint(x, y, 3);
    
}


    private: cx: int32_t= 0;

    private: cy: int32_t= 0;

    private: cz: int32_t= 0;

public constructor (int32_t x, int32_t y, int32_t z){
            super(x, y, z);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public setX(int32_t x){
this.cx= x;
    
}


    public int32_t getX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.cx;
    
}


    public setY(int32_t y){
this.cy= y;
    
}


    public int32_t getY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.cy;
    
}


    public setZ(int32_t z){
this.cz= z;
    
}


    public int32_t getZ(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.cz;
    
}


};

            

