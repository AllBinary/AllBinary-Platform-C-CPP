
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"


GeographicMapCellPositionFactory::GeographicMapCellPositionFactory() : logUtil(LogUtil::getInstance()) {
        }
        ABHashtable<Object*, Object*>* GeographicMapCellPositionFactory::hashtable = StdUtil::getInstance()->createHashtable();

                //@Throws(Exception.constructor)
            
    auto GeographicMapCellPositionFactory::getInstance(BasicGeographicMap* geographicMapInterface) -> BasicGeographicMapCellPositionFactory*{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    AllBinaryTiledLayer* allBinaryTiledLayer = geographicMapInterface->getAllBinaryTiledLayer();;
    

    Object* geographicMapCellPositionFactoryCanBeNull = GeographicMapCellPositionFactory::hashtable->get(allBinaryTiledLayer->getDataId());;
    

                        if(geographicMapCellPositionFactoryCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append("Creating GeographicMapCellPositionFactory for TileLayer: ")->appendint(allBinaryTiledLayer->getDataId()->intValue())->toString(), this, commonStrings->GET_INSTANCE);
    
geographicMapCellPositionFactoryCanBeNull= new BasicGeographicMapCellPositionFactory(geographicMapInterface);
    
GeographicMapCellPositionFactory::hashtable->put(allBinaryTiledLayer->getDataId(), geographicMapCellPositionFactoryCanBeNull);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<BasicGeographicMapCellPositionFactory*>(geographicMapCellPositionFactoryCanBeNull);
    

                                    }
                                
                        else {
                            this->logUtil->putF((new StringMaker())->append("Reusing GeographicMapCellPositionFactory for TileLayer: ")->appendint(allBinaryTiledLayer->getDataId()->intValue())->toString(), this, commonStrings->GET_INSTANCE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<BasicGeographicMapCellPositionFactory*>(geographicMapCellPositionFactoryCanBeNull);
    

                        }
                            
}


    auto GeographicMapCellPositionFactory::getHashtable() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GeographicMapCellPositionFactory::hashtable;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONFACTORY_CPP
