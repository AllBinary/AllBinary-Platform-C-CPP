
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_H
        #define ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_H

            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicGameInfoFactory
            : public Object
         {
        

    private: static const SINGLETON: BasicGameInfoFactory = new BasicGameInfoFactory();

    public static BasicGameInfoFactory getInstance();

    public currentReleaseIndex: int32_t= 0;

    public currentDestroyIndex: int32_t= 0;

    public total: int32_t= 0;

private constructor ();

    public init(int32_t total);

    public bool isPeaked();

    public int32_t howManyLeft();

};

            


        #endif //ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_H
