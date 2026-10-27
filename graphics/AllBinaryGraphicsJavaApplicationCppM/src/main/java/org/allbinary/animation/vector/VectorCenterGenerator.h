
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_VECTORCENTERGENERATOR_H
        #define ORG_ALLBINARY_ANIMATION_VECTOR_VECTORCENTERGENERATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>
class GPoint;
class GraphicItemInterface;
class LinesGraphicItem;
class Points;
class BasicGraphicsPipeline;
class LogUtil;
class StringMaker;
class CommonLabels;
class CommonStrings;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VectorCenterGenerator
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static BasicArrayList* translate(BasicArrayList* list, int32_t x, int32_t y);

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    public: int32_t minX;

    public: int32_t minY;

    public: int32_t maxX;

    public: int32_t maxY;

    private: int32_t dx = 0;

    private: int32_t dy = 0;

    private: int32_t width= 0;

    private: int32_t height= 0;

public: VectorCenterGenerator();

                //@Throws(Exception.constructor)
            
    public: void calculate(HashMap<Object*, Object*>* hashMap);

                //@Throws(Exception.constructor)
            
    public: void transform(HashMap<Object*, Object*>* hashMap);

                //@Throws(Exception.constructor)
            
    private: void getInstance(BasicArrayList* pointVector);

    public: int32_t getWidth();

    public: void setWidth(int32_t width);

    public: int32_t getHeight();

    public: void setHeight(int32_t height);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_VECTORCENTERGENERATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_VECTOR_VECTORCENTERGENERATOR_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_VECTOR_VECTORCENTERGENERATOR_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h>)
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h>)
#include <org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/tools/Points.h>)
#include <org/allbinary/graphics/j2me/workarea/tools/Points.h>
#endif
#if __has_include(<org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h>)
#include <org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
