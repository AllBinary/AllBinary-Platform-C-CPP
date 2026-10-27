
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_EXPLOSIONRESOURCES_H
        #define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_EXPLOSIONRESOURCES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ExplosionResources
            : public virtual Object
         {

    private: static ExplosionResources* instance_owner();
    private: static ExplosionResources* instance;

    public: static ExplosionResources* getInstance();

private: ExplosionResources();

    public: const std::string EXPLOSION_90_RESOURCE = "/explosion_sprite_90_by_90.png";

    public: const std::string EXPLOSION_60_RESOURCE = "/explosion_sprite_60_by_60.png";

    public: const std::string HALF_EXPLOSION_RESOURCE = "/explosion_sprite_30_by_30.png";

    public: const std::string THIRD_EXPLOSION_RESOURCE = "/explosion_sprite_15_by_15.png";

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DAMAGE_EXPLOSIONRESOURCES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COMBAT_DAMAGE_EXPLOSIONRESOURCES_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_EXPLOSIONRESOURCES_H_COMPLETE
        
        #endif
    
