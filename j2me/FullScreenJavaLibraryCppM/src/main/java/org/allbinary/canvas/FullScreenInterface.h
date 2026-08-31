
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
        



        #ifndef ORG_ALLBINARY_CANVAS_FULLSCREENINTERFACE_H
        #define ORG_ALLBINARY_CANVAS_FULLSCREENINTERFACE_H

            #include "../../../java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FullScreenInterface {
        

    bool isFullScreenMode();

    setFullScreenMode(bool mode);

                //@Throws(Exception.constructor)
            
    stopWaiting();

                //@Throws(Exception.constructor)
            
    waitOnNotify(int32_t wait);

};

            


        #endif //ORG_ALLBINARY_CANVAS_FULLSCREENINTERFACE_H
