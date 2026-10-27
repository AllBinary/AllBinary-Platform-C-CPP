
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HUDRESOURCES_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HUDRESOURCES_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HudResources
            : public Object
         {

    private: static HudResources* instance() { static std::unique_ptr<HudResources> value(new HudResources()); return value.get(); }

    public: static HudResources* getInstance();

private: HudResources();

    public: const std::string RESOURCE_LIFE = "/hud_life_10_by_10.png";

    public: const std::string RESOURCE_HEALTH = "/hud_health_10_by_10.png";

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HUDRESOURCES_H
