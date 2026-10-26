
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

#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameKeyEvent: public AllBinaryEventObject {

    public: static GameKeyEvent createEvent(Object* anyType, int32_t sourceId, int32_t key);

    public: static const GameKeyEvent NONE = GameKeyEvent(NullUtil::getInstance().NULL_OBJECT,  -1,  -1,  -1,  -1, false);

    private: int32_t sourceId;

    private: bool repeated= false;

    private: int32_t key;

    private: int32_t gameActionKey= 0;

    private: int32_t originalKey= 0;

public: GameKeyEvent(Object* anyType, int32_t sourceId, int32_t originalKey, int32_t gameActionKey, int32_t key, bool repeated);

    public: void init(Object* anyType);

    private: void setRepeatEvents(bool repeated);

    public: bool hasRepeatEvents();

    public: int32_t getKey();

    public: std::string toString();

    public: int32_t getOriginalKey();

    public: void setOriginalKey(int32_t originalKey);

    public: int32_t getGameActionKey();

    public: void setGameActionKey(int32_t gameActionKey);

    public: int32_t getSourceId();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENT_H
