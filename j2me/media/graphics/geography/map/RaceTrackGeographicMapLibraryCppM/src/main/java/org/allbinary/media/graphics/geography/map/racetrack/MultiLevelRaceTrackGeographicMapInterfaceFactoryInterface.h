
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_MULTILEVELRACETRACKGEOGRAPHICMAPINTERFACEFACTORYINTERFACE_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_MULTILEVELRACETRACKGEOGRAPHICMAPINTERFACEFACTORYINTERFACE_H

            #include "../../../../../../../java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RaceTrackGeographicMapInterfaceFactoryInterface.h"

class MultiLevelRaceTrackGeographicMapInterfaceFactoryInterface: public RaceTrackGeographicMapInterfaceFactoryInterface {
        

                //@Throws(Exception.constructor)
            
    int32_t getFirstWaveWithTrack(int32_t track);

    int32_t getTotalTracks();

    int32_t getTotalLevels();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_MULTILEVELRACETRACKGEOGRAPHICMAPINTERFACEFACTORYINTERFACE_H
