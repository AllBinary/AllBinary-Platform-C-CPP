
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONSINGLETON_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONSINGLETON_H

            #include "../../../../java/lang/Object.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameConfiguration.h"

class GameConfigurationSingleton
            : public Object
         {
        

    private: static SINGLETON: GameConfigurationSingleton = new GameConfigurationSingleton();

    public static GameConfigurationSingleton getInstance();

    private: list: BasicArrayList;

    private: hashtable: Hashtable<any, any>;

private constructor ();

    public GameConfiguration getInstanceByName(string name);

    public BasicArrayList getOptionsBasicArrayList();

    public add(GameConfiguration gameConfiguration);

    public Hashtable<any, any> getHashtable();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONSINGLETON_H
