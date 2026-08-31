
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
        
#include <java/util/Vector.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonResult.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MotionRectangles
            : public Object
         {
        

    private: const name: string;

    private: rectangleVector: Vector;

    private: imageComparisonResult: ImageComparisonResult;

    const MAX_PIXEL_DISTANCE_THRESHOLD: int32_t = 2;

public constructor (string name, ImageComparisonResult imageComparisonResult);

    public Vector getVector();

    public setVector(Vector rectangleVector);

    public string getName();

    public ImageComparisonResult getImageComparisonResult();

    public setImageComparisonResult(ImageComparisonResult imageComparisonResult);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLES_H
