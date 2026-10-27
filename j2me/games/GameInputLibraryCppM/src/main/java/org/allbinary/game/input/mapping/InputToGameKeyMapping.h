
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTTOGAMEKEYMAPPING_H
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTTOGAMEKEYMAPPING_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
class Canvas;
class GameKey;
class GameKeyFactory;
class Input;
class InputFactory;
class NullUtil;
class PreLogUtil;
class StringMaker;
class StringUtil;
class CommonLabels;
class CommonSeps;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/mapping/InputMapping.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputToGameKeyMapping: public InputMapping {

    private: static Object* instance;

    public: static InputToGameKeyMapping* getNullInstance();

    private: GameKeyFactory* gameKeyFactory;

    private: std::vector<GameKey*> mappedGameKeys;

    private: std::vector<GameKey*> platformToGameKeyMapping;

    /*protected*/ public: std::vector<GameKey*> negativePlatformToGameKeyMapping;

public: InputToGameKeyMapping();

    private: void clear();

    /*protected*/ public: void removeAll();

    public: void addMapping(InputToGameKeyMapping* inputToGameKeyMapping);

    private: void addAll(Input* input, BasicArrayList* list);

    public: void add(Input* input, Input* mappedToInput);

    public: void remove(Input* input, Input* mappedToInput);

    private: void set(Input* input, Input* mappedToInput);

    public: int32_t getMaxMappable();

    public: BasicArrayList* getReverseInstance(int32_t id);

                //@Throws(Exception.constructor)
            
    private: void initGameKey(Canvas* canvas, GameKey* gameKey);

                //@Throws(Exception.constructor)
            
    private: int32_t getSmallestCanvasGameKeyCode(Canvas* canvas);

    public: void init(Canvas* canvas);

    public: GameKey* getInstanceForCanvas(Canvas* canvas, int32_t id);

    public: GameKey* getInstance(int32_t id);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTTOGAMEKEYMAPPING_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTTOGAMEKEYMAPPING_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTTOGAMEKEYMAPPING_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKey.h>)
#include <org/allbinary/game/input/GameKey.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKeyFactory.h>)
#include <org/allbinary/game/input/GameKeyFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/Input.h>)
#include <org/allbinary/game/input/Input.h>
#endif
#if __has_include(<org/allbinary/game/input/InputFactory.h>)
#include <org/allbinary/game/input/InputFactory.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/input/mapping/InputMapping.h")
#include "org/allbinary/game/input/mapping/InputMapping.h"
#endif

        #endif
    
