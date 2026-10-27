
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINEWEAPONRESOURCES_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINEWEAPONRESOURCES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/weapon/mine/MineWeaponResources.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
Object* MineWeaponResources::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto MineWeaponResources::getInstance() -> MineWeaponResources*{

                        if(MineWeaponResources::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    MineWeaponResources::instance= new MineWeaponResources();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<MineWeaponResources*>(MineWeaponResources::instance);
    
}


MineWeaponResources::MineWeaponResources(){

    std::string ROOT = "/mine";;
    

    std::string SMALL = "_20_by_20.png";;
    

    std::string MEDIUM = SMALL;;
    

    std::string SIZE_FOUR = SMALL;;
    

    std::string SIZE_FIVE = SMALL;;
    

    std::string SIZE_SIX = SMALL;;
    

    std::vector<std::string> SIZE = 
                                                        {
                                                            SMALL,MEDIUM,SIZE_FOUR,SIZE_FIVE,SIZE_SIX
                                                        };;
    
BasicGameResources::init(ROOT, SIZE);
    
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINEWEAPONRESOURCES_CPP
