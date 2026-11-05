
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
        



        #ifndef ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENT_H
        #define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        

class StringMaker;
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicTerrainInfo;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TerrainEvent: public AllBinaryEventObject {

    private: BasicTerrainInfo* basicTerrainInfo;

public: TerrainEvent(Object* basicTerrainInfo);
public: TerrainEvent(const std::string& basicTerrainInfo) : TerrainEvent(JavaString::box(basicTerrainInfo)) { }
public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> TerrainEvent(BoxValue basicTerrainInfo) : TerrainEvent(JavaBoxes::toObject(basicTerrainInfo)) { }
public: template<typename BoxElement> TerrainEvent(const std::vector<BoxElement>& basicTerrainInfo) : TerrainEvent(JavaBoxes::toObject(basicTerrainInfo)) { }

    public: std::string toString();

    public: BasicTerrainInfo* getBasicTerrainInfo();

    public: void setBasicTerrainInfo(BasicTerrainInfo* basicTerrainInfo);

    public: void setBasicTerrainInfoForCircularStaticPool(BasicTerrainInfo* basicTerrainInfo);

};

            


        #endif //ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENT_H_COMPLETE
        
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include("org/allbinary/game/terrain/BasicTerrainInfo.h")
#include "org/allbinary/game/terrain/BasicTerrainInfo.h"
#endif

        #endif
    
