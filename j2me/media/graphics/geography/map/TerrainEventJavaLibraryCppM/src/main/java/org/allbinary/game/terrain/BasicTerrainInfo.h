
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
        



        #ifndef ORG_ALLBINARY_GAME_TERRAIN_BASICTERRAININFO_H
        #define ORG_ALLBINARY_GAME_TERRAIN_BASICTERRAININFO_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicTerrainInfo
            : public Object
         {
        

    public static const NULL_BASIC_TERRAIN_INFO: BasicTerrainInfo = new BasicTerrainInfo(AngleFactory.getInstance()!.NOT_ANGLE);

    private: angle: Angle;

public constructor (Angle angle);

    public Angle getAngle();

    public setAngle(Angle angle);

};

            


        #endif //ORG_ALLBINARY_GAME_TERRAIN_BASICTERRAININFO_H
