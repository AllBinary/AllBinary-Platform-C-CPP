
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINEWEAPONRESOURCES_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINEWEAPONRESOURCES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MineWeaponResources: public BasicGameResources {

    private: static Object* instance;

    public: static MineWeaponResources* getInstance();

    public: const std::string DROP_TEXT_RESOURCE = "/mine_drop_text_20_by_20.png";

    public: const std::string DROP_RESOURCE = "/mine_drop_20_by_20.png";

    public: const std::string DROP_ICON_RESOURCE = "/mine_drop_icon_20_by_20.png";

/*protected*/ public: MineWeaponResources();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINEWEAPONRESOURCES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINEWEAPONRESOURCES_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINEWEAPONRESOURCES_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/resources/BasicGameResources.h>)
#include <org/allbinary/game/layer/resources/BasicGameResources.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif

        #endif
    
