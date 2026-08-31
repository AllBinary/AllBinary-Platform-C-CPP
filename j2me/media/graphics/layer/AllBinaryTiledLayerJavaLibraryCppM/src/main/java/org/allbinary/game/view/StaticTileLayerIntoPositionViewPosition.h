
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
        



        #ifndef ORG_ALLBINARY_GAME_VIEW_STATICTILELAYERINTOPOSITIONVIEWPOSITION_H
        #define ORG_ALLBINARY_GAME_VIEW_STATICTILELAYERINTOPOSITIONVIEWPOSITION_H

#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/layer/NullLayer.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StaticTileLayerIntoPositionViewPosition: public ViewPosition {
        

    private: static tiledLayer: Layer = NullLayer.getInstance()!;

    public static layer: AllBinaryLayer = AllBinaryLayer.NULL_ALLBINARY_LAYER;

    public static setTiledLayer(AllBinaryTiledLayer tiledLayer);

public constructor ();

    public int32_t getX();

    public int32_t getY();

    public int32_t getZ();

};

            


        #endif //ORG_ALLBINARY_GAME_VIEW_STATICTILELAYERINTOPOSITIONVIEWPOSITION_H
