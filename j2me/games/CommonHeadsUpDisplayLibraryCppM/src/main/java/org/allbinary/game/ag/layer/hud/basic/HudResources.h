
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

            #include "../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HudResources
            : public Object
         {
        

    private: static const instance: HudResources = new HudResources();

    public static HudResources getInstance();

private constructor ();

    public const RESOURCE_LIFE: string = "/hud_life_10_by_10.png";

    public const RESOURCE_HEALTH: string = "/hud_health_10_by_10.png";

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_HUDRESOURCES_H
