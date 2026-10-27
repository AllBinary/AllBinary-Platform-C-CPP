
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PIPELINE_BASICGRAPHICSPIPELINE_H
        #define ORG_ALLBINARY_GRAPHICS_PIPELINE_BASICGRAPHICSPIPELINE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class GPoint;
class PointFactory;
class Angle;
class NoDecimalTrigTable;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicGraphicsPipeline
            : public virtual Object
         {

    /*protected*/ public: BasicArrayList* pointBasicArrayList;

public: BasicGraphicsPipeline(BasicArrayList* points);

    public: void setInitMatrix(BasicArrayList* points);

    public: void createMatrix();

                //@Throws(Exception.constructor)
            
    public: void translate(int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: void rotateToAngle(Angle* angle);

    private: NoDecimalTrigTable* noDecimalTrigTable;

                //@Throws(Exception.constructor)
            
    private: void rotate(int32_t angle);

                //@Throws(Exception.constructor)
            
    public: void mirror(int32_t width);

    public: BasicArrayList* getMatrix();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_PIPELINE_BASICGRAPHICSPIPELINE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_PIPELINE_BASICGRAPHICSPIPELINE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_PIPELINE_BASICGRAPHICSPIPELINE_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/math/Angle.h>)
#include <org/allbinary/math/Angle.h>
#endif
#if __has_include(<org/allbinary/math/NoDecimalTrigTable.h>)
#include <org/allbinary/math/NoDecimalTrigTable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
