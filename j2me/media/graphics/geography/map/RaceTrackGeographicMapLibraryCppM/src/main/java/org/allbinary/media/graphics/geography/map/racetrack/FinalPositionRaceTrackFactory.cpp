
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_FINALPOSITIONRACETRACKFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_FINALPOSITIONRACETRACKFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/FinalPositionRaceTrackFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
int32_t FinalPositionRaceTrackFactory::index = FinalPositionRaceTrackFactory::FIRST_POSITION;

FinalPositionRaceTrackFactory::FinalPositionRaceTrackFactory(){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto FinalPositionRaceTrackFactory::getInstance() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FinalPositionRaceTrackFactory::index++;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto FinalPositionRaceTrackFactory::reset() -> void{
FinalPositionRaceTrackFactory::index= FinalPositionRaceTrackFactory::FIRST_POSITION;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_FINALPOSITIONRACETRACKFACTORY_CPP
