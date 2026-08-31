
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

#include <org/allbinary/game/layer/resources/BasicGameResources.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MineWeaponResources: public BasicGameResources {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static MineWeaponResources getInstance();

    public const DROP_TEXT_RESOURCE: string = "/mine_drop_text_20_by_20.png";

    public const DROP_RESOURCE: string = "/mine_drop_20_by_20.png";

    public const DROP_ICON_RESOURCE: string = "/mine_drop_icon_20_by_20.png";

protected constructor ();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINEWEAPONRESOURCES_H
