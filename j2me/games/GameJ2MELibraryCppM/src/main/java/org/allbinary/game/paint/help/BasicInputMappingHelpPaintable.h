
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_HELP_BASICINPUTMAPPINGHELPPAINTABLE_H
        #define ORG_ALLBINARY_GAME_PAINT_HELP_BASICINPUTMAPPINGHELPPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class GameKey;
class GameKeyFactory;
class Input;
class PlatformInputMappingFactory;
class GameInputMapping;
class PersistentInputMapping;
class BasicColor;
class BasicColorFactory;
class StringMaker;
class CommonSeps;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/paint/help/HelpPaintable.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicInputMappingHelpPaintable: public HelpPaintable {

    private: std::vector<GameInputMapping*> gameInputMappingArray;

    private: GameKey* NONE;

/*protected*/ public: BasicInputMappingHelpPaintable(std::vector<GameInputMapping*> gameInputMappingArray, BasicColor* basicColor);

    public: void update(GameKey* selectedGameKey, Input* selectedInput);

    private: std::string get(BasicArrayList* keyList);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_HELP_BASICINPUTMAPPINGHELPPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PAINT_HELP_BASICINPUTMAPPINGHELPPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PAINT_HELP_BASICINPUTMAPPINGHELPPAINTABLE_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/GameKey.h>)
#include <org/allbinary/game/input/GameKey.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKeyFactory.h>)
#include <org/allbinary/game/input/GameKeyFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/Input.h>)
#include <org/allbinary/game/input/Input.h>
#endif
#if __has_include(<org/allbinary/game/input/PlatformInputMappingFactory.h>)
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/mapping/GameInputMapping.h>)
#include <org/allbinary/game/input/mapping/GameInputMapping.h>
#endif
#if __has_include(<org/allbinary/game/input/mapping/PersistentInputMapping.h>)
#include <org/allbinary/game/input/mapping/PersistentInputMapping.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/paint/help/HelpPaintable.h")
#include "org/allbinary/game/paint/help/HelpPaintable.h"
#endif

        #endif
    
