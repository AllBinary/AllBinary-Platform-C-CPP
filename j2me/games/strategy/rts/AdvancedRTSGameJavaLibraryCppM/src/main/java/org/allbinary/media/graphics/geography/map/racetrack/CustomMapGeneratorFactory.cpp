
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
        



            #include "../../../../../../../java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomMapGeneratorBaseFactory.h"
#include "CustomMapGenerator.h"
#include "CustomMapGeneratorBase.h"
#include "RaceTrackGeographicMap.h"

class CustomMapGeneratorFactory: public CustomMapGeneratorBaseFactory {

                //@Throws(Exception.constructor)
            
    public: CustomMapGeneratorBase create(RaceTrackGeographicMap raceTrackGeographicMap){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CustomMapGenerator(raceTrackGeographicMap);
    
}


};

            

