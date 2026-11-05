
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
        



        #ifndef ORG_ALLBINARY_LAYER_NULLLAYER_H
        #define ORG_ALLBINARY_LAYER_NULLLAYER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/Layer.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullLayer: public Layer {

    private: static NullLayer* instance_owner();
    private: static NullLayer* instance;

    public: static NullLayer* getInstance();

private: NullLayer();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_LAYER_NULLLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LAYER_NULLLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_LAYER_NULLLAYER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include("org/allbinary/layer/Layer.h")
#include "org/allbinary/layer/Layer.h"
#endif

        #endif
    
