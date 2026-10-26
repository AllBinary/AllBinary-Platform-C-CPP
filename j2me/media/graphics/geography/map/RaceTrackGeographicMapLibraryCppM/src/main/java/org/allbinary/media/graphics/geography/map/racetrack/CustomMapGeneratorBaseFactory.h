
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomMapGeneratorBase.h"
#include "RaceTrackGeographicMap.h"

class CustomMapGeneratorBaseFactory
            : public Object
         {

    private: static CustomMapGeneratorBaseFactory instance() { return CustomMapGeneratorBaseFactory(); }

    public: static CustomMapGeneratorBaseFactory getInstance();

public: CustomMapGeneratorBaseFactory();

                //@Throws(Exception.constructor)
            
    public: CustomMapGeneratorBase create(RaceTrackGeographicMap raceTrackGeographicMap);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_CUSTOMMAPGENERATORBASEFACTORY_H
