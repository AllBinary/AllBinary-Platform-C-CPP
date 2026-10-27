
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CUSTOMGPOINT_CPP
        #define ORG_ALLBINARY_GRAPHICS_CUSTOMGPOINT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/CustomGPoint.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/GPoint.h"

auto CustomGPoint::NULL_CUSTOM_POINT_owner() -> CustomGPoint* { static std::unique_ptr<CustomGPoint> value(new CustomGPoint(0, 0, 0)); return value.get(); }
CustomGPoint* CustomGPoint::NULL_CUSTOM_POINT = CustomGPoint::NULL_CUSTOM_POINT_owner();

    auto CustomGPoint::getInstance(GPoint* point) -> CustomGPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new CustomGPoint(point->getX(), point->getY(), point->getZ());
    
}


    auto CustomGPoint::getInstance3(int32_t x, int32_t y) -> CustomGPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new CustomGPoint(x, y, 3);
    
}


CustomGPoint::CustomGPoint(int32_t x, int32_t y, int32_t z) : GPoint(x, y, z){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto CustomGPoint::setX(int32_t x) -> void{
this->cx= x;
    
}


    auto CustomGPoint::getX() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cx;
    
}


    auto CustomGPoint::setY(int32_t y) -> void{
this->cy= y;
    
}


    auto CustomGPoint::getY() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cy;
    
}


    auto CustomGPoint::setZ(int32_t z) -> void{
this->cz= z;
    
}


    auto CustomGPoint::getZ() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cz;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_CUSTOMGPOINT_CPP
