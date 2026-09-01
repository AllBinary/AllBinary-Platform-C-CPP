
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ActivityFractureControllerUtilFactory.h"
#include "AndroidKeyFactory.h"
#include "AndroidGameKey.h"
#include "Input.h"

class PlatformKeyFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static PlatformKeyFactory getInstance();

    private: const AndroidKeyFactory androidKeyFactory = ActivityFractureControllerUtilFactory::getInstance();

    public: std::string getString(int32_t keyCode);

    public: bool isSubmission(Input input);

    public: bool isDelete(Input input);

    public: bool isBackSpace(Input input);

    public: bool isLeft(Input input);

    public: bool isRight(Input input);

    public: bool isUp(Input input);

    public: bool isDown(Input input);

    public: bool isEnter(Input input);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_H
