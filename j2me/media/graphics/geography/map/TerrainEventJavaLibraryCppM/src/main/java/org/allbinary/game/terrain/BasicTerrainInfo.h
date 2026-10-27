
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Angle;
class AngleFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicTerrainInfo
            : public virtual Object
         {

    private: static BasicTerrainInfo* NULL_BASIC_TERRAIN_INFO_owner();
    public: static BasicTerrainInfo* NULL_BASIC_TERRAIN_INFO;

    private: Angle* angle;

public: BasicTerrainInfo(Angle* angle);

    public: Angle* getAngle();

    public: void setAngle(Angle* angle);

};

            


        #endif //ORG_ALLBINARY_GAME_TERRAIN_BASICTERRAININFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_TERRAIN_BASICTERRAININFO_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_TERRAIN_BASICTERRAININFO_H_COMPLETE
        #if __has_include(<org/allbinary/math/Angle.h>)
#include <org/allbinary/math/Angle.h>
#endif
#if __has_include(<org/allbinary/math/AngleFactory.h>)
#include <org/allbinary/math/AngleFactory.h>
#endif

        #endif
    
