
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

            #include <vector>
        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputMapping.h"

class InputToGameKeyMapping: public InputMapping {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static InputToGameKeyMapping getNullInstance();

    private: const GameKeyFactory gameKeyFactory = GameKeyFactory::getInstance();

    private: const std::vector<GameKey> mappedGameKeys = 
                                                        {
                                                            this->gameKeyFactory.UP,this->gameKeyFactory.DOWN,this->gameKeyFactory.LEFT,this->gameKeyFactory.RIGHT
                                                        };

    private: const std::vector<GameKey> platformToGameKeyMapping = std::vector<GameKey>(InputFactory::getInstance().MAX);

    protected: std::vector<GameKey> negativePlatformToGameKeyMapping = {};

public: InputToGameKeyMapping();

    private: void clear();

    protected: void removeAll();

    public: void addMapping(InputToGameKeyMapping inputToGameKeyMapping);

    private: void addAll(Input input, BasicArrayList list);

    public: void add(Input input, Input mappedToInput);

    public: void remove(Input input, Input mappedToInput);

    private: void set(Input input, Input mappedToInput);

    public: int32_t getMaxMappable();

    public: BasicArrayList getReverseInstance(int32_t id);

                //@Throws(Exception.constructor)
            
    private: void initGameKey(Canvas canvas, GameKey gameKey);

                //@Throws(Exception.constructor)
            
    private: int32_t getSmallestCanvasGameKeyCode(Canvas canvas);

    public: void init(Canvas canvas);

    public: GameKey getInstanceForCanvas(Canvas canvas, int32_t id);

    public: GameKey getInstance(int32_t id);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTTOGAMEKEYMAPPING_H
