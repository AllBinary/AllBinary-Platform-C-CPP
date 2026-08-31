
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
        



        #ifndef ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENT_H
        #define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENT_H

#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicTerrainInfo.h"

class TerrainEvent: public AllBinaryEventObject {
        

    private: basicTerrainInfo: BasicTerrainInfo = BasicTerrainInfo.NULL_BASIC_TERRAIN_INFO;

public constructor (any = {} basicTerrainInfo);

    public string toString();

    public BasicTerrainInfo getBasicTerrainInfo();

    public setBasicTerrainInfo(BasicTerrainInfo basicTerrainInfo);

    public setBasicTerrainInfoForCircularStaticPool(BasicTerrainInfo basicTerrainInfo);

};

            


        #endif //ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENT_H
