
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENT_H
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENT_H

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameKeyEvent: public AllBinaryEventObject {
        

    public static GameKeyEvent createEvent(any = {} anyType, int32_t sourceId, int32_t key);

    public static const NONE: GameKeyEvent = new GameKeyEvent(NullUtil.getInstance()!.NULL_OBJECT,  -1,  -1,  -1,  -1, false);

    private: const sourceId: int32_t;

    private: repeated: bool= false;

    private: key: int32_t;

    private: gameActionKey: int32_t= 0;

    private: originalKey: int32_t= 0;

public constructor (any = {} anyType, int32_t sourceId, int32_t originalKey, int32_t gameActionKey, int32_t key, bool repeated);

    public init(any = {} anyType);

    setRepeatEvents(bool repeated);

    public bool hasRepeatEvents();

    public int32_t getKey();

    public string toString();

    public int32_t getOriginalKey();

    public setOriginalKey(int32_t originalKey);

    public int32_t getGameActionKey();

    public setGameActionKey(int32_t gameActionKey);

    public int32_t getSourceId();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENT_H
