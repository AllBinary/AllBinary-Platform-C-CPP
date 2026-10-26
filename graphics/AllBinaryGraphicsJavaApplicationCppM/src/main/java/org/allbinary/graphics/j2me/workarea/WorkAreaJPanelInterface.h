
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJPANELINTERFACE_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJPANELINTERFACE_H

            #include "java/lang/Exception.h"
        
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "KeyListener.h"

class WorkAreaJPanelInterface: public java::awt::event::KeyListener {

    std::string getName();

    void deselect();

    void select();

    void changeZoom(int32_t factor);

    void explodeAll();

                //@Throws(Exception.constructor)
            
    void autoRotate(int32_t increments, int32_t totalAngle);

                //@Throws(Exception.constructor)
            
    void autoExplode(int32_t numberOfFrames, int32_t explodeType);

                //@Throws(Exception.constructor)
            
    void autoMirror();

    void play();

    void stop();

    bool isPlaying();

                //@Throws(Exception.constructor)
            
    Document toDocument();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJPANELINTERFACE_H
