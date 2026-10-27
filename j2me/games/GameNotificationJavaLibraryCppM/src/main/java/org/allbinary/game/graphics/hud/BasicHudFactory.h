
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
        



        #ifndef ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUDFACTORY_H
        #define ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUDFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicHudFactory
            : public virtual Object
         {

    private: static BasicHudFactory* instance_owner();
    private: static BasicHudFactory* instance;

    public: static BasicHudFactory* getInstance();

private: BasicHudFactory();

    public: const std::string DIRECTION_EXCEPTION = "Only Horizontal Direction is Allowed Currently";

    public: const int32_t VERTICAL = 0;

    public: const int32_t HORIZONTAL = 1;

    public: const int32_t BOTTOMLEFT = 0;

    public: const int32_t BOTTOMRIGHT = 1;

    public: const int32_t TOPLEFT = 2;

    public: const int32_t TOPRIGHT = 3;

    public: const int32_t BOTTOMCENTER = 4;

    public: const int32_t TOPCENTER = 5;

    public: const int32_t ABSOLUTE = 6;

};

            


        #endif //ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUDFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUDFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUDFACTORY_H_COMPLETE
        
        #endif
    
