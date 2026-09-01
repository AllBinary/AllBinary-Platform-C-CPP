
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

    public: static const CustomGPoint NULL_CUSTOM_POINT = CustomGPoint(0, 0, 0);

    public: static CustomGPoint getInstance(GPoint point){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CustomGPoint(point.getX(), point.getY(), point.getZ());
    
}


    public: static CustomGPoint getInstance3(int32_t x, int32_t y){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CustomGPoint(x, y, 3);
    
}


    private: int32_t cx= 0;

    private: int32_t cy= 0;

    private: int32_t cz= 0;

public: CustomGPoint(int32_t x, int32_t y, int32_t z){
            super(x, y, z);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void setX(int32_t x){
this->cx= x;
    
}


    public: int32_t getX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cx;
    
}


    public: void setY(int32_t y){
this->cy= y;
    
}


    public: int32_t getY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cy;
    
}


    public: void setZ(int32_t z){
this->cz= z;
    
}


    public: int32_t getZ(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cz;
    
}


};

            

