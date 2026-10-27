
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicTerrainInfo
            : public Object
         {

    public: static BasicTerrainInfo* NULL_BASIC_TERRAIN_INFO() { static std::unique_ptr<BasicTerrainInfo> value(new BasicTerrainInfo(AngleFactory::getInstance()->NOT_ANGLE)); return value.get(); }

    private: Angle* angle;

public: BasicTerrainInfo(Angle* angle){
this->angle= angle;
    
}


    public: Angle* getAngle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->angle;
    
}


    public: void setAngle(Angle* angle){
this->angle= angle;
    
}


};

            

