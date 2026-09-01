
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_POINTSUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_POINTSUTIL_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Double.h"
        
#include <org/allbinary/animation/VectorRotationGenerator.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PointsUtil
            : public Object
         {

    private: static PointsUtil instance() { return PointsUtil(); }

    public: static PointsUtil getInstance();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList doTransforms(BasicArrayList pointVector, number angle, GPoint fulcrumPoint);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_POINTSUTIL_H
