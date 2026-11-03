
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDEMOPAINTABLE_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDEMOPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/DemoPaintableInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullDemoPaintable
            : public virtual Object
        , public virtual DemoPaintableInterface {

    private: static NullDemoPaintable* NULL_DEMO_PAINTABLE_owner();
    public: static NullDemoPaintable* NULL_DEMO_PAINTABLE;


            
    public: NullDemoPaintable();
        
    public: void showGamePaintable();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDEMOPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDEMOPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLDEMOPAINTABLE_H_COMPLETE
        #if __has_include("org/allbinary/game/displayable/canvas/DemoPaintableInterface.h")
#include "org/allbinary/game/displayable/canvas/DemoPaintableInterface.h"
#endif

        #endif
    
