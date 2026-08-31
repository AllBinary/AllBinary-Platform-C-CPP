
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CUSTOMGPOINT_H
        #define ORG_ALLBINARY_GRAPHICS_CUSTOMGPOINT_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GPoint.h"

class CustomGPoint: public GPoint {
        

    public static const NULL_CUSTOM_POINT: CustomGPoint = new CustomGPoint(0, 0, 0);

    public static CustomGPoint getInstance(GPoint point);

    public static CustomGPoint getInstance3(int32_t x, int32_t y);

    private: cx: int32_t= 0;

    private: cy: int32_t= 0;

    private: cz: int32_t= 0;

public constructor (int32_t x, int32_t y, int32_t z);

    public setX(int32_t x);

    public int32_t getX();

    public setY(int32_t y);

    public int32_t getY();

    public setZ(int32_t z);

    public int32_t getZ();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CUSTOMGPOINT_H
