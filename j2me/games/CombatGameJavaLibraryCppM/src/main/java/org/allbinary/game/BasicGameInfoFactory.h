
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_H
        #define ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicGameInfoFactory
            : public Object
         {

    private: static BasicGameInfoFactory* SINGLETON() { static std::unique_ptr<BasicGameInfoFactory> value(new BasicGameInfoFactory()); return value.get(); }

    public: static BasicGameInfoFactory* getInstance();

    public: int32_t currentReleaseIndex= 0;

    public: int32_t currentDestroyIndex= 0;

    public: int32_t total= 0;

private: BasicGameInfoFactory();

    public: void init(int32_t total);

    public: bool isPeaked();

    public: int32_t howManyLeft();

};

            


        #endif //ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_H
