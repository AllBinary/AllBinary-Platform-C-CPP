
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_LAYERPLACER_H
        #define ORG_ALLBINARY_GAME_LAYER_LAYERPLACER_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/Enumeration.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/LayerInterfaceFactory.h>

      
#include <org/allbinary/layer/LayerInterfaceVisitor.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/LayerPlacementInterface.h"
#include "org/allbinary/game/layer/LayerPlacementType.h"
#include "org/allbinary/game/layer/LayerPlacementTypeFactory.h"

class LayerPlacer
            : public Object
         {

    private: EnumerationUtil* enumerationUtil = EnumerationUtil::getInstance();

    protected: LayerInterfaceVisitor* layerInterfaceVisitor;

    private: GPoint* dimension;

public: LayerPlacer(LayerInterfaceVisitor* layerInterfaceVisitor, GPoint* dimension);

                //@Throws(Exception.constructor)
            
    public: void processList(BasicArrayList* list);

                //@Throws(Exception.constructor)
            
    public: void process(LayerPlacementInterface* layerPlacementInterface);

                //@Throws(Exception.constructor)
            
    public: GPoint* getPoint(LayerPlacementInterface* layerPlacementInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_LAYERPLACER_H
