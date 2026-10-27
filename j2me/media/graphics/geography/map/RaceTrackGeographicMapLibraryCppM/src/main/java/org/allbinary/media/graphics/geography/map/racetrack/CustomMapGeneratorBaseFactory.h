
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_CUSTOMMAPGENERATORBASEFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_CUSTOMMAPGENERATORBASEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CustomMapGeneratorBase;
class RaceTrackGeographicMap;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CustomMapGeneratorBaseFactory
            : public virtual Object
         {

    private: static CustomMapGeneratorBaseFactory* instance_owner();
    private: static CustomMapGeneratorBaseFactory* instance;

    public: static CustomMapGeneratorBaseFactory* getInstance();

public: CustomMapGeneratorBaseFactory();

                //@Throws(Exception.constructor)
            
    public: CustomMapGeneratorBase* create(RaceTrackGeographicMap* raceTrackGeographicMap);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_CUSTOMMAPGENERATORBASEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_CUSTOMMAPGENERATORBASEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_CUSTOMMAPGENERATORBASEFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBase.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBase.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h"
#endif

        #endif
    
