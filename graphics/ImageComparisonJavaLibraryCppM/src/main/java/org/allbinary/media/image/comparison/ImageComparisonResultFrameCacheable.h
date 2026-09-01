
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTFRAMECACHEABLE_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTFRAMECACHEABLE_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Long.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageComparisonResult.h"

class ImageComparisonResultFrameCacheable
            : public Object
        : public CacheableInterface {

    private: Long frame;

    private: ImageComparisonResult imageComparisonResult;

public: ImageComparisonResultFrameCacheable(ImageComparisonResult imageComparisonResult, Long frame);

    public: Object* getKey();

    public: Long getFrame();

    public: void setFrame(Long frame);

    public: ImageComparisonResult getImageComparisonResult();

    public: void setImageComparisonResult(ImageComparisonResult imageComparisonResult);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTFRAMECACHEABLE_H
