
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_H
        #define ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_H

            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicGameInfoFactory
            : public Object
         {

    private: static const BasicGameInfoFactory SINGLETON = BasicGameInfoFactory();

    public: static BasicGameInfoFactory getInstance();

    public: int32_t currentReleaseIndex= 0;

    public: int32_t currentDestroyIndex= 0;

    public: int32_t total= 0;

private: BasicGameInfoFactory();

    public: void init(int32_t total);

    public: bool isPeaked();

    public: int32_t howManyLeft();

};

            


        #endif //ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_H
