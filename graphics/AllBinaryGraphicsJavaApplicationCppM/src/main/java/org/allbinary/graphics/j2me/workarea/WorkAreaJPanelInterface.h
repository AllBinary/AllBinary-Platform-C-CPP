
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/KeyListener.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WorkAreaJPanelInterface: public java::awt::event::KeyListener {

    public: virtual std::string getName() = 0;

    public: virtual void deselect() = 0;

    public: virtual void select() = 0;

    public: virtual void changeZoom(int32_t factor) = 0;

    public: virtual void explodeAll() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void autoRotate(int32_t increments, int32_t totalAngle) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void autoExplode(int32_t numberOfFrames, int32_t explodeType) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void autoMirror() = 0;

    public: virtual void play() = 0;

    public: virtual void stop() = 0;

    public: virtual bool isPlaying() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual Document* toDocument() = 0;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJPANELINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJPANELINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJPANELINTERFACE_H_COMPLETE
        #if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/KeyListener.h")
#include "org/allbinary/graphics/j2me/workarea/KeyListener.h"
#endif

        #endif
    
