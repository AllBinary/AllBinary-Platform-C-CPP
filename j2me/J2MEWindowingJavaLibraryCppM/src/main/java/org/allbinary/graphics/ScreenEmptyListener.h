
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_SCREENEMPTYLISTENER_H
        #define ORG_ALLBINARY_GRAPHICS_SCREENEMPTYLISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/ScreenListenerInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ScreenEmptyListener
            : public virtual Object
        , public virtual ScreenListenerInterface {


            
    public: ScreenEmptyListener();
        
    public: void onFullScreen(bool isFullScreen);

    public: void onFullScreenDisplay();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_SCREENEMPTYLISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_SCREENEMPTYLISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_SCREENEMPTYLISTENER_H_COMPLETE
        #if __has_include("org/allbinary/graphics/ScreenListenerInterface.h")
#include "org/allbinary/graphics/ScreenListenerInterface.h"
#endif

        #endif
    
