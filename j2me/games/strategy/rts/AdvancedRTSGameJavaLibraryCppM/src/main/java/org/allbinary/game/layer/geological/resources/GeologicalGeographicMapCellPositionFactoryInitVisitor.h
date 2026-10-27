
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITIONFACTORYINITVISITOR_H
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITIONFACTORYINITVISITOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AllBinaryTiledLayer;
class GeographicMapCellPosition;
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInitVisitorInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GeologicalGeographicMapCellPosition;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeologicalGeographicMapCellPositionFactoryInitVisitor
            : public virtual Object
        , public GeographicMapCellPositionFactoryInitVisitorInterface {


            
    public: GeologicalGeographicMapCellPositionFactoryInitVisitor();
        
                //@Throws(Exception.constructor)
            
    public: void visit(AllBinaryTiledLayer* tiledLayer, GeographicMapCellPosition* cellPosition);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITIONFACTORYINITVISITOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITIONFACTORYINITVISITOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGEOGRAPHICMAPCELLPOSITIONFACTORYINITVISITOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInitVisitorInterface.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInitVisitorInterface.h>
#endif
#if __has_include("org/allbinary/game/layer/geological/resources/GeologicalGeographicMapCellPosition.h")
#include "org/allbinary/game/layer/geological/resources/GeologicalGeographicMapCellPosition.h"
#endif

        #endif
    
