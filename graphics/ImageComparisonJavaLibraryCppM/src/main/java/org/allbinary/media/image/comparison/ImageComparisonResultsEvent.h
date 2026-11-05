
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTSEVENT_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTSEVENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageComparisonResult;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageComparisonResultsEvent: public AllBinaryEventObject {

    private: ImageComparisonResult* imageComparisonResult;

public: ImageComparisonResultsEvent(Object* anyType, ImageComparisonResult* imageComparisonInfo);
public: ImageComparisonResultsEvent(const std::string& anyType, ImageComparisonResult* imageComparisonInfo) : ImageComparisonResultsEvent(JavaString::box(anyType), imageComparisonInfo) { }
public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> ImageComparisonResultsEvent(BoxValue anyType, ImageComparisonResult* imageComparisonInfo) : ImageComparisonResultsEvent(JavaBoxes::toObject(anyType), imageComparisonInfo) { }
public: template<typename BoxElement> ImageComparisonResultsEvent(const std::vector<BoxElement>& anyType, ImageComparisonResult* imageComparisonInfo) : ImageComparisonResultsEvent(JavaBoxes::toObject(anyType), imageComparisonInfo) { }

    public: ImageComparisonResult* getImageComparisonResult();

    public: void setImageComparisonResult(ImageComparisonResult* imageComparisonResult);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTSEVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTSEVENT_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTSEVENT_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include("org/allbinary/media/image/comparison/ImageComparisonResult.h")
#include "org/allbinary/media/image/comparison/ImageComparisonResult.h"
#endif

        #endif
    
