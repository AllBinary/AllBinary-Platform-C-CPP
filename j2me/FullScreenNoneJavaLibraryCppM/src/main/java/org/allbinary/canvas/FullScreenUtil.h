
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
        



        #ifndef ORG_ALLBINARY_CANVAS_FULLSCREENUTIL_H
        #define ORG_ALLBINARY_CANVAS_FULLSCREENUTIL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FullScreenUtil
            : public Object
         {

    private: static FullScreenUtil* instance() { static std::unique_ptr<FullScreenUtil> value(new FullScreenUtil()); return value.get(); }

    public: static FullScreenUtil* getInstance();

                //@Throws(Exception.constructor)
            
    public: void initOnRun(Canvas* fullScreenInterface, CommandListener* commandListener);

    public: void init(Canvas* fullScreenInterface);

    public: bool isScreenChange(bool isFullScreen);

    public: bool isScreenChangeCanvas(Canvas* fullScreenInterface);

};

            


        #endif //ORG_ALLBINARY_CANVAS_FULLSCREENUTIL_H
