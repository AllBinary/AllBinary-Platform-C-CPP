
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UNIT_UNITGAMERESOURCES_H
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITGAMERESOURCES_H

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>

      
#include <org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UnitGameResources: public BasicGameResources {
        

    private: static const ICON: string = "_icon";

    private: static const BUILD: string = "_build";

    private: static const DESTROY: string = "_destroy";

    private: static const ICON_BUILD: string = "_icon" +UnitGameResources.BUILD;

    public NAME: string = StringUtil.getInstance()!.EMPTY_STRING;

    public RESOURCE_ICON_ANIMATION: string = StringUtil.getInstance()!.EMPTY_STRING;

    public RESOURCE_ICON_BUILD: string = StringUtil.getInstance()!.EMPTY_STRING;

    public RESOURCE_ICON: string = StringUtil.getInstance()!.EMPTY_STRING;

protected constructor ();

    private: const ICON_SIZE: string = "_64_by_64.png";

                //@Throws(Exception.constructor)
            
    append(string ROOT, string sizeString);

                //@Throws(Exception.constructor)
            
    string getString();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITGAMERESOURCES_H
