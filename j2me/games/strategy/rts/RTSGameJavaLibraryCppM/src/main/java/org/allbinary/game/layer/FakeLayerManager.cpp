
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_FAKELAYERMANAGER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_FAKELAYERMANAGER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/FakeLayerManager.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"


FakeLayerManager::FakeLayerManager(GameInfo* gameInfo) : AllBinaryGameLayerManager(BasicColorFactory::getInstance()->BLACK, BasicColorFactory::getInstance()->WHITE, gameInfo), geographicMapInterfaceArray(BasicGeographicMap::NULL_BASIC_GEOGRAPHIC_MAP_ARRAY), geographicMapCellTypeArray_(GeographicMapCellType::NULL_GEOGRAPHIC_MAP_CELL_TYPE_ARRAY){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto FakeLayerManager::getGeographicMapInterface() -> std::vector<BasicGeographicMap*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapInterfaceArray;
    
}


    auto FakeLayerManager::setGeographicMapInterface(std::vector<BasicGeographicMap*> geographicMapInterfaceArray) -> void{
this->geographicMapInterfaceArray= geographicMapInterfaceArray;
    
this->geographicMapCellTypeArray_= std::vector<GeographicMapCellType*>(this->geographicMapInterfaceArray.size());
    
}


    auto FakeLayerManager::geographicMapCellTypeArray() -> std::vector<GeographicMapCellType*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellTypeArray_;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_FAKELAYERMANAGER_CPP
