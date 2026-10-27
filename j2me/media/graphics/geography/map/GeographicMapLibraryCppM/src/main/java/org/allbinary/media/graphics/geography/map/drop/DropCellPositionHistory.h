
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_DROPCELLPOSITIONHISTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_DROPCELLPOSITIONHISTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicArrayList;
class BasicArrayListD;
class CellPosition;
class CellPositionFactory;
class AllBinaryLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DropCellPositionHistory
            : public virtual Object
         {

    private: static DropCellPositionHistory* SINGLETON_owner();
    private: static DropCellPositionHistory* SINGLETON;

    public: static DropCellPositionHistory* getInstance();


            
    public: DropCellPositionHistory();
        
    private: CellPositionFactory* cellPositionFactory;

    private: BasicArrayList* positionList;

    private: BasicArrayList* layerList;

    public: void add(CellPosition* cellPosition, AllBinaryLayer* layerInterface);

    public: void addAll(BasicArrayList* list, AllBinaryLayer* layerInterface);

    public: void remove(CellPosition* cellPosition);

    public: void removeAll(AllBinaryLayer* layerInterface);

    public: void clear();

    public: bool isCellPositionWithDrop(CellPosition* cellPosition);

    public: bool anyCellPositionWithDrop(BasicArrayList* list);

    public: CellPosition* getCellPositionWithDrop(BasicArrayList* list);

    public: AllBinaryLayer* getLayerInterface(CellPosition* cellPosition);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_DROPCELLPOSITIONHISTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_DROPCELLPOSITIONHISTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_DROPCELLPOSITIONHISTORY_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/graphics/CellPosition.h>)
#include <org/allbinary/graphics/CellPosition.h>
#endif
#if __has_include(<org/allbinary/graphics/CellPositionFactory.h>)
#include <org/allbinary/graphics/CellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif

        #endif
    
