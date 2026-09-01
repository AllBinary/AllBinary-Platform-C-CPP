
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

    public: static const CustomGPoint NULL_CUSTOM_POINT = CustomGPoint(0, 0, 0);

    public: static CustomGPoint getInstance(GPoint point);

    public: static CustomGPoint getInstance3(int32_t x, int32_t y);

    private: int32_t cx= 0;

    private: int32_t cy= 0;

    private: int32_t cz= 0;

public: CustomGPoint(int32_t x, int32_t y, int32_t z);

    public: void setX(int32_t x);

    public: int32_t getX();

    public: void setY(int32_t y);

    public: int32_t getY();

    public: void setZ(int32_t z);

    public: int32_t getZ();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CUSTOMGPOINT_H
