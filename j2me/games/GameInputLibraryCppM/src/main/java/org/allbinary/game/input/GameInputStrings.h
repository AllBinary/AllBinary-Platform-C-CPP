
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_GAMEINPUTSTRINGS_H
        #define ORG_ALLBINARY_GAME_INPUT_GAMEINPUTSTRINGS_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInputStrings
            : public Object
         {

    private: static GameInputStrings instance() { return GameInputStrings(); }

    public: static GameInputStrings getInstance();

    public: const std::string PROCESS_INPUT = "processInput";

    public: const std::string KEY_PRESSED = "keyPressed";

    public: const std::string KEY_RELEASED = "keyReleased";

    public: const std::string KEY_REPEATED = "keyRepeated";

    public: const std::string ON_PRESS_GAME_KEY = "onPressGameKeyEvent";

    public: const std::string ON_DOWN_GAME_KEY = "onDownGameKeyEvent";

    public: const std::string ON_UP_GAME_KEY = "onUpGameKeyEvent";

    public: const std::string NO_KEY = "Key Code Not Mapped For Game: ";

    public: const std::string ADD_KEY_EVENT = "addGameKeyEvent";

    public: const std::string REMOVE_KEY_EVENT = "removeGameKeyEvent";

    public: const std::string STRAFE_LEFT = "strafeLeft";

    public: const std::string STRAFE_RIGHT = "strafeRight";

    public: const std::string PROCESS_MOTION_INPUT = "processMotionInput";

    public: const std::string UDPATE_CURRENT_TOUCH_INPUT_FACTORY = "updateCurrentTouchInputFactory";

    public: const std::string ENABLE_PLAYER_GAME_INPUTS = "Enabling PlayerGameInputs: ";

    public: const std::string ENABLE_PLAYER_GAME_INPUT = "Enabling PlayerGameInput: ";

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_GAMEINPUTSTRINGS_H
