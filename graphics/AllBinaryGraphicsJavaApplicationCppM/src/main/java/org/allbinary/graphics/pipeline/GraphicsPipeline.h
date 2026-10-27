
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PIPELINE_GRAPHICSPIPELINE_H
        #define ORG_ALLBINARY_GRAPHICS_PIPELINE_GRAPHICSPIPELINE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
class GPoint;
class PointFactory;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GraphicsPipeline: public BasicGraphicsPipeline {

public: GraphicsPipeline(BasicArrayList* points);

                //@Throws(Exception.constructor)
            
    public: void rotateTheta(double aTheta);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_PIPELINE_GRAPHICSPIPELINE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_PIPELINE_GRAPHICSPIPELINE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_PIPELINE_GRAPHICSPIPELINE_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h")
#include "org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h"
#endif

        #endif
    
