
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
        



        #ifndef ORG_ALLBINARY_GAME_GRAPHICS_HUD_HUDGRAPHICSPOSITION_H
        #define ORG_ALLBINARY_GAME_GRAPHICS_HUD_HUDGRAPHICSPOSITION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GPoint;
class PointFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HudGraphicsPosition
            : public virtual Object
         {

    private: static HudGraphicsPosition* NULL_HUD_GRAPHICS_POSITION_owner();
    public: static HudGraphicsPosition* NULL_HUD_GRAPHICS_POSITION;

    private: int32_t anchor= 0;

    private: GPoint* point;

public: HudGraphicsPosition(GPoint* point, int32_t anchor);

    public: int32_t getAnchor();

    private: void setAnchor(int32_t anchor);

    public: GPoint* getPoint();

    public: void setPoint(GPoint* point);

};

            


        #endif //ORG_ALLBINARY_GAME_GRAPHICS_HUD_HUDGRAPHICSPOSITION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_GRAPHICS_HUD_HUDGRAPHICSPOSITION_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_GRAPHICS_HUD_HUDGRAPHICSPOSITION_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif

        #endif
    
