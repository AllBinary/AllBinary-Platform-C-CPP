
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLES_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLES_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonResult.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MotionRectangles
            : public Object
         {

    private: std::string name;

    private: BasicArrayList rectangleVector;

    private: ImageComparisonResult imageComparisonResult;

    protected: const int32_t MAX_PIXEL_DISTANCE_THRESHOLD = 2;

public: MotionRectangles(std::string name, ImageComparisonResult imageComparisonResult);

    public: BasicArrayList getVector();

    public: void setVector(BasicArrayList rectangleVector);

    public: std::string getName();

    public: ImageComparisonResult getImageComparisonResult();

    public: void setImageComparisonResult(ImageComparisonResult imageComparisonResult);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLES_H
