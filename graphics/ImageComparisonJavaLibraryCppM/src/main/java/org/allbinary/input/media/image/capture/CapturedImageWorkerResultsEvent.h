
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
        



        #ifndef ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_CAPTUREDIMAGEWORKERRESULTSEVENT_H
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_CAPTUREDIMAGEWORKERRESULTSEVENT_H

            #include "java/lang/Long.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CapturedImageWorkerResultsEvent: public AllBinaryEventObject {

    private: Long frame;

    private: BufferedImage bufferedImage;

public: CapturedImageWorkerResultsEvent(Object* anyType, Long frame, BufferedImage bufferedImage);

    public: BufferedImage getBufferedImage();

    private: void setBufferedImage(BufferedImage bufferedImage);

    public: Long getFrame();

};

            


        #endif //ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_CAPTUREDIMAGEWORKERRESULTSEVENT_H
