
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_SCREENLISTENERHANDLER_H
        #define ORG_ALLBINARY_GRAPHICS_SCREENLISTENERHANDLER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ScreenEmptyListener;
class ScreenListenerInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ScreenListenerHandler
            : public virtual Object
         {

    private: static ScreenListenerHandler* instance_owner();
    private: static ScreenListenerHandler* instance;

    public: static ScreenListenerHandler* getInstance();


            
    public: ScreenListenerHandler();
        
    private: ScreenListenerInterface* screenListenerInterface;

    public: void setListener(ScreenListenerInterface* screenListenerInterface);

    public: void fireWithState(bool isFullScreen);

    public: void fire();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_SCREENLISTENERHANDLER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_SCREENLISTENERHANDLER_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_SCREENLISTENERHANDLER_H_COMPLETE
        #if __has_include("org/allbinary/graphics/ScreenEmptyListener.h")
#include "org/allbinary/graphics/ScreenEmptyListener.h"
#endif
#if __has_include("org/allbinary/graphics/ScreenListenerInterface.h")
#include "org/allbinary/graphics/ScreenListenerInterface.h"
#endif

        #endif
    
