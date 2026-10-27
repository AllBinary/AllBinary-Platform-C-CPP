
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_GAMETICKDISPLAYINFOSINGLETON_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_GAMETICKDISPLAYINFOSINGLETON_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DisplayInfoSingleton;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameTickDisplayInfoSingleton
            : public virtual Object
         {

    private: static GameTickDisplayInfoSingleton* instance_owner();
    private: static GameTickDisplayInfoSingleton* instance;

    public: static GameTickDisplayInfoSingleton* getInstance();


            
    public: GameTickDisplayInfoSingleton();
        
    private: DisplayInfoSingleton* displayInfoSingleton;

    private: int32_t lastWidth;

    private: int32_t lastHeight;

    private: int32_t lastHalfWidth;

    private: int32_t lastHalfHeight;

    public: void update();

    public: int32_t getLastWidth();

    public: int32_t getLastHeight();

    public: int32_t getLastHalfWidth();

    public: int32_t getLastHalfHeight();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_GAMETICKDISPLAYINFOSINGLETON_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_GAMETICKDISPLAYINFOSINGLETON_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_GAMETICKDISPLAYINFOSINGLETON_H_COMPLETE
        #if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif

        #endif
    
