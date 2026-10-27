
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_CUSTOMMAPGENERATORBASEFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_CUSTOMMAPGENERATORBASEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBaseFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBase.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h"

auto CustomMapGeneratorBaseFactory::instance_owner() -> CustomMapGeneratorBaseFactory* { static std::unique_ptr<CustomMapGeneratorBaseFactory> value(new CustomMapGeneratorBaseFactory()); return value.get(); }
CustomMapGeneratorBaseFactory* CustomMapGeneratorBaseFactory::instance = CustomMapGeneratorBaseFactory::instance_owner();

    auto CustomMapGeneratorBaseFactory::getInstance() -> CustomMapGeneratorBaseFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CustomMapGeneratorBaseFactory::instance;
    
}


CustomMapGeneratorBaseFactory::CustomMapGeneratorBaseFactory(){
}


                //@Throws(Exception.constructor)
            
    auto CustomMapGeneratorBaseFactory::create(RaceTrackGeographicMap* raceTrackGeographicMap) -> CustomMapGeneratorBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new CustomMapGeneratorBase();
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_CUSTOMMAPGENERATORBASEFACTORY_CPP
