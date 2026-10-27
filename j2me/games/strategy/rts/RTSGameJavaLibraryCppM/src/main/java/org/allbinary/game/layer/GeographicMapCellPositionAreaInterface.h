
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREAINTERFACE_H
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREAINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class BasicGeographicMap;
class GeographicMapCellPosition;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeographicMapCellPositionAreaInterface
            : public virtual Object
         {

    public: virtual GeographicMapCellPosition* getNextSurroundingGeographicMapCellPosition() = 0;

    public: virtual BasicArrayList* getOccupyingGeographicMapCellPositionList() = 0;

    public: virtual BasicArrayList* getSurroundingGeographicMapCellPositionList() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void update(BasicGeographicMap* geographicMapInterface) = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREAINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREAINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREAINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
