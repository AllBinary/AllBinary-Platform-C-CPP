
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/Enumeration.h>
class GPoint;
class PointFactory;
class AllBinaryLayer;
class LayerInterfaceFactory;
class LayerInterfaceVisitor;
template<typename T1, typename T2> class ABHashtable;
class BasicArrayList;
class EnumerationUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LayerPlacementInterface;
class LayerPlacementType;
class LayerPlacementTypeFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LayerPlacer
            : public virtual Object
         {

    private: EnumerationUtil* enumerationUtil;

    /*protected*/ public: LayerInterfaceVisitor* layerInterfaceVisitor;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_LAYERPLACER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_LAYERPLACER_H_COMPLETE
        #if __has_include(<java/util/Enumeration.h>)
#include <java/util/Enumeration.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/LayerInterfaceFactory.h>)
#include <org/allbinary/layer/LayerInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/layer/LayerInterfaceVisitor.h>)
#include <org/allbinary/layer/LayerInterfaceVisitor.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/EnumerationUtil.h>)
#include <org/allbinary/util/EnumerationUtil.h>
#endif
#if __has_include("org/allbinary/game/layer/LayerPlacementInterface.h")
#include "org/allbinary/game/layer/LayerPlacementInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/LayerPlacementType.h")
#include "org/allbinary/game/layer/LayerPlacementType.h"
#endif
#if __has_include("org/allbinary/game/layer/LayerPlacementTypeFactory.h")
#include "org/allbinary/game/layer/LayerPlacementTypeFactory.h"
#endif

        #endif
    
