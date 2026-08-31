
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

            #include "../../../../../java/lang/Throwable.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputMapping.h"

class InputToGameKeyMapping: public InputMapping {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static InputToGameKeyMapping getNullInstance();

    private: const gameKeyFactory: GameKeyFactory = GameKeyFactory.getInstance()!;

    private: const mappedGameKeys: std::vector<GameKey> = 
                                                        [
                                                            this.gameKeyFactory!.UP,this.gameKeyFactory!.DOWN,this.gameKeyFactory!.LEFT,this.gameKeyFactory!.RIGHT
                                                        ];

    private: const platformToGameKeyMapping: std::vector<GameKey> = new Array(InputFactory.getInstance()!.MAX);

    negativePlatformToGameKeyMapping: std::vector<GameKey> = [];

public constructor ();

    clear();

    removeAll();

    public addMapping(InputToGameKeyMapping inputToGameKeyMapping);

    addAll(Input input, BasicArrayList list);

    public add(Input input, Input mappedToInput);

    public remove(Input input, Input mappedToInput);

    set(Input input, Input mappedToInput);

    public int32_t getMaxMappable();

    public BasicArrayList getReverseInstance(int32_t id);

                //@Throws(Exception.constructor)
            
    initGameKey(Canvas canvas, GameKey gameKey);

                //@Throws(Exception.constructor)
            
    int32_t getSmallestCanvasGameKeyCode(Canvas canvas);

    public init(Canvas canvas);

    public GameKey getInstanceForCanvas(Canvas canvas, int32_t id);

    public GameKey getInstance(int32_t id);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTTOGAMEKEYMAPPING_H
