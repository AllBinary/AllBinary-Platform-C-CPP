
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_LINEPATHANIMATION_H
        #define ORG_ALLBINARY_GAME_LAYER_LINEPATHANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Graphics;
class GPoint;
class Layer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LinePathAnimation
            : public virtual Object
         {

    private: static LinePathAnimation* instance_owner();
    private: static LinePathAnimation* instance;

    public: static LinePathAnimation* getInstance();


            
    public: LinePathAnimation();
        
    public: void paint(Graphics* graphics, GPoint* point, GPoint* nextPoint, Layer* tiledLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_LINEPATHANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_LINEPATHANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_LINEPATHANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/layer/Layer.h>)
#include <org/allbinary/layer/Layer.h>
#endif

        #endif
    
