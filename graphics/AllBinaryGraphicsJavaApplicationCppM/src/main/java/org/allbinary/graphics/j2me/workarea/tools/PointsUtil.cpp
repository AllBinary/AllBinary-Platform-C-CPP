
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_POINTSUTIL_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_POINTSUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/tools/PointsUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Double.h"
        
#include <org/allbinary/animation/VectorRotationGenerator.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PointsUtil::PointsUtil() {
        }
        auto PointsUtil::instance_owner() -> PointsUtil* { static std::unique_ptr<PointsUtil> value(new PointsUtil()); return value.get(); }
PointsUtil* PointsUtil::instance = PointsUtil::instance_owner();

    auto PointsUtil::getInstance() -> PointsUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PointsUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto PointsUtil::doTransforms(BasicArrayList* pointVector, double angle, GPoint* fulcrumPoint) -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return VectorRotationGenerator::getInstance()->getListAtAngle(fulcrumPoint->getX(), fulcrumPoint->getY(), pointVector, AngleFactory::getInstance()->getAt(angle.intValue()));;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_POINTSUTIL_CPP
