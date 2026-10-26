
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLE_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLE_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Cloneable.h"
        
#include <java/awt/Rectangle.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MotionRectangle
            : public Object
        : public Cloneable {

    private: Rectangle rectangle;

    private: BasicArrayList pixelDeltaVector;

public: MotionRectangle(Rectangle rectangle);

    public: Rectangle getRectangle();

    public: void setRectangle(Rectangle rectangle);

    public: BasicArrayList getPixelDeltaVector();

    public: void setPixelDeltaVector(BasicArrayList pixelDeltaVector);

    public: Object* clone();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLE_H
