
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_POINTFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_POINTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/PointFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/GPoint.h"

auto PointFactory::instance_owner() -> PointFactory* { static std::unique_ptr<PointFactory> value(new PointFactory()); return value.get(); }
PointFactory* PointFactory::instance = PointFactory::instance_owner();

    auto PointFactory::getInstance() -> PointFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PointFactory::instance;
    
}


    auto PointFactory::init() -> void{
}


PointFactory::PointFactory() : ZERO_ZERO(this->createXYZ(0, 0, 0)){
}


    auto PointFactory::createXY(int32_t x, int32_t y) -> GPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new GPoint(x, y, 0);
    
}


    auto PointFactory::createXYZ(int32_t x, int32_t y, int32_t z) -> GPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new GPoint(x, y, z);
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_POINTFACTORY_CPP
