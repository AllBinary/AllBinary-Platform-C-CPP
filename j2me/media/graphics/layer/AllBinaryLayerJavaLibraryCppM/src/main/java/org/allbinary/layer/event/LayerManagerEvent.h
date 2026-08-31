
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
        



        #ifndef ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENT_H
        #define ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENT_H

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/LayerManager.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LayerManagerEvent: public AllBinaryEventObject {
        

    private: layerInterface: AllBinaryLayer = AllBinaryLayer.NULL_ALLBINARY_LAYER;

    private: const crud: string;

public constructor (LayerManager layerManager, string crud);

    public AllBinaryLayer getLayerInterface();

    public setLayerInterface(AllBinaryLayer layerInterface);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENT_H
